@interface WCAdBreakFrameTagLogic : WCAdvertiseOperationLogicBase
{
    int _interactionState; // +0x8
    UIView * _iconViewCache; // +0x10
    UIView * _titleViewCache; // +0x18
    WCAdBreakFramePlayStateTagInfo * _tagInfo; // +0x20
}
- (id)iconViewCache;
- (void)setIconViewCache:(id)arg1;
- (id)titleViewCache;
- (void)setTitleViewCache:(id)arg1;
- (int)interactionState;
- (void)setInteractionState:(int)arg1;
- (id)tagInfo;
- (void)setTagInfo:(id)arg1;
- (void).cxx_destruct;
@end
