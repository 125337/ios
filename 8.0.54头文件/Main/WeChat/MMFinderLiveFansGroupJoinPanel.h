@interface MMFinderLiveFansGroupJoinPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate>
{
    BOOL _needPurchase; // +0x8
    id /* block */ _joinCallback; // +0x10
    unsigned long long _openScene; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMFinderLiveRewardGiftItem * _joinFansGroupGiftItem; // +0x28
    UIScrollView * _contentScrollView; // +0x30
    UIView * _contentView; // +0x38
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x40
    MMUIButton * _introductionButton; // +0x48
    WCFinderHeadImageView * _fansGroupCoverView; // +0x50
    MMUILabel * _fansGroupTitleLabel; // +0x58
    MMUILabel * _fansCountInGroupLabel; // +0x60
    MMUIButton * _joinFansGroupButton; // +0x68
    MMFinderLiveFansGroupInterestsCell * _specialRankInterestsCell; // +0x70
    MMFinderLiveFansGroupInterestsCell * _specialGiftInterestsCell; // +0x78
    MMUILabel * _payWecoinLabel; // +0x80
    MMUILabel * _payWecoinCountLabel; // +0x88
    UIImageView * _payWecoinIcon; // +0x90
    MMUIMaskContainerView * _scrollViewContainerView; // +0x98
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
- (void)layoutTitleBarView;
- (void)createContentScrollView;
- (void)layoutContentScrollView;
- (void)updateScrollViewContentSize;
- (void)layoutFansContentView;
- (void)layoutFansGroupInterestsContent;
- (void)layPayWecoinInfo;
- (void)layoutJoinButton;
- (double)contentWidth;
- (double)contentHeight;
- (BOOL)isFollowAnchor;
- (void)onIntroductionButtonClicked;
- (void)onJoinFansGroupButtonClicked;
- (void)joinFansGroupAfterFollowed;
- (void)joinFansGroupWithCompletion:(id /* block */)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
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
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)introductionButton;
- (void)setIntroductionButton:(id)arg1;
- (id)fansGroupCoverView;
- (void)setFansGroupCoverView:(id)arg1;
- (id)fansGroupTitleLabel;
- (void)setFansGroupTitleLabel:(id)arg1;
- (id)fansCountInGroupLabel;
- (void)setFansCountInGroupLabel:(id)arg1;
- (id)joinFansGroupButton;
- (void)setJoinFansGroupButton:(id)arg1;
- (id)specialRankInterestsCell;
- (void)setSpecialRankInterestsCell:(id)arg1;
- (id)specialGiftInterestsCell;
- (void)setSpecialGiftInterestsCell:(id)arg1;
- (id)payWecoinLabel;
- (void)setPayWecoinLabel:(id)arg1;
- (id)payWecoinCountLabel;
- (void)setPayWecoinCountLabel:(id)arg1;
- (id)payWecoinIcon;
- (void)setPayWecoinIcon:(id)arg1;
- (id)scrollViewContainerView;
- (void)setScrollViewContainerView:(id)arg1;
- (BOOL)needPurchase;
- (void)setNeedPurchase:(BOOL)arg1;
- (void).cxx_destruct;
@end

