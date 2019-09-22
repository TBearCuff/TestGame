#include "TestGameStd.h"

#include "../../GameEngine/Source/GameEngine/GameEngineApp.h"

#include "TestHumanView.h"

#include "../../GameEngine/Source/Graphics3D/Geometry.h"


TestMainMenuUI::TestMainMenuUI() : BaseUI()
{

}

TestMainMenuUI::~TestMainMenuUI()
{
    m_vertex.release();
}

const GLfloat vertices[] = {
    -0.5f, -0.5f, 0.0f,
    0.5f, -0.5f, 0.0f,
    0.0f, 0.5f, 0.0f
};


bool TestMainMenuUI::VOnRestore()
{
//    GLfloat sqVertices[] = {
//         0.5f,  0.5f, 0.0f,  // Top Right
//         0.5f, -0.5f, 0.0f,  // Bottom Right
//        -0.5f, -0.5f, 0.0f,  // Bottom Left
//        -0.5f,  0.5f, 0.0f   // Top Left
//    };
    GLuint sqIndices[] = {  // Note that we start from 0!
        0, 1, 3,  // First Triangle
        1, 2, 3   // Second Triangle
    };

    GLfloat vertices[] = {
    // Positions
    // Colors
    // Texture Coords
    0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, // Top Right
    0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, // Bottom Right
    -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, // Bottom Left
    -0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 1.0f   // Top Left
    };

    if(!m_vertex.create())
    {
        qDebug() << "Vertex buffer not created";
    }
    if(!m_vertex.bind())
    {
        qDebug() << "Vertex buffer not bound to context";
    }
    m_vertex.setUsagePattern(QOpenGLBuffer::StaticDraw);
    m_vertex.allocate(vertices, sizeof(vertices));
//    m_vertex.allocate(sqVertices, sizeof(sqVertices));

    m_index = new QOpenGLBuffer(QOpenGLBuffer::IndexBuffer);
    m_index->create();
    m_index->bind();
    m_index->setUsagePattern(QOpenGLBuffer::StaticDraw);
    m_index->allocate(sqIndices, sizeof(sqIndices));

    QImage *image = new QImage("container.jpg");
    texture = new QOpenGLTexture(image->mirrored());
    texture->bind();

    return true;
}

void TestMainMenuUI::VOnRender(double, float)
{
    texture->bind();
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, (GLvoid*)0);
//    glDrawArrays(GL_TRIANGLES, 0, 3);
}

bool TestMainMenuUI::VOnMsgProc(AppMsg msg)
{
    Q_UNUSED(msg);
//    return BaseUI::VOnMsgProc(msg);
    return true;
}

TestHumanView::TestHumanView(QSharedPointer<OpenGLRenderWindow> renderer) : HumanView(renderer )
{
    m_MainMenuUI.reset(GCC_NEW TestMainMenuUI);
    VPushElement(m_MainMenuUI);
}

TestHumanView::~TestHumanView()
{

}

void TestHumanView::VOnUpdate(unsigned long deltaMS)
{
    HumanView::VOnUpdate(deltaMS);
}

