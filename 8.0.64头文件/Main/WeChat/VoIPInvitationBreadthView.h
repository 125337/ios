@interface VoIPInvitationBreadthView : UIView <VoIPInvitationViewInfo, VoIPInvitationBreadthInviteViewDelegate, VoIPInvitationBreadthQuickReplyViewDelegate, VoIPInvitationFullScreenViewDelegate>
{
    BOOL _disableVideoCapture; // +0x8
    BOOL _isAccepted; // +0x9
    BOOL _isScrollingOutDisable; // +0xa
    BOOL _isInviteViewPaning; // +0xb
    BOOL _wasInviteViewDraggedOverThreshold; // +0xc
    BOOL _isQuickReplyViewDismissDelayBlockPaused; // +0xd
    BOOL _isQuickReplyViewPaning; // +0xe
    BOOL _wasQuickReplyViewDraggedOverThreshold; // +0xf
    id <VoIPInvitationBreadthViewDelegate> _delegate; // +0x10
    unsigned long long _scene; // +0x18
    unsigned long long _lastScene; // +0x20
    unsigned long long _animateStatus; // +0x28
    VoIPInvitationInfo * _info; // +0x30
    unsigned long long _layoutScene; // +0x38
    UIView<VoIPInvitationBreadthInviteView> * _inviteView; // +0x40
    UIPanGestureRecognizer * _inviteViewPanGesture; // +0x48
    double _inviteViewContentLeftMargin; // +0x50
    unsigned long long _inviteViewDragType; // +0x58
    VoIPInvitationBreadthQuickReplyView * _quickReplyView; // +0x60
    id /* block */ _quickReplyViewDismissBlock; // +0x68
    id /* block */ _quickReplyViewDismissDelayinglyBlock; // +0x70
    double _quickReplyViewDismissDelayinglySeconds; // +0x78
    UIPanGestureRecognizer * _quickReplyViewPanGesture; // +0x80
    double _quickReplyViewContentLeftMargin; // +0x88
    unsigned long long _quickReplyViewDragType; // +0x90
    UIView<VoIPInvitationFullScreenView> * _fullScreenView; // +0x98
    id /* block */ _setupSceneThemSameUILayoutBlock; // +0xa0
    CGPoint _inviteViewLastPanPostion; // +0xa8
    CGPoint _inviteViewPanStartPos; // +0xb8
    CGPoint _quickReplyViewLastPanPostion; // +0xc8
    CGPoint _quickReplyViewPanStartPos; // +0xd8
}
- (BOOL)isVideo;
- (id)contact;
- (id)currentQuickReplyView;
- (void)setupQuickReplyCaptureImage:(id)arg1;
- (id)videoRender;
- (id)rciLocalRender;
- (void)setScene:(unsigned long long)arg1;
- (void)setInfo:(id)arg1;
- (void)setDisableVideoCapture:(BOOL)arg1;
- (id)touchAreaView;
- (void)setupScene:(unsigned long long)arg1 shouldDelegate:(BOOL)arg2 shouldIgnoreDefaultAnimation:(BOOL)arg3 withDuration:(double)arg4 willBlock:(id /* block */)arg5 otherAnimation:(id /* block */)arg6 didBlock:(id /* block */)arg7;
- (void)setupScene:(unsigned long long)arg1 shouldDelegate:(BOOL)arg2 withCompletion:(id /* block */)arg3 animated:(BOOL)arg4;
- (void)setupScene:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)reset;
- (void)setupSceneInvite;
- (void)setupSceneNone;
- (void)setupSceneQuickReply;
- (void)setupSceneEnd;
- (void)layoutFullScreenView;
- (BOOL)isQuickReplyDisable;
- (void)layoutInviteView;
- (BOOL)handleInviteViewPanGesture:(id)arg1;
- (void)layoutQuickReplyView;
- (void)cancelQuickReplyViewTransforming;
- (void)dismissQuickReplyViewWithBlock:(id /* block */)arg1 afterSeconds:(double)arg2;
- (void)pauseQuickReplyViewDismissDelayBlock;
- (void)resumeQuickReplyViewDismissDelayBlock;
- (void)dismissQuickReplyViewAfterSeconds:(double)arg1 manually:(BOOL)arg2;
- (void)dismissQuickReplyView;
- (void)dismissQuickReplyViewAutomatically;
- (BOOL)handleQuickReplyViewPanGesture:(id)arg1;
- (void)scrollOutWithScene:(unsigned long long)arg1 manually:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1 info:(id)arg2;
- (void)clearSetupSceneThemSameUILayoutBlock;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)voIPInvitationBreadthInviteViewDidClick:(id)arg1;
- (void)voIPInvitationBreadthInviteViewDidAccept:(id)arg1;
- (void)voIPInvitationBreadthInviteViewDidHangup:(id)arg1;
- (void)voIPInvitationBreadthQuickReplyViewDidClick:(id)arg1;
- (void)voIPInvitationFullScreenViewDidMiniInAppButtonClick:(id)arg1;
- (void)voIPInvitationFullScreenViewDidAcceptButtonClick:(id)arg1;
- (void)voIPInvitationFullScreenViewDidHangupButtonClick:(id)arg1;
- (void)removeKVOForDescriptionLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (unsigned long long)lastScene;
- (void)setLastScene:(unsigned long long)arg1;
- (unsigned long long)animateStatus;
- (void)setAnimateStatus:(unsigned long long)arg1;
- (id)info;
- (BOOL)disableVideoCapture;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (BOOL)isScrollingOutDisable;
- (void)setIsScrollingOutDisable:(BOOL)arg1;
- (unsigned long long)layoutScene;
- (void)setLayoutScene:(unsigned long long)arg1;
- (id)inviteView;
- (void)setInviteView:(id)arg1;
- (id)inviteViewPanGesture;
- (void)setInviteViewPanGesture:(id)arg1;
- (CGPoint)inviteViewLastPanPostion;
- (void)setInviteViewLastPanPostion:(CGPoint)arg1;
- (CGPoint)inviteViewPanStartPos;
- (void)setInviteViewPanStartPos:(CGPoint)arg1;
- (double)inviteViewContentLeftMargin;
- (void)setInviteViewContentLeftMargin:(double)arg1;
- (unsigned long long)inviteViewDragType;
- (void)setInviteViewDragType:(unsigned long long)arg1;
- (BOOL)isInviteViewPaning;
- (void)setIsInviteViewPaning:(BOOL)arg1;
- (BOOL)wasInviteViewDraggedOverThreshold;
- (void)setWasInviteViewDraggedOverThreshold:(BOOL)arg1;
- (id)quickReplyView;
- (void)setQuickReplyView:(id)arg1;
- (id /* block */)quickReplyViewDismissBlock;
- (void)setQuickReplyViewDismissBlock:(id /* block */)arg1;
- (id /* block */)quickReplyViewDismissDelayinglyBlock;
- (void)setQuickReplyViewDismissDelayinglyBlock:(id /* block */)arg1;
- (double)quickReplyViewDismissDelayinglySeconds;
- (void)setQuickReplyViewDismissDelayinglySeconds:(double)arg1;
- (BOOL)isQuickReplyViewDismissDelayBlockPaused;
- (void)setIsQuickReplyViewDismissDelayBlockPaused:(BOOL)arg1;
- (id)quickReplyViewPanGesture;
- (void)setQuickReplyViewPanGesture:(id)arg1;
- (CGPoint)quickReplyViewLastPanPostion;
- (void)setQuickReplyViewLastPanPostion:(CGPoint)arg1;
- (CGPoint)quickReplyViewPanStartPos;
- (void)setQuickReplyViewPanStartPos:(CGPoint)arg1;
- (double)quickReplyViewContentLeftMargin;
- (void)setQuickReplyViewContentLeftMargin:(double)arg1;
- (unsigned long long)quickReplyViewDragType;
- (void)setQuickReplyViewDragType:(unsigned long long)arg1;
- (BOOL)isQuickReplyViewPaning;
- (void)setIsQuickReplyViewPaning:(BOOL)arg1;
- (BOOL)wasQuickReplyViewDraggedOverThreshold;
- (void)setWasQuickReplyViewDraggedOverThreshold:(BOOL)arg1;
- (id)fullScreenView;
- (void)setFullScreenView:(id)arg1;
- (id /* block */)setupSceneThemSameUILayoutBlock;
- (void)setSetupSceneThemSameUILayoutBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
