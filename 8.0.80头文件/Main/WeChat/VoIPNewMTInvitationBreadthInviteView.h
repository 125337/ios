@interface VoIPNewMTInvitationBreadthInviteView : UIView <UIScrollViewDelegate, VoIPInvitationBreadthInviteView>
{
    BOOL isAccepted; // +0x8
    BOOL disableVideoCapture; // +0x9
    BOOL isQuickReplyDisable; // +0xa
    BOOL _isAutoIgnored; // +0xb
    BOOL _hasReportVoipHideBtnExp; // +0xc
    VoIPInvitationInfo * info; // +0x10
    id <VoIPInvitationBreadthInviteViewDelegate> delegate; // +0x18
    UIImageView * _blurView; // +0x20
    MultiTalkHDHeadView * _headImageView; // +0x28
    VoipDescriptionButton * _acceptButton; // +0x30
    VoipDescriptionButton * _hangupButton; // +0x38
    MMUIButton * _ignoreButton; // +0x40
    MMUIButton * _expandButton; // +0x48
    UIImageView * _customMaskView; // +0x50
    MMUILabel * _userNameLabel; // +0x58
    MMUILabel * _inviteDescLabel; // +0x60
    MMUILabel * _membersDescLabel; // +0x68
    NSArray * _memberHeadViews; // +0x70
    UIView * _memberDisplayView; // +0x78
    UIScrollView * _memberDisplayScrollView; // +0x80
    CAGradientLayer * _memberDisplayMaskLayer; // +0x88
    double _memberDisplayMaskFadeWidth; // +0x90
    MMUILabel * _p2pUserNameLabel; // +0x98
    VoipAutoUpdateLabel * _p2pDescriptionLabel; // +0xa0
    UIView * _captureView; // +0xa8
    UIVisualEffectView * _captureVisualEffectView; // +0xb0
    VOIPVideoRender * _p2pVideoRender; // +0xb8
    XImageViewRenderer * _p2pRciLocalRender; // +0xc0
    MMUIActivityIndicatorView * _acceptIndicatorView; // +0xc8
    unsigned long long _currentRoomType; // +0xd0
    VoIPInvitationPendingDotAnimator * _pendingDotAnimator; // +0xd8
}
- (double)userNameCenterY;
- (id)videoRender;
- (id)rciLocalRender;
- (void)removeKVOForDescriptionLabel;
- (double)preferredExtendHeightWithInfo:(id)arg1 width:(double)arg2;
- (void)onMyselfClick:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 info:(id)arg2;
- (BOOL)isQuickReplyDisable;
- (void)dealloc;
- (BOOL)isMultiTalkMode;
- (id)inviteDescriptionText;
- (void)layoutSubviews;
- (void)layoutCommonViews;
- (void)layoutBlurView;
- (void)layoutExpandButton;
- (void)layoutHeadImageView;
- (void)layoutAcceptButton;
- (void)layoutHangupButton;
- (void)layoutIgnoreButton;
- (id)voipHideBtnReportParams;
- (void)reportVoipHideBtnExposureIfNeeded;
- (void)reportVoipHideBtnClick;
- (void)layoutMultiTalkSubviews;
- (void)layoutMultiTalkMultiLineSubviews;
- (void)layout2PSubviews;
- (void)layoutCustomMaskView;
- (void)layoutUserNameLabel;
- (void)layoutInviteDescLabel;
- (void)layoutMemberDisplayView:(id)arg1;
- (void)installMemberDisplayMaskWithViewWidth:(double)arg1 headHeight:(double)arg2 fadeWidth:(double)arg3;
- (void)updateMemberDisplayMaskFadeStops;
- (void)scrollViewDidScroll:(id)arg1;
- (id)currentInviteGroupNickName;
- (void)layout2PCaptureView;
- (void)layout2PCaptureVisualEffectView;
- (void)layout2PAcceptIndicatorView;
- (void)layout2PUserNameLabel;
- (void)layout2PDescriptionLabel;
- (void)layout2PLabels;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAcceptButtonClick:(id)arg1;
- (void)onHangupButtonClick:(id)arg1;
- (void)onIgnoreButtonClick:(id)arg1;
- (void)clearSpecificViews;
- (void)updateWithInvitationInfo:(id)arg1;
- (void)updateMemberDisplayViewWithmemberList:(id)arg1;
- (void)updateAccessibilityWithmemberList:(id)arg1;
- (id)pendingDotAnimator;
- (id)getOtherMemberList;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (BOOL)disableVideoCapture;
- (void)setDisableVideoCapture:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAutoIgnored;
- (void)setIsAutoIgnored:(BOOL)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)hangupButton;
- (void)setHangupButton:(id)arg1;
- (id)ignoreButton;
- (void)setIgnoreButton:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)customMaskView;
- (void)setCustomMaskView:(id)arg1;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg1;
- (id)inviteDescLabel;
- (void)setInviteDescLabel:(id)arg1;
- (id)membersDescLabel;
- (void)setMembersDescLabel:(id)arg1;
- (id)memberHeadViews;
- (void)setMemberHeadViews:(id)arg1;
- (id)memberDisplayView;
- (void)setMemberDisplayView:(id)arg1;
- (id)memberDisplayScrollView;
- (void)setMemberDisplayScrollView:(id)arg1;
- (id)memberDisplayMaskLayer;
- (void)setMemberDisplayMaskLayer:(id)arg1;
- (double)memberDisplayMaskFadeWidth;
- (void)setMemberDisplayMaskFadeWidth:(double)arg1;
- (id)p2pUserNameLabel;
- (void)setP2pUserNameLabel:(id)arg1;
- (id)p2pDescriptionLabel;
- (void)setP2pDescriptionLabel:(id)arg1;
- (id)captureView;
- (void)setCaptureView:(id)arg1;
- (id)captureVisualEffectView;
- (void)setCaptureVisualEffectView:(id)arg1;
- (id)p2pVideoRender;
- (void)setP2pVideoRender:(id)arg1;
- (id)p2pRciLocalRender;
- (void)setP2pRciLocalRender:(id)arg1;
- (id)acceptIndicatorView;
- (void)setAcceptIndicatorView:(id)arg1;
- (unsigned long long)currentRoomType;
- (void)setCurrentRoomType:(unsigned long long)arg1;
- (BOOL)hasReportVoipHideBtnExp;
- (void)setHasReportVoipHideBtnExp:(BOOL)arg1;
- (void)setPendingDotAnimator:(id)arg1;
- (void).cxx_destruct;
@end
