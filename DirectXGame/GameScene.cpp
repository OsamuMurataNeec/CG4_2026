#include "GameScene.h"

using namespace KamataEngine;

void GameScene::Initialize() {
	// 3Dモデルデータの生成
	modelParticle_ = Model::CreateSphere(4, 4);

	camera_.Initialize();

	// パーティクルの生成
	particle_ = new Particle();

	// パーティクルの初期化
	particle_->Initialize();
}

void GameScene::Update() {

	particle_->Update();
}

void GameScene::Draw() {

	particle_->Draw();
}

GameScene::GameScene() {

}

GameScene::~GameScene() {

	// 3Dモデルデータの解放
	delete modelParticle_;

	delete particle_;
}

