#include "RootJob.h"
#include "../PlayScene.h"

RootJob::RootJob(GameObject* parent)
	:GameObject(parent, "RootJob")
{
	
}

RootJob::~RootJob()
{
}

void RootJob::Initialize()
{
	//PlayScene�𐶐����āA�q�I�u�W�F�N�g�ɒǉ�����
	//PLayScene�̃C���X�^���X�𐶐�
	PlayScene* pPlayScene = new PlayScene(this);
	//PlayScene��intialize���Ă�
	pPlayScene->Initialize();
	childList_.push_back(pPlayScene);
	

}

void RootJob::Update()
{
}

void RootJob::Draw()
{
}

void RootJob::Release()
{
}
