#include <GL/glew.h>
#include "VertexBuffer.h"


VertexBuffer::VertexBuffer(unsigned int size, const void *data) : m_RendererID(0), size(size), data(data) {
    glGenBuffers(1, &m_RendererID);
}

VertexBuffer::~VertexBuffer() {
    glDeleteBuffers(1, &m_RendererID);
}

void VertexBuffer::Bind() const {
    glBindBuffer(GL_VERTEX_ARRAY, m_RendererID);
}

void VertexBuffer::Unbind() const {
    glBindBuffer(GL_VERTEX_ARRAY, 0);
}
