@interface MMGroupLiveOperationView : MMLiveOperationView <MMLiveLikeDataMgrExt, MMLiveAchorTopStateBarDelegate, MMLiveOperationViewDelegate>
{
    BOOL _isInLive; // +0x8
    BOOL _hideOperation; // +0x9
    BOOL _isShakeForLike; // +0xa
    BOOL _isContentShow; // +0xb
    MMUILabel * _liveTitleLabel; // +0x10
    MMUILabel * _anchorNameLabel; // +0x18
    MMHeadImageView * _anchorHeadImageView; // +0x20
    MMLiveAchorTopStateBar * _topStateBar; // +0x28
    MMLiveOnlineStateBar * _onlineStateBar; // +0x30
    unsigned long long _onlineUserCount; // +0x38
    WCLiveBottomTextButton * _shareScreenButton; // +0x40
    WCLiveBottomTextButton * _switchCameraButton; // +0x48
    WCLiveBottomTextButton * _shareLiveButton; // +0x50
    WCLiveBlurButton * _actionButton; // +0x58
    WCLiveBlurButton * _closeButton; // +0x60
    MMLiveLikeButton * _likeButton; // +0x68
    UIView * _likeAnimationWrapper; // +0x70
    MMLiveConnectMicDescriptionButton * _connectMicDescriptionButton; // +0x78
    MMLiveConnectMicOperationPanel * _connectMicOperationPanel; // +0x80
    MMLiveConnectMicVideoPreviewPanel * _connectMicVideoPreviewPanel; // +0x88
    MMLiveLikeAnimationUtil * _audienceSelflikeAnimationUtil; // +0x90
    MMLiveLikeAnimationUtil * _audienceOtherLikeAnimationUtil; // +0x98
    MMLiveLikeAnimationUtil * _anchorlikeAnimationUtil; // +0xa0
    MMLiveLikePlayUtil * _anchorLikePlayUtil; // +0xa8
    MMAudienceLiveLikePlayUtil * _audienceLikePlayUtil; // +0xb0
    unsigned long long _maxLikeCountOnce; // +0xb8
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)layoutUI;
- (void)layoutTopStateBar;
- (void)updateOnlineStateButtonViewForTopStateWidthChange;
- (void)layoutOnlineStateBar;
- (void)layoutTopButtons;
- (void)layoutAnchorInfo;
- (void)layoutBottomButtons;
- (double)bottomForViewAboveConnectMicButton;
- (void)layoutConnectMicOperationPanel;
- (void)layoutConnectMicVideoPreviewPanel;
- (void)updateCommentViewHidden:(BOOL)arg1;
- (void)connectMic;
- (void)onPrepareLive;
- (void)onCreateLive;
- (void)onEnterLive;
- (void)onLiveUpdated;
- (void)onLivePaused;
- (void)onLiveResumed;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onExitLive;
- (void)onActionButtonClicked;
- (void)onCloseButtonClicked;
- (void)onSwitchCameraButtonClicked;
- (void)recordSelfLike;
- (void)recordOnlineUserCount:(unsigned long long)arg1;
- (void)hideAllContents;
- (void)showAllContentsForAudience;
- (void)hideAllContentsForAudience;
- (void)showControlButtonsForAudience;
- (void)showTopButtonsForAudience;
- (void)showBottomButtonsForAudience;
- (void)hideControlButtonsForAudience;
- (void)hideTopButtonsForAudience;
- (void)hideBottomButtonsForAudience;
- (void)forceLayoutForOrientationChanged;
- (void)showAllContentsForAnchor;
- (void)hideAllContentsForAnchor;
- (void)showControlButtonsForAnchor;
- (void)hideControlButtonsForAnchor;
- (void)showTopAnchorInfo;
- (void)hideTopAnchorInfo;
- (void)updateOnlineUserCnt:(unsigned long long)arg1;
- (void)updateLikeCountDisplayForAudience;
- (id)getConnectMicOperationPanel;
- (id)getConnectMicVideoPreviewPanel;
- (id)createCircleButtonWithDescriptionLable:(id)arg1 withIconSize:(CGSize)arg2 atPositon:(CGPoint)arg3 withButtonAction:(SEL)arg4 withButtonLabel:(id)arg5;
- (BOOL)isAudiencePlayOtherLike;
- (id)anchorLikePlayUtil;
- (id)audienceLikePlayUtil;
- (id)anchorlikeAnimationUtil;
- (id)audienceSelflikeAnimationUtil;
- (id)audienceOtherLikeAnimationUtil;
- (void)layoutConnectedMicAudienceView;
- (void)setIsShakeForLike:(BOOL)arg1;
- (void)setMaxLikeCountOnce:(unsigned long long)arg1;
- (void)onDisplayLikeCountUpdate:(unsigned long long)arg1 withTaskId:(id)arg2 forRole:(long long)arg3;
- (void)setConnectMicButtonState:(unsigned long long)arg1;
- (unsigned long long)connectMicButtonState;
- (void)setConnectMicButtonShowRedDot:(BOOL)arg1;
- (BOOL)connectMicButtonShowRedDot;
- (double)getVisibleHeight;
- (void)updateButtonHiddenForInputViewShowChange:(BOOL)arg1;
- (void)onBackViewDidTaped;
- (void)clearOrRecoverScreen;
- (void)checkAndShowAllContents;
- (double)getTopWidgetsBottom;
- (unsigned long long)getLikeCount;
- (void)onMMLiveUpdateOnlineUserCount:(unsigned long long)arg1;
- (void)onMMLiveOnlineUserSelected:(id)arg1 userInfo:(id)arg2;
- (void)onMMLiveInviteFriendsBtnClicked;
- (id)liveTask;
- (id)likeAnimationWrapper;
- (void)layoutCommentView;
- (void)layoutOnlineStateView;
- (void)updateLikeCountForLiveInfoUpdate;
- (void)updateCommentEnableForLiveInfoUpdate;
- (void)updateAnchorInfo;
- (id)likeMgr;
- (id)anchorDisplayName;
- (id)anchorHeadImgUrl;
- (id)anchorContact;
- (id)anchorUserName;
- (id)groupLiveInfo;
- (id)defaultLiveName;
- (void)createCloseButton;
- (void)createActionButton;
- (void)createConnectMicDescriptionButton;
- (void)onConnectMicButtonClicked;
- (void)onAnchorHeadImageClicked:(id)arg1;
- (id)liveTitleLabel;
- (void)setLiveTitleLabel:(id)arg1;
- (id)anchorNameLabel;
- (void)setAnchorNameLabel:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)topStateBar;
- (void)setTopStateBar:(id)arg1;
- (id)onlineStateBar;
- (void)setOnlineStateBar:(id)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (unsigned long long)onlineUserCount;
- (void)setOnlineUserCount:(unsigned long long)arg1;
- (BOOL)hideOperation;
- (void)setHideOperation:(BOOL)arg1;
- (id)shareScreenButton;
- (void)setShareScreenButton:(id)arg1;
- (id)switchCameraButton;
- (void)setSwitchCameraButton:(id)arg1;
- (id)shareLiveButton;
- (void)setShareLiveButton:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (void)setLikeAnimationWrapper:(id)arg1;
- (id)connectMicDescriptionButton;
- (void)setConnectMicDescriptionButton:(id)arg1;
- (id)connectMicOperationPanel;
- (void)setConnectMicOperationPanel:(id)arg1;
- (id)connectMicVideoPreviewPanel;
- (void)setConnectMicVideoPreviewPanel:(id)arg1;
- (void)setAudienceSelflikeAnimationUtil:(id)arg1;
- (void)setAudienceOtherLikeAnimationUtil:(id)arg1;
- (void)setAnchorlikeAnimationUtil:(id)arg1;
- (void)setAnchorLikePlayUtil:(id)arg1;
- (void)setAudienceLikePlayUtil:(id)arg1;
- (BOOL)isShakeForLike;
- (unsigned long long)maxLikeCountOnce;
- (BOOL)isContentShow;
- (void)setIsContentShow:(BOOL)arg1;
- (void).cxx_destruct;
@end

