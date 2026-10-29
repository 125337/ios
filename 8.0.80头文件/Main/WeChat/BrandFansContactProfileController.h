@interface BrandFansContactProfileController : UIViewController <WCBrandOverFullscreenAnimatable, UIViewControllerTransitioningDelegate, BrandFansContactMgrExt, SharePreConfirmSheetViewDelegate>
{
    BOOL _contactSettingEnabled; // +0x8
    BOOL _hasReceivedExtendInfo; // +0x9
    BOOL _hasReportedComponentExposure; // +0xa
    BOOL _hasReportedPrivateMsgExposure; // +0xb
    BOOL _hasReportedHeaderExposure; // +0xc
    int _bizType; // +0x10
    id <BrandFansProfileItem> _profileItem; // +0x18
    NSString * _enterScene; // +0x20
    id <BrandFansContactProfileControllerDelegate> _delegate; // +0x28
    UIControl * _maskView; // +0x30
    UIView * _containerView; // +0x38
    SharePreConfirmSheetView * _inviteSheetView; // +0x40
    WXMASConstraint * _topConstraint; // +0x48
    WXMASConstraint * _bottomConstraint; // +0x50
    WCBrandOverFullscreenAnimator * _customAnimator; // +0x58
    WXMASConstraint * _blockViewTopNormalConstaints; // +0x60
    WXMASConstraint * _blockViewTopInteractiveConstaints; // +0x68
    WXMASConstraint * _unBlockViewTopNormalConstaints; // +0x70
    WXMASConstraint * _unBlockViewTopInteractiveConstaints; // +0x78
    WXMASConstraint * _dividerTopToAvatarConstraint; // +0x80
    WXMASConstraint * _dividerTopToInfoStackConstraint; // +0x88
    WXMASConstraint * _dividerTopToInviteBannerConstraint; // +0x90
    UIButton * _closeButton; // +0x98
    UIImageView * _avatarImageView; // +0xa0
    UIButton * _sendMessageButton; // +0xa8
    WXMASConstraint * _infoRightToIndicatorConstraint; // +0xb0
    WXMASConstraint * _infoRightToSendButtonConstraint; // +0xb8
    WXMASConstraint * _sendMessageTopToInfoStackConstraint; // +0xc0
    WXMASConstraint * _sendMessageCenterYToInfoStackConstraint; // +0xc8
    UIStackView * _infoStackView; // +0xd0
    UIStackView * _descStackView; // +0xd8
    UILabel * _nameLabel; // +0xe0
    UIImageView * _logoIconView; // +0xe8
    UILabel * _descLabel; // +0xf0
    UILabel * _signatureLabel; // +0xf8
    UILabel * _followTimeLabel; // +0x100
    UILabel * _bizFromFriend; // +0x108
    UIImageView * _profileIndicatorView; // +0x110
    UIControl * _jumpProfileMaskView; // +0x118
    WXMASConstraint * _jumpMaskRightToContainerConstraint; // +0x120
    WXMASConstraint * _jumpMaskRightToSendButtonConstraint; // +0x128
    UIView * _nonBlockOperationView; // +0x130
    UIButton * _blockButton; // +0x138
    UIView * _blockOperationView; // +0x140
    UIImageView * _blockIconView; // +0x148
    UILabel * _blockDescLabel; // +0x150
    UIButton * _unblockButton; // +0x158
    BrandFansInviteBannerView * _inviteBannerView; // +0x160
    UIButton * _settingButton; // +0x168
    UIView * _bottomSpacerView; // +0x170
    UIView * _interativeRecordView; // +0x178
    UIView * _divider; // +0x180
    UIStackView * _interactiveTimesArea; // +0x188
    UIImageView * _commentIcon; // +0x190
    UILabel * _commentTimesLabel; // +0x198
    UIStackView * _commentArea; // +0x1a0
    UIImageView * _likeIcon; // +0x1a8
    UILabel * _likeTimesLabel; // +0x1b0
    UIStackView * _likeArea; // +0x1b8
    UIImageView * _recommendIcon; // +0x1c0
    UILabel * _recommendTimesLabel; // +0x1c8
    UIStackView * _recommendArea; // +0x1d0
    UILabel * _rewardLabel; // +0x1d8
    UILabel * _rewardTotalLabel; // +0x1e0
    UIStackView * _rewardArea; // +0x1e8
    UILabel * _payLabel; // +0x1f0
    UILabel * _payTotalLabel; // +0x1f8
    UIStackView * _payArea; // +0x200
    MMMenuBubbleTipsView * _sendMsgGuideBubble; // +0x208
}
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithItem:(id)arg1 bizType:(int)arg2 enterScene:(id)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupUI;
- (void)setupPanel;
- (void)setupInteractiveRecordInfoView;
- (id)createIcon:(long long)arg1;
- (id)createBottomLabelWithText:(id)arg1;
- (void)setupNonBlockOperationView;
- (void)setupInviteBannerView;
- (void)setupBlockOperationView;
- (void)setupBottomSpacerView;
- (void)updateProfileData;
- (void)updateInviteBannerVisibility;
- (void)didClickInviteBanner;
- (void)showInviteSheetWithPrefilledText:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)updateJumpProfileUI;
- (void)updateSendMessageButtonVerticalAlignment;
- (void)didClickViewDetail;
- (void)didClickBlockContact;
- (void)didClickUnblockContact;
- (void)didClickSetting;
- (void)didClickAvatar;
- (void)didClickSendMessage;
- (void)didClickMask;
- (void)tryShowSendMsgGuide;
- (void)hideSendMsgGuide;
- (BOOL)shouldShowSendMsgGuide;
- (BOOL)hasSendMsgGuideShown;
- (void)markSendMsgGuideShown;
- (void)jumpToProfile;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)arg1;
- (void)playOverFullscreenPresentAnimation;
- (void)playOverFullscreenDismissAnimation;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (BOOL)checkNeedNewLineForBizFromUser;
- (void)brandFansExtendInfoUpdatedForUserID:(id)arg1 extendInfo:(id)arg2;
- (id)profileItem;
- (void)setProfileItem:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (id)enterScene;
- (void)setEnterScene:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)inviteSheetView;
- (void)setInviteSheetView:(id)arg1;
- (id)topConstraint;
- (void)setTopConstraint:(id)arg1;
- (id)bottomConstraint;
- (void)setBottomConstraint:(id)arg1;
- (id)customAnimator;
- (void)setCustomAnimator:(id)arg1;
- (id)blockViewTopNormalConstaints;
- (void)setBlockViewTopNormalConstaints:(id)arg1;
- (id)blockViewTopInteractiveConstaints;
- (void)setBlockViewTopInteractiveConstaints:(id)arg1;
- (id)unBlockViewTopNormalConstaints;
- (void)setUnBlockViewTopNormalConstaints:(id)arg1;
- (id)unBlockViewTopInteractiveConstaints;
- (void)setUnBlockViewTopInteractiveConstaints:(id)arg1;
- (id)dividerTopToAvatarConstraint;
- (void)setDividerTopToAvatarConstraint:(id)arg1;
- (id)dividerTopToInfoStackConstraint;
- (void)setDividerTopToInfoStackConstraint:(id)arg1;
- (id)dividerTopToInviteBannerConstraint;
- (void)setDividerTopToInviteBannerConstraint:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)sendMessageButton;
- (void)setSendMessageButton:(id)arg1;
- (id)infoRightToIndicatorConstraint;
- (void)setInfoRightToIndicatorConstraint:(id)arg1;
- (id)infoRightToSendButtonConstraint;
- (void)setInfoRightToSendButtonConstraint:(id)arg1;
- (id)sendMessageTopToInfoStackConstraint;
- (void)setSendMessageTopToInfoStackConstraint:(id)arg1;
- (id)sendMessageCenterYToInfoStackConstraint;
- (void)setSendMessageCenterYToInfoStackConstraint:(id)arg1;
- (id)infoStackView;
- (void)setInfoStackView:(id)arg1;
- (id)descStackView;
- (void)setDescStackView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)logoIconView;
- (void)setLogoIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)signatureLabel;
- (void)setSignatureLabel:(id)arg1;
- (id)followTimeLabel;
- (void)setFollowTimeLabel:(id)arg1;
- (id)bizFromFriend;
- (void)setBizFromFriend:(id)arg1;
- (id)profileIndicatorView;
- (void)setProfileIndicatorView:(id)arg1;
- (id)jumpProfileMaskView;
- (void)setJumpProfileMaskView:(id)arg1;
- (id)jumpMaskRightToContainerConstraint;
- (void)setJumpMaskRightToContainerConstraint:(id)arg1;
- (id)jumpMaskRightToSendButtonConstraint;
- (void)setJumpMaskRightToSendButtonConstraint:(id)arg1;
- (id)nonBlockOperationView;
- (void)setNonBlockOperationView:(id)arg1;
- (id)blockButton;
- (void)setBlockButton:(id)arg1;
- (id)blockOperationView;
- (void)setBlockOperationView:(id)arg1;
- (id)blockIconView;
- (void)setBlockIconView:(id)arg1;
- (id)blockDescLabel;
- (void)setBlockDescLabel:(id)arg1;
- (id)unblockButton;
- (void)setUnblockButton:(id)arg1;
- (id)inviteBannerView;
- (void)setInviteBannerView:(id)arg1;
- (id)settingButton;
- (void)setSettingButton:(id)arg1;
- (id)bottomSpacerView;
- (void)setBottomSpacerView:(id)arg1;
- (BOOL)contactSettingEnabled;
- (void)setContactSettingEnabled:(BOOL)arg1;
- (id)interativeRecordView;
- (void)setInterativeRecordView:(id)arg1;
- (id)divider;
- (void)setDivider:(id)arg1;
- (id)interactiveTimesArea;
- (void)setInteractiveTimesArea:(id)arg1;
- (id)commentIcon;
- (void)setCommentIcon:(id)arg1;
- (id)commentTimesLabel;
- (void)setCommentTimesLabel:(id)arg1;
- (id)commentArea;
- (void)setCommentArea:(id)arg1;
- (id)likeIcon;
- (void)setLikeIcon:(id)arg1;
- (id)likeTimesLabel;
- (void)setLikeTimesLabel:(id)arg1;
- (id)likeArea;
- (void)setLikeArea:(id)arg1;
- (id)recommendIcon;
- (void)setRecommendIcon:(id)arg1;
- (id)recommendTimesLabel;
- (void)setRecommendTimesLabel:(id)arg1;
- (id)recommendArea;
- (void)setRecommendArea:(id)arg1;
- (id)rewardLabel;
- (void)setRewardLabel:(id)arg1;
- (id)rewardTotalLabel;
- (void)setRewardTotalLabel:(id)arg1;
- (id)rewardArea;
- (void)setRewardArea:(id)arg1;
- (id)payLabel;
- (void)setPayLabel:(id)arg1;
- (id)payTotalLabel;
- (void)setPayTotalLabel:(id)arg1;
- (id)payArea;
- (void)setPayArea:(id)arg1;
- (id)sendMsgGuideBubble;
- (void)setSendMsgGuideBubble:(id)arg1;
- (BOOL)hasReceivedExtendInfo;
- (void)setHasReceivedExtendInfo:(BOOL)arg1;
- (BOOL)hasReportedComponentExposure;
- (void)setHasReportedComponentExposure:(BOOL)arg1;
- (BOOL)hasReportedPrivateMsgExposure;
- (void)setHasReportedPrivateMsgExposure:(BOOL)arg1;
- (BOOL)hasReportedHeaderExposure;
- (void)setHasReportedHeaderExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
