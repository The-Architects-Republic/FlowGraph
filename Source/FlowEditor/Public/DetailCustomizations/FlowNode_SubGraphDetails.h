// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors
#pragma once

#include "IDetailCustomization.h"

// #ARKREP_MODIFIED_CODE : Added export macro + Removed final so our code is still compatible (maybe it should change?)
class FLOWEDITOR_API FFlowNode_SubGraphDetails : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance()
	{
		return MakeShareable(new FFlowNode_SubGraphDetails);
	}

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
};
