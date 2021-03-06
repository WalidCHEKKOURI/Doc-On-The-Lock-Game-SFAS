// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MyBTTaskIncrementPathIndex.generated.h"

/**
 * 
 */
UCLASS()
class UNREALSFAS_API UMyBTTaskIncrementPathIndex : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:

	UMyBTTaskIncrementPathIndex(FObjectInitializer const& ObjectInitializer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	enum class EDirectionType
	{
		Forward, Reverse
	};

	EDirectionType DirectionEnum = EDirectionType::Forward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
		bool bBidirectional = true;

};
