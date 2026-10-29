@interface MMFinderLiveNewFansGroupJoinPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate>
{
    BOOL _needPurchase; // +0x8
    BOOL _needPurchaseSuperfan; // +0x9
    BOOL _defaultSelectSuperfan; // +0xa
    id /* block */ _joinNormalFanGroupCallback; // +0x10
    id /* block */ _joinSuperfanCallback; // +0x18
    unsigned long long _openScene; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    MMFinderLiveRewardGiftItem * _joinFansGroupGiftItem; // +0x30
    UIScrollView * _contentScrollView; // +0x38
    MMUIMaskContainerView * _scrollViewContainerView; // +0x40
    UIView * _contentView; // +0x48
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x50
    MMUIButton * _introductionButton; // +0x58
    MMUILabel * _fansGroupTitleLabel; // +0x60
    MMUILabel * _fansCountInGroupLabel; // +0x68
    MMUIButton * _joinFansGroupButton; // +0x70
    MMFinderLiveFansGroupIntroView * _superFanIntroView; // +0x78
    MMFinderLiveFansGroupIntroView * _normalFanIntroView; // +0x80
    NSArray * _interestCells; // +0x88
    WCFinderAnimationLoadingView * _loadingView; // +0x90
}
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2 openScene:(unsigned long long)arg3 defaultSelectSuperfanIfCan:(BOOL)arg4;
- (void)initView;
- (void)initIntroViews;
- (void)initInterestViews;
- (id)buildInterestCellWithIconName:(id)arg1 title:(id)arg2 desc:(id)arg3;
- (BOOL)shouldAdaptToDarkLight;
- (void)setupPageSheetConfig;
- (double)contentWidth;
- (double)contentHeight;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)refreshFansGroupInfo;
- (void)createContentScrollView;
- (void)layoutContentScrollView;
- (void)updateScrollViewContentSize;
- (void)updateJoinButtonTitle;
- (void)layoutSubviews;
- (void)onIntroductionButtonClicked;
- (void)gotoDetailPage;
- (void)onJoinFansGroupButtonClicked;
- (void)onFangroupIntroViewTapped:(id)arg1;
- (void)_joinSuperfanGroup;
- (void)_followAnchorWithCompletion:(id /* block */)arg1;
- (void)_joinNormalFansGroup;
- (void)joinFansGroupAfterFollowed;
- (void)joinFansGroupWithCompletion:(id /* block */)arg1;
- (void)reportForOpenFansGroupDetailPage;
- (void)reportForPanelExpose;
- (void)reportForJoinButtonClick;
- (id)audienceLogReporter;
- (BOOL)isFollowAnchor;
- (id)liveTask;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (id /* block */)joinNormalFanGroupCallback;
- (void)setJoinNormalFanGroupCallback:(id /* block */)arg1;
- (id /* block */)joinSuperfanCallback;
- (void)setJoinSuperfanCallback:(id /* block */)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)joinFansGroupGiftItem;
- (void)setJoinFansGroupGiftItem:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)scrollViewContainerView;
- (void)setScrollViewContainerView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)introductionButton;
- (void)setIntroductionButton:(id)arg1;
- (id)fansGroupTitleLabel;
- (void)setFansGroupTitleLabel:(id)arg1;
- (id)fansCountInGroupLabel;
- (void)setFansCountInGroupLabel:(id)arg1;
- (id)joinFansGroupButton;
- (void)setJoinFansGroupButton:(id)arg1;
- (BOOL)needPurchase;
- (void)setNeedPurchase:(BOOL)arg1;
- (BOOL)needPurchaseSuperfan;
- (void)setNeedPurchaseSuperfan:(BOOL)arg1;
- (id)superFanIntroView;
- (void)setSuperFanIntroView:(id)arg1;
- (id)normalFanIntroView;
- (void)setNormalFanIntroView:(id)arg1;
- (id)interestCells;
- (void)setInterestCells:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)defaultSelectSuperfan;
- (void)setDefaultSelectSuperfan:(BOOL)arg1;
- (void).cxx_destruct;
@end

