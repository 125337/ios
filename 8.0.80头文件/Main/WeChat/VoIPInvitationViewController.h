@interface VoIPInvitationViewController : MMWindowViewController <VoIPInvitationBreadthViewDelegate, VoIPInvitationWindowDelegate, _TtP6WeChat26CarPlayVoIPReceiveDelegate_>
{
    BOOL _fromIgnore; // +0x7c
    BOOL _isMultiTalking; // +0x7d
    BOOL _isRingPlayed; // +0x7e
    BOOL _shouldVibrate; // +0x7f
    BOOL _cachedIsVideoRoomType; // +0x80
    id <VoIPInvitationViewControllerDelegate> _delegate; // +0x88
    VoIPInvitationInfo * _info; // +0x90
    VoIPInvitationBreadthView * _breadthView; // +0x98
    unsigned long long _talkingRoomID; // +0xa0
    long long _talkingRoomKey; // +0xa8
    RingToneMixPlayer * _ringToneMixPlayer; // +0xb0
    id /* block */ _stopRingDispatchBlock; // +0xb8
    id /* block */ _inviteBreadthTimeoutBlock; // +0xc0
    VoIPInComingReportManager * _voipReportManager; // +0xc8
    long long _cachedReportCallType; // +0xd0
}
- (BOOL)isHidden;
- (void)setFromIgnore:(BOOL)arg1;
- (id)initWithInfo:(id)arg1 talkingRoomID:(unsigned long long)arg2 talkingRoomKey:(long long)arg3 isMultiTalking:(BOOL)arg4;
- (void)updateWithInvitationInfo:(id)arg1;
- (void)updateInvitationInfoScene:(unsigned long long)arg1;
- (void)scrollIn;
- (void)clearIfNeedAnimation:(BOOL)arg1;
- (void)restoreInviteScene;
- (void)showInWindow;
- (void)enterFloatWindowDirectly;
- (void)accept;
- (void)hangupManually:(BOOL)arg1;
- (void)hangup;
- (void)loadBreadthView;
- (unsigned long long)supportedInterfaceOrientations;
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
- (void)voIPInvitationBreadthViewDidInviteViewIgnore:(id)arg1;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenIgnore:(id)arg1;
- (BOOL)canTouchWithPoint:(CGPoint)arg1 event:(id)arg2 fromView:(id)arg3;
- (BOOL)isInBreath;
- (BOOL)isInBreathInviteScene;
- (BOOL)isInBreathQuickReplyScene;
- (void)applicationDidBecomeActive;
- (void)didEnterBackground;
- (void)didTurnOffScreen;
- (void)onCarPlayVoIPReceiveTemplateClickHangup;
- (void)onCarPlayVoIPReceiveTemplateClickAcceptWithNeedCloseCamera:(BOOL)arg1;
- (id)voipBannerReportParams;
- (void)reportVoipBannerViewExposure;
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
- (BOOL)fromIgnore;
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
- (id)voipReportManager;
- (void)setVoipReportManager:(id)arg1;
- (long long)cachedReportCallType;
- (void)setCachedReportCallType:(long long)arg1;
- (BOOL)cachedIsVideoRoomType;
- (void)setCachedIsVideoRoomType:(BOOL)arg1;
- (void).cxx_destruct;
@end
