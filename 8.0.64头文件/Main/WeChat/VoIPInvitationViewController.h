@interface VoIPInvitationViewController : MMWindowViewController <VoIPInvitationBreadthViewDelegate, VoIPInvitationWindowDelegate, _TtP6WeChat26CarPlayVoIPReceiveDelegate_>
{
    BOOL _isMultiTalking; // +0x7c
    BOOL _isRingPlayed; // +0x7d
    BOOL _shouldVibrate; // +0x7e
    id <VoIPInvitationViewControllerDelegate> _delegate; // +0x80
    VoIPInvitationInfo * _info; // +0x88
    VoIPInvitationBreadthView * _breadthView; // +0x90
    unsigned long long _talkingRoomID; // +0x98
    long long _talkingRoomKey; // +0xa0
    RingToneMixPlayer * _ringToneMixPlayer; // +0xa8
    id /* block */ _stopRingDispatchBlock; // +0xb0
    id /* block */ _inviteBreadthTimeoutBlock; // +0xb8
}
- (BOOL)isHidden;
- (id)initWithInfo:(id)arg1 talkingRoomID:(unsigned long long)arg2 talkingRoomKey:(long long)arg3 isMultiTalking:(BOOL)arg4;
- (void)scrollIn;
- (void)clearIfNeedAnimation:(BOOL)arg1;
- (void)restoreInviteScene;
- (void)showInWindow;
- (void)accept;
- (void)hangupManually:(BOOL)arg1;
- (void)hangup;
- (void)loadBreadthView;
- (void)clearStopRingDispatchBlock;
- (void)stopRing;
- (void)clearInviteBreadthTimeoutBlock;
- (void)dealloc;
- (void)vibrateClassicIfNeed;
- (void)viewDidLoad;
- (void)voIPInvitationBreadthViewWillScrollOut:(id)arg1 manually:(BOOL)arg2;
- (void)voIPInvitationBreadthViewDidScrollOut:(id)arg1 manually:(BOOL)arg2;
- (void)voIPInvitationBreadthViewDidInterceptScrollingOut:(id)arg1;
- (void)voIPInvitationBreadthViewWillSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewDidSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewHangup:(id)arg1;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(id)arg1;
- (BOOL)canTouchWithPoint:(CGPoint)arg1 event:(id)arg2 fromView:(id)arg3;
- (void)applicationDidBecomeActive;
- (void)onCarPlayVoIPReceiveTemplateClickHangup;
- (void)onCarPlayVoIPReceiveTemplateClickAcceptWithNeedCloseCamera:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)breadthView;
- (void)setBreadthView:(id)arg1;
- (unsigned long long)talkingRoomID;
- (void)setTalkingRoomID:(unsigned long long)arg1;
- (long long)talkingRoomKey;
- (void)setTalkingRoomKey:(long long)arg1;
- (BOOL)isMultiTalking;
- (void)setIsMultiTalking:(BOOL)arg1;
- (id)ringToneMixPlayer;
- (void)setRingToneMixPlayer:(id)arg1;
- (BOOL)isRingPlayed;
- (void)setIsRingPlayed:(BOOL)arg1;
- (id /* block */)stopRingDispatchBlock;
- (void)setStopRingDispatchBlock:(id /* block */)arg1;
- (id /* block */)inviteBreadthTimeoutBlock;
- (void)setInviteBreadthTimeoutBlock:(id /* block */)arg1;
- (BOOL)shouldVibrate;
- (void)setShouldVibrate:(BOOL)arg1;
- (void).cxx_destruct;
@end
