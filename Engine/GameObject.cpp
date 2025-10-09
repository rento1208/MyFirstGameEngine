#include "GameObject.h"

GameObject::GameObject()
          :pParent_(nullptr)
{

}

GameObject::GameObject(GameObject* parent, const std::string& name)
    :pParent_(parent),objectName_(name)
{
}

GameObject::~GameObject()
{
}

void GameObject::DrawSub()
{
    //������`��
    this->Draw();
    //�q�I�u�W�F�N�g��`�� childList_�̊e�v�f�ɑ΂���Draw���Ă�
    
    for (auto& child : childList_)
    {
        child->Draw();
    }

}
