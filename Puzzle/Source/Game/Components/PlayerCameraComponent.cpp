#include "PlayerCameraComponent.h"
#include "GameEngine/GameEngineMain.h"
#include "GameEngine/Util/CameraManager.h"

using namespace Game;

PlayerCameraComponent::PlayerCameraComponent() {}

PlayerCameraComponent::~PlayerCameraComponent() {}

void PlayerCameraComponent::OnAddToWorld() {}

void PlayerCameraComponent::Update() {
  GameEngine::CameraManager::GetInstance()->GetCameraView().setCenter(
      GetEntity()->GetPos());
}
