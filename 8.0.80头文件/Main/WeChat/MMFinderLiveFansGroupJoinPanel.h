@interface MMFinderLiveFansGroupJoinPanel : MMPageSheetBaseView
{
    BOOL _needPurchase; // +0x8
    id /* block */ _joinCallback; // +0x10
    unsigned long long _openScene; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMFinderLiveRewardGiftItem * _joinFansGroupGiftItem; // +0x28
    UIView * _contentView; // +0x30
    MMUIButton * _introductionButton; // +0x38
    UIView * _avatarContainerView; // +0x40
    WCFinderHeadImageView * _anchorCoverView; // +0x48
    WCFinderHeadImageView * _audienceCoverView; // +0x50
    MMUILabel * _fansGroupTitleLabel; // +0x58
    MMUILabel * _fansCountInGroupLabel; // +0x60
    UIButton * _joinFansGroupButton; // +0x68
    MMUILabel * _badgeSectionTitleLabel; // +0x70
    MMUILabel * _badgeSectionDescLabel; // +0x78
    MMFinderLiveFansGroupSignView * _badgeSignView; // +0x80
    MMUILabel * _giftSectionTitleLabel; // +0x88
    MMUILabel * _giftSectionDescLabel; // +0x90
    MMWebImageView * _giftThumbnailView; // +0x98
    MMUILabel * _payWecoinLabel; // +0xa0
    MMUILabel * _payWecoinCountLabel; // +0xa8
    UIImageView * _payWecoinIcon; // +0xb0
}
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2 openScene:(unsigned long long)arg3;
- (void)initView;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (BOOL)shouldAdaptToDarkLight;
- (void)setupPageSheetConfig;
- (void)refreshFansGroupInfo;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutIntroductionButton;
- (void)layoutAvatarContainer;
- (void)applyAudienceAvatarSeamMask;
- (void)layoutFansContentView;
- (void)layoutFansGroupSections;
- (id)makeSectionTitleLabel;
- (id)makeSectionDescLabel;
- (void)layoutSectionTitleLabel:(id)arg1 descLabel:(id)arg2 accessoryView:(id)arg3 top:(double)arg4;
- (double)fansGroupSectionsBottom;
- (void)layPayWecoinInfo;
- (void)layoutJoinButton;
- (BOOL)isFollowAnchor;
- (BOOL)isSelfFinderIdentity;
- (double)audienceAvatarSide;
- (void)onIntroductionButtonClicked;
- (void)onJoinFansGroupButtonClicked;
- (void)joinFansGroupAfterFollowed;
- (void)joinFansGroupWithCompletion:(id /* block */)arg1;
- (id)liveTask;
- (void)reportForPanelExpose;
- (void)reportForJoinButtonClick;
- (void)reportForOpenFansGroupDetailPage;
- (id)audienceLogReporter;
- (id /* block */)joinCallback;
- (void)setJoinCallback:(id /* block */)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)joinFansGroupGiftItem;
- (void)setJoinFansGroupGiftItem:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)introductionButton;
- (void)setIntroductionButton:(id)arg1;
- (id)avatarContainerView;
- (void)setAvatarContainerView:(id)arg1;
- (id)anchorCoverView;
- (void)setAnchorCoverView:(id)arg1;
- (id)audienceCoverView;
- (void)setAudienceCoverView:(id)arg1;
- (id)fansGroupTitleLabel;
- (void)setFansGroupTitleLabel:(id)arg1;
- (id)fansCountInGroupLabel;
- (void)setFansCountInGroupLabel:(id)arg1;
- (id)joinFansGroupButton;
- (void)setJoinFansGroupButton:(id)arg1;
- (id)badgeSectionTitleLabel;
- (void)setBadgeSectionTitleLabel:(id)arg1;
- (id)badgeSectionDescLabel;
- (void)setBadgeSectionDescLabel:(id)arg1;
- (id)badgeSignView;
- (void)setBadgeSignView:(id)arg1;
- (id)giftSectionTitleLabel;
- (void)setGiftSectionTitleLabel:(id)arg1;
- (id)giftSectionDescLabel;
- (void)setGiftSectionDescLabel:(id)arg1;
- (id)giftThumbnailView;
- (void)setGiftThumbnailView:(id)arg1;
- (id)payWecoinLabel;
- (void)setPayWecoinLabel:(id)arg1;
- (id)payWecoinCountLabel;
- (void)setPayWecoinCountLabel:(id)arg1;
- (id)payWecoinIcon;
- (void)setPayWecoinIcon:(id)arg1;
- (BOOL)needPurchase;
- (void)setNeedPurchase:(BOOL)arg1;
- (void).cxx_destruct;
@end
