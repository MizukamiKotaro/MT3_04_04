#pragma once
#include "Ball.h"
#include "Spring.h"
#include "Pendulum.h"
#include "ConicalPendulum.h"
#include "Plane.h"

void BehaviorSpring(Spring* spring, Ball* ball);

void BehaviorSpring(Spring* spring, Ball* ball, const MyVector3& gravity);

void BehaviorCircleMovement(MyVector3* position, const float& angularVelocity, float* angle, const float& radius, const MyVector3& point);

void BehaviorCircleMovement(Ball* ball, const float& angularVelocity, float* angle, const float& radius, const MyVector3& point);

void BehaviorCircleMovement(MyVector3* position, const float& angularVelocity, float* angle, const MyVector3& point);

void BehaviorCircleMovement(Ball* ball, const float& angularVelocity, float* angle, const MyVector3& point);

void BehaviorPendulum(Pendulum* pendulum);

void BehaviorConicalPendulum(ConicalPendulum* conicalPendulum);

MyVector3 Reflect(const MyVector3& input, const MyVector3& normal);

void Reflect(Ball* ball, const MyVector3& normal, const float& distance, const float& e);

void Reflect(Ball* ball, const Plane& plane, const float& e);