@interface MMLiveRewardGiftSelectionView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate, WCActionSheetDelegate, MMFinderLiveMgrExt, MMLiveRewardGiftCollectionViewCellDelegate, MMLiveRewardGiftPreviewWindowDelegate, MMLiveRewardGiftCustomizationTipViewDelegate, MMLiveRewardGiftCustomizationTextPageSheetDelegate>
{
    BOOL _isRewardOpening; // +0x8
    BOOL _isScrollDirectionVerticalEnabled; // +0x9
    BOOL _wecoinBalanceUpdated; // +0xa
    BOOL _fetchWecoinBalanceFinished; // +0xb
    BOOL _isLastLayoutOrientationIsPortrait; // +0xc
    BOOL _navigatedToTopup; // +0xd
    BOOL _autoSelectPackageSelectGiftItem; // +0xe
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMLiveRewardGiftSelectionViewDelegate> _viewDelegate; // +0x18
    id <MMLiveRewardGiftSelectionLogicDelegate> _logicDelegate; // +0x20
    NSArray * _giftItems; // +0x28
    unsigned long long _selectionMode; // +0x30
    id _userInfo; // +0x38
    id /* block */ _onCancel; // +0x40
    FinderLiveRewardGiftExtInfo * _externRewardExtInfo; // +0x48
    MMLiveHalfScreenTitleBarView * _mainTitleBar; // +0x50
    MMUIView * _titleView; // +0x58
    MMCPLabel * _titleLabel; // +0x60
    MMHeadImageView * _curRewardRecipientHeadImageView; // +0x68
    MMCPLabel * _curRewardRecipientNickNameLabel; // +0x70
    UIImageView * _switchRewardUserIconView; // +0x78
    UIPageControl * _giftPageControl; // +0x80
    UICollectionView * _giftCollectionView; // +0x88
    UIView * _giftCollectionBackView; // +0x90
    CAGradientLayer * _giftCollectionMaskGradientLayer; // +0x98
    MMLiveRewardGiftLayout * _giftCollectionLayout; // +0xa0
    MMScrollView * _giftCollectionPageContainerView; // +0xa8
    NSMutableArray * _giftCollectionViewList; // +0xb0
    MMLiveRewardGiftCoinButton * _coinsButton; // +0xb8
    MMLiveRewardGiftPreviewWindow * _previewWindow; // +0xc0
    MMLiveRewardGiftSendingCountMenuBar * _sendingCountMenuBar; // +0xc8
    MMFinderLiveRewardGiftItem * _longPressedGiftItem; // +0xd0
    MMNormalTipsView * _giftMultipleSendTipsView; // +0xd8
    MMNormalTipsView * _packageGiftSendTipsView; // +0xe0
    MMLiveRewardGiftAttackContactBubbleView * _giftAttackContactBubbleView; // +0xe8
    MMNormalTipsView * _attackGiftSendTipsView; // +0xf0
    MMUIView * _contentView; // +0xf8
    CAShapeLayer * _shapeLayer; // +0x100
    MMUILabel * _currentTabDescLabel; // +0x108
    double _viewTopAtPanBegin; // +0x110
    double _previousPanPositionY; // +0x118
    NSMutableSet * _exposedProductIdSet; // +0x120
    long long _balance; // +0x128
    NSString * _subTitle; // +0x130
    long long _firstPopularPage; // +0x138
    UIScrollView * _giftGroupLabelContrainerView; // +0x140
    NSMutableArray * _giftGroupLabels; // +0x148
    NSString * _currentSelectGiftGroupLabel; // +0x150
    UIView * _privilegeEntranceView; // +0x158
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x160
    UILabel * _identityStatusLabel; // +0x168
    MMCPLabel * _nextLevelWecoinAmountLabel; // +0x170
    UIImageView * _arrowView; // +0x178
    UIView * _wholeProgressView; // +0x180
    UIView * _currentProgressView; // +0x188
    CAGradientLayer * _currentProgressGradientLayer; // +0x190
    CALayer * _currentProgressColorLayer; // +0x198
    FanClubPanelInfo * _currentFanClubInfo; // +0x1a0
    id /* block */ _relocateTabBlock; // +0x1a8
    MMLiveRewardGiftCustomizationTipView * _customizationTipView; // +0x1b0
    MMLiveRewardGiftNewCustomizationTipView * _newedCustomizationTipView; // +0x1b8
    MMLiveRewardGiftNewCustomizationSettingPanel * _newedCustomizationSettingPanel; // +0x1c0
    NSString * _preferredGiftId; // +0x1c8
    NSIndexPath * _preferredGiftIndexPath; // +0x1d0
    MMFinderLiveRewardGiftItem * _packageSelectGiftItem; // +0x1d8
}
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 preferredGiftId:(id)arg2;
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
- (void)reloadData;
- (void)reloadGiftCollectionViewList;
- (void)scrollHorizontalToPage:(long long)arg1 animated:(BOOL)arg2;
- (void)saveLastGiftPage;
- (void)restoreLastGiftPage;
- (id)liveTask;
- (void)updateHeadImageConerRadius:(double)arg1;
- (double)currentContentViewHeight;
- (double)getGiftCollectionViewHeight;
- (void)setCurrentSelectGiftGroupLabel:(id)arg1;
- (void)adjustContentOffsetWithGroupLabel:(id)arg1;
- (void)updateGroupLabelWithCurrentPage:(unsigned long long)arg1;
- (void)scrollToTapGroupLabel:(id)arg1;
- (void)scrollToPackageGroupTabAndSelectGiftItem:(id)arg1;
- (void)updateCurrentProgressLayers;
- (void)createCurrentProgressGradientLayer;
- (void)createCurrentProgressColorLayer;
- (void)showGiftMultipleSendTipsViewIfNeed;
- (void)showPackageGiftSendTipsViewOnCellIfNeed:(id)arg1;
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
- (void)setSubtitle:(id)arg1;
- (void)showMenuItemVcFromSelectedGiftItem;
- (void)setNavigatingToTopup;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onCoinButtonClicked;
- (void)onPanGestureRecognizerBegan;
- (void)onTitleViewTaped:(id)arg1;
- (void)handlePrivilegeEntranceGestureRecognizer:(id)arg1;
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
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)giftCollectionViewDidEndingScrolling:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showPreviewWindowWithGiftItem:(id)arg1 atIndexPath:(id)arg2;
- (void)updatePreviewWindowGiftItemIfNeeded;
- (void)tryShowNewCustomizationTipViewAtIndexPath:(id)arg1;
- (void)showNewCustomizationSettingPanel:(id)arg1 atIndexPath:(id)arg2 recoverPreviewWindow:(BOOL)arg3;
- (void)updateNewedCustomizationTipViewOriginAtIndexPath:(id)arg1;
- (void)dismissNewedCustomizationTipView;
- (id)getRewardGiftCollectionViewCellAtIndexPath:(id)arg1;
- (unsigned int)getCurrentLevel;
- (id)getGiftItemsWithGroupIndex:(long long)arg1;
- (id)getLiveGiftItemsByGroupName:(id)arg1;
- (id)getLiveGiftItemsInOrder;
- (BOOL)isSendingGiftToAudience;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 indexPath:(id)arg3 andProductId:(id)arg4;
- (void)reportAllExposedGifts;
- (void)reportGiftExposeEventWithViewId:(id)arg1 indexPath:(id)arg2 andProductId:(id)arg3;
- (void)reportCustomEvent:(id)arg1;
- (void)reportTabExposeEvent:(id)arg1 tabPage:(unsigned long long)arg2;
- (void)onClickActivityUnlockGiftJumpAction:(id)arg1 giftItem:(id)arg2;
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
- (void)commitCustomizationForModel:(id)arg1 blocking:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)audienceLogReporter;
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
- (double)viewTopAtPanBegin;
- (void)setViewTopAtPanBegin:(double)arg1;
- (double)previousPanPositionY;
- (void)setPreviousPanPositionY:(double)arg1;
- (BOOL)isScrollDirectionVerticalEnabled;
- (void)setIsScrollDirectionVerticalEnabled:(BOOL)arg1;
- (id)exposedProductIdSet;
- (void)setExposedProductIdSet:(id)arg1;
- (long long)balance;
- (void)setBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
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
- (id)wholeProgressView;
- (void)setWholeProgressView:(id)arg1;
- (id)currentProgressView;
- (void)setCurrentProgressView:(id)arg1;
- (id)currentProgressGradientLayer;
- (void)setCurrentProgressGradientLayer:(id)arg1;
- (id)currentProgressColorLayer;
- (void)setCurrentProgressColorLayer:(id)arg1;
- (id)currentFanClubInfo;
- (void)setCurrentFanClubInfo:(id)arg1;
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
- (id)preferredGiftIndexPath;
- (void)setPreferredGiftIndexPath:(id)arg1;
- (id)packageSelectGiftItem;
- (void)setPackageSelectGiftItem:(id)arg1;
- (BOOL)autoSelectPackageSelectGiftItem;
- (void)setAutoSelectPackageSelectGiftItem:(BOOL)arg1;
- (void).cxx_destruct;
@end
