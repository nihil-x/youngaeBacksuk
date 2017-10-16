#include "stdafx.h"
#include "Index_Second.h"


Index_Second::Index_Second()
{
}


Index_Second::~Index_Second()
{
}

void Index_Second::Setup(char * texture, BodyPart body)
{
	cCube::Setup(texture, body);

	D3DXMATRIXA16 matS, matT, matWorld;
	D3DXMatrixScaling(&matS, 0.8f, 1.5f, 0.8f);
	D3DXMatrixTranslation(&matT, -3.6f, 1.5f, 0.0f);

	matWorld = matS * matT;

	for (int i = 0; i < m_vecVertex.size(); i++)
	{
		D3DXVec3TransformCoord(&m_vecVertex[i].p, &m_vecVertex[i].p, &matWorld);
	}

	m_vLocalPos.y += 3.0f;


}
