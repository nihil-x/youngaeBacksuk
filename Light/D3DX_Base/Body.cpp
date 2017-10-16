#include "stdafx.h"
#include "Body.h"


Body::Body()
{
}


Body::~Body()
{
}

void Body::Setup()
{
	CubeClass::Setup();

	D3DXMATRIXA16 matS, matT, matWorld;
	D3DXMatrixScaling(&matS, 0.8f, 1.2f, 0.4f);
	D3DXMatrixTranslation(&matT, 0.0f, 0.0f, 0.0f);

	matWorld = matS * matT;

	for (int i = 0; i < m_vecVertex.size(); i++)
	{
		D3DXVec3TransformCoord(&m_vecVertex[i].p, &m_vecVertex[i].p, &matWorld);
	}

	m_vLocalPos.y += 3.0f;
}