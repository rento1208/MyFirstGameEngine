#pragma once
#include "Engine/GameObject.h"

//�O���錾
class Fbx;

class Player :
    public GameObject
{
    Fbx* pFbx_;
public:
    Player(GameObject* parent);
    ~Player();
    //�������z�֐��̃I�[�o�[���C�h
    void Initialize()override;
    void Update()override;
    void Draw()override;
    void Release()override;

};

