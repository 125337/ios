@interface MMLiveRewardGiftSelectionView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate, WCActionSheetDelegate, MMFinderLiveMgrExt, MMLiveRewardGiftCollectionViewCellDelegate, MMLiveRewardGiftPreviewWindowDelegate, MMLiveRewardGiftCustomizationTipViewDelegate, MMLiveRewardGiftCustomizationTextPageSheetDelegate, MMLiveRewardGiftAIGCOperationPanelDelegate, MMFinderLiveAIGCGiftLogicPluginExt>
{
    BOOL _isRewardOpening; // +0x8
    BOOL _wecoinBalanceUpdated; // +0x9
    BOOL _isScrollDirectionVerticalEnabled; // +0xa
    BOOL _isShowing; // +0xb
    BOOL _fetchWecoinBalanceFinished; // +0xc
    BOOL _isLastLayoutOrientationIsPortrait; // +0xd
    BOOL _hasReportedSearchIconExpose; // +0xe
    BOOL _navigatedToTopup; // +0xf
    BOOL _isRefreshingGiftList; // +0x10
    BOOL _autoSelectPackageSelectGiftItem; // +0x11
    unsigned int _preferredGiftUnlockType; // +0x14
    MMFinderLiveTaskId * _taskId; // +0x18
    id <MMLiveRewardGiftSelectionViewDelegate> _viewDelegate; // +0x20
    id <MMLiveRewardGiftSelectionLogicDelegate> _logicDelegate; // +0x28
    NSArray * _giftItems; // +0x30
    unsigned long long _selectionMode; // +0x38
    id _userInfo; // +0x40
    id /* block */ _onCancel; // +0x48
    FinderLiveRewardGiftExtInfo * _externRewardExtInfo; // +0x50
    unsigned long long _bottomButtonEntranceSourceForReport; // +0x58
    FanClubPanelInfo * _currentFanClubInfo; // +0x60
    MMLiveHalfScreenTitleBarView * _mainTitleBar; // +0x68
    MMUIView * _titleView; // +0x70
    MMCPLabel * _titleLabel; // +0x78
    MMHeadImageView * _curRewardRecipientHeadImageView; // +0x80
    MMCPLabel * _curRewardRecipientNickNameLabel; // +0x88
    UIImageView * _switchRewardUserIconView; // +0x90
    UITapGestureRecognizer * _switchRewardUserGestureRecognizer; // +0x98
    UIPageControl * _giftPageControl; // +0xa0
    UICollectionView * _giftCollectionView; // +0xa8
    UIView * _giftCollectionBackView; // +0xb0
    CAGradientLayer * _giftCollectionMaskGradientLayer; // +0xb8
    MMLiveRewardGiftLayout * _giftCollectionLayout; // +0xc0
    MMScrollView * _giftCollectionPageContainerView; // +0xc8
    NSMutableArray * _giftCollectionViewList; // +0xd0
    MMLiveRewardGiftCoinButton * _coinsButton; // +0xd8
    MMLiveRewardGiftPreviewWindow * _previewWindow; // +0xe0
    MMLiveRewardGiftSendingCountMenuBar * _sendingCountMenuBar; // +0xe8
    MMFinderLiveRewardGiftItem * _longPressedGiftItem; // +0xf0
    MMNormalTipsView * _giftMultipleSendTipsView; // +0xf8
    MMNormalTipsView * _packageGiftSendTipsView; // +0x100
    MMLiveRewardGiftAttackContactBubbleView * _giftAttackContactBubbleView; // +0x108
    MMNormalTipsView * _attackGiftSendTipsView; // +0x110
    MMUIView * _contentView; // +0x118
    CAShapeLayer * _shapeLayer; // +0x120
    MMUILabel * _currentTabDescLabel; // +0x128
    MMUILabel * _collectGiftEmptyLabel; // +0x130
    double _viewTopAtPanBegin; // +0x138
    double _previousPanPositionY; // +0x140
    long long _balance; // +0x148
    NSString * _subTitle; // +0x150
    long long _firstPopularPage; // +0x158
    UIScrollView * _giftGroupLabelContrainerView; // +0x160
    NSMutableArray * _giftGroupLabels; // +0x168
    UIButton * _giftSearchButton; // +0x170
    UIView * _giftGroupLabelWrapperView; // +0x178
    NSString * _currentSelectGiftGroupLabel; // +0x180
    UIView * _privilegeEntranceView; // +0x188
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x190
    UILabel * _identityStatusLabel; // +0x198
    MMCPLabel * _nextLevelWecoinAmountLabel; // +0x1a0
    UIImageView * _arrowView; // +0x1a8
    WCFinderHeadImageView * _identityHeadImageView; // +0x1b0
    UIImageView * _identitySwitchIconView; // +0x1b8
    MMUILabel * _identityNicknameLabel; // +0x1c0
    UIView * _wholeProgressView; // +0x1c8
    UIView * _currentProgressView; // +0x1d0
    CAGradientLayer * _currentProgressGradientLayer; // +0x1d8
    CALayer * _currentProgressColorLayer; // +0x1e0
    id /* block */ _relocateTabBlock; // +0x1e8
    MMLiveRewardGiftCustomizationTipView * _customizationTipView; // +0x1f0
    MMLiveRewardGiftNewCustomizationTipView * _newedCustomizationTipView; // +0x1f8
    MMLiveRewardGiftNewCustomizationSettingPanel * _newedCustomizationSettingPanel; // +0x200
    NSString * _preferredGiftId; // +0x208
    NSIndexPath * _preferredGiftIndexPath; // +0x210
    MMFinderLiveRewardGiftItem * _preferredGiftItemSnapshot; // +0x218
    NSString * _pinnedGiftProductId; // +0x220
    NSString * _pinnedGiftGroupLabel; // +0x228
    NSMutableSet * _loadingGroupSet; // +0x230
    MMFinderLiveRewardGiftItem * _packageSelectGiftItem; // +0x238
    MMLiveRewardGiftAIGCOperationPanel * _aigcPanel; // +0x240
    NSMutableSet * _exposedGiftKeys; // +0x248
}
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 preferredGiftId:(id)arg2;
- (id)initWithTaskId:(id)arg1 preferredGiftId:(id)arg2 preferredGiftUnlockType:(unsigned int)arg3;
- (id)initWithTaskId:(id)arg1 preferredGiftId:(id)arg2 preferredGiftItem:(id)arg3 preferredGiftUnlockType:(unsigned int)arg4;
- (id)initWithTaskId:(id)arg1 selectionMode:(unsigned long long)arg2;
- (id)initWithTaskId:(id)arg1 packageSelectGiftItem:(id)arg2 autoSelectGiftItem:(BOOL)arg3;
- (id)initWithTaskId:(id)arg1 preferredGiftId:(id)arg2 selectionMode:(unsigned long long)arg3 packageSelectGiftItem:(id)arg4 autoSelectGiftItem:(BOOL)arg5;
- (void)dealloc;
- (void)initView;
- (id)createGiftCollectionView:(id)arg1;
- (void)initNotifications;
- (void)initTitleView;
- (void)reloadDataForTitleView;
- (void)reloadDataForPrivilegeEntranceView;
- (void)setupPrivilegeEntranceViewAccessibilityLabel;
- (void)reloadDataForGiftGroupLabels;
- (void)updateCollectionLayout:(id)arg1;
- (void)updatePageControl;
- (void)updateCollectGiftEmptyViewVisibility;
- (void)reloadData;
- (void)reloadGiftCollectionViewList;
- (void)scrollHorizontalToPage:(long long)arg1 animated:(BOOL)arg2;
- (void)saveLastGiftPage;
- (void)restoreLastGiftPage;
- (BOOL)isTabEligibleForPositionRestore:(id)arg1;
- (BOOL)shouldSkipFetchGiftListOnReopen;
- (id)liveTask;
- (void)updateHeadImageConerRadius:(double)arg1;
- (double)currentContentViewHeight;
- (double)getGiftCollectionViewHeight;
- (void)setCurrentSelectGiftGroupLabel:(id)arg1;
- (void)adjustContentOffsetWithGroupLabel:(id)arg1;
- (void)updateGroupLabelWithCurrentPage:(unsigned long long)arg1;
- (void)scrollToTapGroupLabel:(id)arg1;
- (void)scrollToTapGroupLabel:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToPackageGroupTabAndSelectGiftItem:(id)arg1;
- (void)updateIdentityHeadImageAndNickname;
- (void)onIdentityHeadImageTapped;
- (void)updateCurrentProgressLayers;
- (void)createCurrentProgressGradientLayer;
- (void)createCurrentProgressColorLayer;
- (void)showGiftMultipleSendTipsViewIfNeed;
- (void)updateRewardSourceBeforeSending;
- (void)dismissAccessories;
- (void)setExternRewardExtInfo:(id)arg1;
- (double)cellItemSpacing;
- (double)cellLineSpacing;
- (id)currentGiftCollectionView;
- (long long)currentSelectGiftGroupIndex;
- (long long)getGiftGroupIndexWith:(id)arg1 section:(long long)arg2;
- (id)getGiftLayoutOfCollectionView:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTitleView;
- (void)layoutGiftGroupViews;
- (void)layoutCurrentTabDescLabel;
- (void)layoutPrivilegeEntranceView;
- (double)getCurrentSectionInsetTop;
- (BOOL)collectionViewhasTopPadding;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)autoScrollToPackageTabIfNeeded;
- (void)reloadAndRefreshData;
- (void)fetchWecoinBalance;
- (void)updateWecoinBalance:(long long)arg1;
- (long long)currentWecoinBalance;
- (void)setSubtitle:(id)arg1;
- (void)showMenuItemVcFromSelectedGiftItem;
- (void)setNavigatingToTopup;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onCoinButtonClicked;
- (void)onPanGestureRecognizerBegan;
- (void)onTitleViewTaped:(id)arg1;
- (void)handlePrivilegeEntranceGestureRecognizer:(id)arg1;
- (void)onTapSearchButton;
- (void)onTapGroupLabel:(id)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)onPurchaseGiftPackageSucceed;
- (void)onLongPressNormalGiftItemInCollectionView:(id)arg1 giftItem:(id)arg2 atIndexPath:(id)arg3;
- (void)onLongPressAttackContactGiftItemInCollectionView:(id)arg1 giftItem:(id)arg2 atIndexPath:(id)arg3;
- (void)tryShowAttackGiftSendTipsViewInCollectionView:(id)arg1 giftItem:(id)arg2 atIndexPath:(id)arg3;
- (void)openAttackGiftHelpWebView;
- (void)onFetchRewardGiftListWithLiveTaskId:(id)arg1 liveGiftItems:(id)arg2;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)checkScrollToBottomForPagination:(id)arg1;
- (void)scheduleCurrentGroupPaginationPreloadCheck;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)giftCollectionViewDidEndingScrolling:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showPreviewWindowWithGiftItem:(id)arg1 atIndexPath:(id)arg2;
- (id)designerMenuContentViewForGiftItem:(id)arg1;
- (void)onCustomizationMenuItemTapped:(id)arg1 giftItem:(id)arg2;
- (void)updatePreviewWindowGiftItemIfNeeded;
- (void)showNewCustomizationSettingPanel:(id)arg1 atIndexPath:(id)arg2 recoverPreviewWindow:(BOOL)arg3;
- (void)updateNewedCustomizationTipViewOriginAtIndexPath:(id)arg1;
- (void)dismissNewedCustomizationTipView;
- (id)getRewardGiftCollectionViewCellAtIndexPath:(id)arg1;
- (unsigned int)getCurrentLevel;
- (id)getGiftItemsWithGroupIndex:(long long)arg1;
- (id)getLiveGiftItemsByGroupName:(id)arg1;
- (id)getLiveGiftItemsInOrder;
- (id)giftItemsByMovingPinnedGiftToFront:(id)arg1 groupName:(id)arg2;
- (BOOL)pinPreferredGiftWithGroupLabel:(id)arg1;
- (BOOL)isSendingGiftToAudience;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 indexPath:(id)arg3 andProductId:(id)arg4 tabName:(id)arg5;
- (void)reportCustomEvent:(id)arg1;
- (void)reportTabExposeEvent:(id)arg1 tabPage:(unsigned long long)arg2;
- (void)onClickActivityUnlockGiftJumpAction:(id)arg1 giftItem:(id)arg2;
- (void)onClickAIGCGiftJumpAction:(id)arg1 giftItem:(id)arg2;
- (id)collectGiftMenuActionsForGiftItem:(id)arg1;
- (BOOL)shouldShowPackageGiftMenuItemForGiftItem:(id)arg1;
- (void)onPackageGiftMenuItemTapped:(id)arg1 giftItem:(id)arg2;
- (void)onCollectGiftAction:(id)arg1 giftItem:(id)arg2 action:(unsigned long long)arg3;
- (unsigned int)getIntimacyLevel;
- (void)layoutCustomizationTipViewAnimated:(BOOL)arg1 prelayoutActions:(id /* block */)arg2;
- (void)onGiftCustomizationTipViewExpandButtonTapped:(id)arg1;
- (void)onGiftCustomizationTipViewStyleSelectionChanged:(id)arg1;
- (void)onGiftCustomizationTipViewTextCustomizationButtonTapped:(id)arg1;
- (void)onGiftTextCustomizationCanceled:(id)arg1 model:(id)arg2;
- (void)onGiftTextCustomizationConfirmed:(id)arg1 model:(id)arg2;
- (void)onGiftTextCustomizationCleared:(id)arg1 model:(id)arg2;
- (id)indexPathForGiftItemWithProductId:(id)arg1;
- (id)indexPathForGiftItemInRepositoryWithProductId:(id)arg1 groupLabel:(id *)arg2;
- (BOOL)doesGiftItem:(id)arg1 matchUnlockType:(unsigned int)arg2;
- (void)commitCustomizationForModel:(id)arg1 blocking:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)audienceLogReporter;
- (void)showAIGCOperationPanel:(id)arg1;
- (void)_showAIGCOperationPanel:(id)arg1;
- (void)onLiveRewardAIGCGiftOperationPageViewWillClose;
- (void)onLiveRewardAIGCGiftOperationPageViewShouldReturnToGiftPanel;
- (void)onAIGCGiftStatusUpdated:(id)arg1 status:(unsigned long long)arg2;
- (void)onAIGCGiftGenerationShowPanelReddot:(id)arg1 generateSuccess:(BOOL)arg2;
- (BOOL)isLoadingMoreForGroup:(id)arg1;
- (void)updatePaginationLoadingFooterForGroup:(id)arg1;
- (void)loadMoreGiftItemsForCurrentGroup;
- (void)reloadCurrentGroupCollectionView;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)giftItems;
- (void)setGiftItems:(id)arg1;
- (BOOL)isRewardOpening;
- (void)setIsRewardOpening:(BOOL)arg1;
- (unsigned long long)selectionMode;
- (void)setSelectionMode:(unsigned long long)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id)externRewardExtInfo;
- (unsigned long long)bottomButtonEntranceSourceForReport;
- (void)setBottomButtonEntranceSourceForReport:(unsigned long long)arg1;
- (id)currentFanClubInfo;
- (void)setCurrentFanClubInfo:(id)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (id)mainTitleBar;
- (void)setMainTitleBar:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)curRewardRecipientHeadImageView;
- (void)setCurRewardRecipientHeadImageView:(id)arg1;
- (id)curRewardRecipientNickNameLabel;
- (void)setCurRewardRecipientNickNameLabel:(id)arg1;
- (id)switchRewardUserIconView;
- (void)setSwitchRewardUserIconView:(id)arg1;
- (id)switchRewardUserGestureRecognizer;
- (void)setSwitchRewardUserGestureRecognizer:(id)arg1;
- (id)giftPageControl;
- (void)setGiftPageControl:(id)arg1;
- (id)giftCollectionView;
- (void)setGiftCollectionView:(id)arg1;
- (id)giftCollectionBackView;
- (void)setGiftCollectionBackView:(id)arg1;
- (id)giftCollectionMaskGradientLayer;
- (void)setGiftCollectionMaskGradientLayer:(id)arg1;
- (id)giftCollectionLayout;
- (void)setGiftCollectionLayout:(id)arg1;
- (id)giftCollectionPageContainerView;
- (void)setGiftCollectionPageContainerView:(id)arg1;
- (id)giftCollectionViewList;
- (void)setGiftCollectionViewList:(id)arg1;
- (id)coinsButton;
- (void)setCoinsButton:(id)arg1;
- (id)previewWindow;
- (void)setPreviewWindow:(id)arg1;
- (id)sendingCountMenuBar;
- (void)setSendingCountMenuBar:(id)arg1;
- (id)longPressedGiftItem;
- (void)setLongPressedGiftItem:(id)arg1;
- (id)giftMultipleSendTipsView;
- (void)setGiftMultipleSendTipsView:(id)arg1;
- (id)packageGiftSendTipsView;
- (void)setPackageGiftSendTipsView:(id)arg1;
- (id)giftAttackContactBubbleView;
- (void)setGiftAttackContactBubbleView:(id)arg1;
- (id)attackGiftSendTipsView;
- (void)setAttackGiftSendTipsView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)currentTabDescLabel;
- (void)setCurrentTabDescLabel:(id)arg1;
- (id)collectGiftEmptyLabel;
- (void)setCollectGiftEmptyLabel:(id)arg1;
- (double)viewTopAtPanBegin;
- (void)setViewTopAtPanBegin:(double)arg1;
- (double)previousPanPositionY;
- (void)setPreviousPanPositionY:(double)arg1;
- (BOOL)isScrollDirectionVerticalEnabled;
- (void)setIsScrollDirectionVerticalEnabled:(BOOL)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (long long)balance;
- (void)setBalance:(long long)arg1;
- (BOOL)fetchWecoinBalanceFinished;
- (void)setFetchWecoinBalanceFinished:(BOOL)arg1;
- (BOOL)isLastLayoutOrientationIsPortrait;
- (void)setIsLastLayoutOrientationIsPortrait:(BOOL)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (long long)firstPopularPage;
- (void)setFirstPopularPage:(long long)arg1;
- (id)giftGroupLabelContrainerView;
- (void)setGiftGroupLabelContrainerView:(id)arg1;
- (id)giftGroupLabels;
- (void)setGiftGroupLabels:(id)arg1;
- (id)giftSearchButton;
- (void)setGiftSearchButton:(id)arg1;
- (BOOL)hasReportedSearchIconExpose;
- (void)setHasReportedSearchIconExpose:(BOOL)arg1;
- (id)giftGroupLabelWrapperView;
- (void)setGiftGroupLabelWrapperView:(id)arg1;
- (id)currentSelectGiftGroupLabel;
- (id)privilegeEntranceView;
- (void)setPrivilegeEntranceView:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)identityStatusLabel;
- (void)setIdentityStatusLabel:(id)arg1;
- (id)nextLevelWecoinAmountLabel;
- (void)setNextLevelWecoinAmountLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)identityHeadImageView;
- (void)setIdentityHeadImageView:(id)arg1;
- (id)identitySwitchIconView;
- (void)setIdentitySwitchIconView:(id)arg1;
- (id)identityNicknameLabel;
- (void)setIdentityNicknameLabel:(id)arg1;
- (id)wholeProgressView;
- (void)setWholeProgressView:(id)arg1;
- (id)currentProgressView;
- (void)setCurrentProgressView:(id)arg1;
- (id)currentProgressGradientLayer;
- (void)setCurrentProgressGradientLayer:(id)arg1;
- (id)currentProgressColorLayer;
- (void)setCurrentProgressColorLayer:(id)arg1;
- (id /* block */)relocateTabBlock;
- (void)setRelocateTabBlock:(id /* block */)arg1;
- (id)customizationTipView;
- (void)setCustomizationTipView:(id)arg1;
- (BOOL)navigatedToTopup;
- (void)setNavigatedToTopup:(BOOL)arg1;
- (id)newedCustomizationTipView;
- (void)setNewedCustomizationTipView:(id)arg1;
- (id)newedCustomizationSettingPanel;
- (void)setNewedCustomizationSettingPanel:(id)arg1;
- (id)preferredGiftId;
- (void)setPreferredGiftId:(id)arg1;
- (unsigned int)preferredGiftUnlockType;
- (void)setPreferredGiftUnlockType:(unsigned int)arg1;
- (id)preferredGiftIndexPath;
- (void)setPreferredGiftIndexPath:(id)arg1;
- (id)preferredGiftItemSnapshot;
- (void)setPreferredGiftItemSnapshot:(id)arg1;
- (id)pinnedGiftProductId;
- (void)setPinnedGiftProductId:(id)arg1;
- (id)pinnedGiftGroupLabel;
- (void)setPinnedGiftGroupLabel:(id)arg1;
- (id)loadingGroupSet;
- (void)setLoadingGroupSet:(id)arg1;
- (BOOL)isRefreshingGiftList;
- (void)setIsRefreshingGiftList:(BOOL)arg1;
- (id)packageSelectGiftItem;
- (void)setPackageSelectGiftItem:(id)arg1;
- (BOOL)autoSelectPackageSelectGiftItem;
- (void)setAutoSelectPackageSelectGiftItem:(BOOL)arg1;
- (id)aigcPanel;
- (void)setAigcPanel:(id)arg1;
- (id)exposedGiftKeys;
- (void)setExposedGiftKeys:(id)arg1;
- (void).cxx_destruct;
@end
