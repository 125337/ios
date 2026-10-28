@interface MMEasterEggController : MMObject <MMEasterEggActivityDelegate, MMEasterEggEffectDelegateImplicitAnimation>
{
    id <MMEasterEggControllerDelegate> _delegate; // +0x8
    NSString * _chatUsername; // +0x10
    NSString * _sessionId; // +0x18
    MMEasterEggMatch * _eggMatch; // +0x20
    MMEasterEggEffect * _effect; // +0x28
    id <MMEasterEggActivity> _activity; // +0x30
    MMEasterEggActivityChatReportObject * _reportObject; // +0x38
    NSMutableArray * _pendingMsgs; // +0x40
}
- (void)dealloc;
- (void)startEasterEggWithBatchMessages:(id)arg1;
- (void)startEasterEggWithMessage:(id)arg1;
- (BOOL)canMessageTypeShowEgg:(id)arg1;
- (void)tryResumeCheckEasterEgg;
- (void)reset;
- (void)stopEasterEgg;
- (void)stopEasterEggWithReason:(unsigned int)arg1;
- (BOOL)privateStartEasterEggWithMessage:(id)arg1 isSender:(BOOL)arg2;
- (id)description;
- (id)getEffectParentView;
- (double)getEffectParentViewTopInset;
- (void)onTapInteractiveUI;
- (void)onEffectEnd;
- (CGRect)getViewBoundsForAnimationType:(long long)arg1;
- (void)showInteractiveUIWithReportString:(id)arg1;
- (id)getViewController;
- (long long)getEffectType;
- (id)getExtInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)eggMatch;
- (void)setEggMatch:(id)arg1;
- (id)effect;
- (void)setEffect:(id)arg1;
- (id)activity;
- (void)setActivity:(id)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (id)pendingMsgs;
- (void)setPendingMsgs:(id)arg1;
- (void).cxx_destruct;
@end
