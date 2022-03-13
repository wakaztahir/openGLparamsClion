
#pragma once

class VertexBuffer {
private:
	unsigned int m_RendererID;
	unsigned int size;
	const void* data;
public:
	VertexBuffer(unsigned int size,const void* data);
	~VertexBuffer();

	void Bind() const;
	void Unbind() const;
};