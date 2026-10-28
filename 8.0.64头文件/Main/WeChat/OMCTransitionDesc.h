@interface OMCTransitionDesc : NSObject
{
    SharedPtr<XMSTransitionDesc> _backingTransitionDesc; // +0x8
}
- (id)initWithTransitionID:(id)arg1;
- (id)initWithBackingTransitionDesc:(const void *)arg1;
- (id)transitionID;
- (BOOL)isOverlapped;
- (BOOL)isBlankTransition;
- (struct)suggestedTotalDuration;
- (struct)suggestedTransInDuration;
- (struct)suggestedTransOutDuration;
- (SharedPtr<XMSTransitionDesc>)backingTransitionDesc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
