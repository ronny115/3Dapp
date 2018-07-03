#ifndef _USERINTERFACECLASS_H_
#define _USERINTERFACECLASS_H_
#include "textclass.h"

class UserInterfaceClass
{
public:
	UserInterfaceClass();
	UserInterfaceClass(const UserInterfaceClass&);
	~UserInterfaceClass();

	bool Initialize(D3DClass*, int, int);
	void Shutdown();

	bool Frame(ID3D11DeviceContext*, int, int, float, float, float, float, float, float);
	bool Render(D3DClass*, ShaderManagerClass*, XMMATRIX, XMMATRIX, XMMATRIX);

private:
	bool UpdateFpsString(ID3D11DeviceContext*, int);
	bool UpdateCpuString(ID3D11DeviceContext*, int);
	bool UpdatePositionStrings(ID3D11DeviceContext*, float, float, float, float, float, float);

	FontClass* m_Font1;
	TextClass *m_FpsString, *m_VideoStrings, *m_PositionStrings, *m_CpuString;
	int m_previousFps;
	int m_previousPosition[6];
};

#endif