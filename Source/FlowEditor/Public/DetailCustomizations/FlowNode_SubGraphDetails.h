// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

#pragma once

#include "IDetailCustomization.h"

// #ARKREP_MODIFIED_CODE : Removed final from this class and added FLOWEDITOR_API 
class FLOWEDITOR_API FFlowNode_SubGraphDetails /*final*/ : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance()
	{
		return MakeShareable(new FFlowNode_SubGraphDetails);
	}

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
};
