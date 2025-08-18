// Copyrights ArkRep

#include "Graph/Widgets/SFlowGraphNodeKnot.h"

#include "FlowEditorStyle.h"
#include "Graph/Nodes/FlowGraphNode.h"


void SFlowGraphNodeKnot::Construct(const FArguments& InArgs, UEdGraphNode* InKnot)
{
	SGraphNodeKnot::Construct(SGraphNodeKnot::FArguments(), InKnot);
}

const FSlateBrush* SFlowGraphNodeKnot::GetShadowBrush(bool selected) const
{
	if (!selected)
	{
		UFlowGraphNode* flowNode = Cast<UFlowGraphNode>(GraphNode);
		if (flowNode && flowNode->GetStartHere())
		{
			return FFlowEditorStyle::Get()->GetBrush(TEXT("Flow.Node.StartHereShadow"));
		}
	}

	return SGraphNodeKnot::GetShadowBrush(selected);
}
