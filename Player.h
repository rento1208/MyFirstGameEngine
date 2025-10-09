#pragma once
#include "Engine/GameObject.h"

//前方宣言
class Fbx;

class Player :
    public GameObject
{
    Fbx* pFbx_;
public:
    Player(GameObject* parent);
    ~Player();
    //純粋仮想関数のオーバーライド
    void Initialize()override;
    void Update()override;
    void Draw()override;
    void Release()override;

};

