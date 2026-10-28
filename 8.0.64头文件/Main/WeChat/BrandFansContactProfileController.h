@interface BrandFansContactProfileController : UIViewController <WCBrandOverFullscreenAnimatable, UIViewControllerTransitioningDelegate, BrandFansContactMgrExt>
{
    id <BrandFansProfileItem> _profileItem; // +0x8
    id <BrandFansContactProfileControllerDelegate> _delegate; // +0x10
    UIControl * _maskView; // +0x18
    UIView * _containerView; // +0x20
    WXMASConstraint * _topConstraint; // +0x28
    WXMASConstraint * _bottomConstraint; // +0x30
    WCBrandOverFullscreenAnimator * _customAnimator; // +0x38
    WXMASConstraint * _followConstraint; // +0x40
    WXMASConstraint * _blockViewTopNormalConstaints; // +0x48
    WXMASConstraint * _blockViewTopInteractiveConstaints; // +0x50
    WXMASConstraint * _unBlockViewTopNormalConstaints; // +0x58
    WXMASConstraint * _unBlockViewTopInteractiveConstaints; // +0x60
    UIButton * _closeButton; // +0x68
    UIImageView * _avatarImageView; // +0x70
    UILabel * _nameLabel; // +0x78
    UILabel * _descLabel; // +0x80
    UILabel * _signatureLabel; // +0x88
    UILabel * _followTimeLabel; // +0x90
    UIImageView * _profileIndicatorView; // +0x98
    UIControl * _jumpProfileMaskView; // +0xa0
    UIView * _nonBlockOperationView; // +0xa8
    UIButton * _blockButton; // +0xb0
    UIView * _blockOperationView; // +0xb8
    UIImageView * _blockIconView; // +0xc0
    UILabel * _blockDescLabel; // +0xc8
    UIButton * _unblockButton; // +0xd0
    UIView * _interativeRecordView; // +0xd8
    UIView * _divider; // +0xe0
    UIStackView * _interactiveTimesArea; // +0xe8
    UIImageView * _commentIcon; // +0xf0
    UILabel * _commentTimesLabel; // +0xf8
    UIStackView * _commentArea; // +0x100
    UIImageView * _likeIcon; // +0x108
    UILabel * _likeTimesLabel; // +0x110
    UIStackView * _likeArea; // +0x118
    UIImageView * _recommendIcon; // +0x120
    UILabel * _recommendTimesLabel; // +0x128
    UIStackView * _recommendArea; // +0x130
    UILabel * _rewardLabel; // +0x138
    UILabel * _rewardTotalLabel; // +0x140
    UIStackView * _rewardArea; // +0x148
    UILabel * _payLabel; // +0x150
    UILabel * _payTotalLabel; // +0x158
    UIStackView * _payArea; // +0x160
}
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithItem:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupPanel;
- (void)setupInteractiveRecordInfoView;
- (id)createIcon:(long long)arg1;
- (id)createBottomLabelWithText:(id)arg1;
- (void)setupNonBlockOperationView;
- (void)setupBlockOperationView;
- (void)updateProfileData;
- (void)updateJumpProfileUI;
- (void)didClickViewDetail;
- (void)didClickBlockContact;
- (void)didClickUnblockContact;
- (void)didClickMask;
- (void)jumpToProfile;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)arg1;
- (void)playOverFullscreenPresentAnimation;
- (void)playOverFullscreenDismissAnimation;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)brandFansExtendInfoUpdatedForUserID:(id)arg1 extendInfo:(id)arg2;
- (id)profileItem;
- (void)setProfileItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)topConstraint;
- (void)setTopConstraint:(id)arg1;
- (id)bottomConstraint;
- (void)setBottomConstraint:(id)arg1;
- (id)customAnimator;
- (void)setCustomAnimator:(id)arg1;
- (id)followConstraint;
- (void)setFollowConstraint:(id)arg1;
- (id)blockViewTopNormalConstaints;
- (void)setBlockViewTopNormalConstaints:(id)arg1;
- (id)blockViewTopInteractiveConstaints;
- (void)setBlockViewTopInteractiveConstaints:(id)arg1;
- (id)unBlockViewTopNormalConstaints;
- (void)setUnBlockViewTopNormalConstaints:(id)arg1;
- (id)unBlockViewTopInteractiveConstaints;
- (void)setUnBlockViewTopInteractiveConstaints:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)signatureLabel;
- (void)setSignatureLabel:(id)arg1;
- (id)followTimeLabel;
- (void)setFollowTimeLabel:(id)arg1;
- (id)profileIndicatorView;
- (void)setProfileIndicatorView:(id)arg1;
- (id)jumpProfileMaskView;
- (void)setJumpProfileMaskView:(id)arg1;
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
- (void).cxx_destruct;
@end
