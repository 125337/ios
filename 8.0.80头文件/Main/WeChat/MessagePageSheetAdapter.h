@interface MessagePageSheetAdapter : MMPageSheetAdapter <MMPageSheetAdapterDelegate, MMUIViewControllerExt>
{
    BOOL _markUnreadAtClose; // +0x8
    BOOL _isPageSheetPresented; // +0x9
    CMessageWrap * _jumpTargetMsg; // +0x10
    id <MessagePageSheetAdapterDelegate> _bizDelegate; // +0x18
    BaseMsgContentViewController * _msgVC; // +0x20
    MessagePageSheetTransition * _presentTransition; // +0x28
    NSString * _currUsername; // +0x30
}
+ (id)adapterWithMsgViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (double)pageSheetContentWidth;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetPresentWillBegin:(id)arg1;
- (void)pageSheetWillBePresentFrom:(id)arg1 inContainer:(id)arg2;
- (void)pageSheetDidRotation:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)jumpTargetMsg;
- (void)setJumpTargetMsg:(id)arg1;
- (id)bizDelegate;
- (void)setBizDelegate:(id)arg1;
- (id)msgVC;
- (void)setMsgVC:(id)arg1;
- (id)presentTransition;
- (void)setPresentTransition:(id)arg1;
- (BOOL)markUnreadAtClose;
- (void)setMarkUnreadAtClose:(BOOL)arg1;
- (BOOL)isPageSheetPresented;
- (void)setIsPageSheetPresented:(BOOL)arg1;
- (id)currUsername;
- (void)setCurrUsername:(id)arg1;
- (void).cxx_destruct;
@end
