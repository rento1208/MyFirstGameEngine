#pragma once

#include "GameObject.h"

class RootJob : public GameObject
{
	RootJob(GameObject* parent);
		~RootJob();
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;
};