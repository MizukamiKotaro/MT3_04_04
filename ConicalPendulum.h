#pragma once
#include "MyVector3.h"
#include "MyMatrix4x4.h"
#include<cstdint>

struct ConicalPendulum
{
	MyVector3 anchor; // アンカーポイント
	MyVector3 endPos; // 固定されてない方の端

	float length; // 紐の長さ
	float halfApexAngle; // 円錐の頂角の半分
	float angle; // 現在の角度
	float angularVelocity; // 角速度

	void Draw(const MyMatrix4x4& viewProjectionMatrix, const MyMatrix4x4& viewportMatrix, uint32_t color);
};

