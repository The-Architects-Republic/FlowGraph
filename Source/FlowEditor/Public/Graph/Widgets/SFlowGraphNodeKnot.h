// Copyrights ArkRep

#pragma once

#include "CoreMinimal.h"

#include "SGraphNodeKnot.h"


// #ARKREP_MODIFIED_CODE 

/**
 * Our custom ARKREP flow graph node knot.
 * Handle shadow brush when marked as 'start here'
 */
class FLOWEDITOR_API SFlowGraphNodeKnot : public SGraphNodeKnot
{
public:
	SLATE_BEGIN_ARGS(SFlowGraphNodeKnot) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, class UEdGraphNode* InKnot);

	virtual const FSlateBrush* GetShadowBrush(bool selected) const override;
};
