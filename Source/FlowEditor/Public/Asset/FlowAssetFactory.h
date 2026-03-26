// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors
#pragma once

#include "Factories/Factory.h"
#include "FlowAssetFactory.generated.h"

UCLASS(Abstract, HideCategories = Object)
class FLOWEDITOR_API UFlowAssetFactory : public UFactory
{
/* #ARK_REP_MODIFIED_CODE : Added Abstract to this class because we made our own factory (UARKGraphAssetFactory)
 * and we don't want this factory to be directly usable. */
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category = Asset)
	TSubclassOf<class UFlowAsset> AssetClass;

	virtual bool ConfigureProperties() override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

protected:
	/* Parameterized guts of ConfigureProperties(). */
	bool ConfigurePropertiesInternal(const FText& TitleText);
};
