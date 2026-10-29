@interface WAMainFrameTaskBarView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WADynamicBackgroundGLViewControllerDelegate, WAMainFrameTaskBarSectionWeAppViewDelegate, WAMainFrameTaskBarSectionBaseViewReportDelegate, WAMainFrameTaskBarSectionWeAppContainerDelegate, WAMainFrameTaskBarSectionOtherViewDelegate, IUiUtilExt, UIGestureRecognizerDelegate, WAMainFrameDesktopContainerViewDelegate, WCMainWindowExt, MMLimitedModeExt, WAMainFrameTaskBarSectionSearchViewDelegate, MiniTaskUIMgrExt, ITingPlayCenterMgrExt, WAMainFrameAudioCenterDelegate, WAMainFrameChatBotEntryHost, WAMainFrameTaskBarSearchCustomViewDelegate>
{
    BOOL _containerVCDisappearing; // +0x8
    BOOL _visible; // +0x9
    BOOL _draggingShowState; // +0xa
    BOOL _showState; // +0xb
    BOOL _isSpread; // +0xc
    BOOL _isStarNodeSpread; // +0xd
    BOOL _containerTableViewIsSettingInset; // +0xe
    BOOL _isPresentingSecondaryPage; // +0xf
    BOOL _isPresentingSearch; // +0x10
    BOOL _forbidInnerItemTransform; // +0x11
    BOOL _tapTicState; // +0x12
    BOOL _reseted; // +0x13
    BOOL _canShowDynamicBackground; // +0x14
    BOOL _isDraggingDown; // +0x15
    BOOL _notifiedStartPull; // +0x16
    BOOL _isAnimatingShowing; // +0x17
    BOOL _isAnimatingHiding; // +0x18
    BOOL _currentInDarkStyle; // +0x19
    BOOL _isInDarkMode; // +0x1a
    BOOL _isLandscape; // +0x1b
    BOOL _cellOnceCreated; // +0x1c
    id <WAMainFrameTaskBarViewDelegate> _taskBarViewDelegate; // +0x20
    MMUIViewController * _containerVC; // +0x28
    UICollectionView * _mixedCollectionView; // +0x30
    UIView * _fakeNavigationBottomBackground; // +0x38
    UIView * _fakeNavigationBackground; // +0x40
    UISearchBar * _realSearchBar; // +0x48
    WAMainFrameDesktopContainerView * _desktopContainerView; // +0x50
    UIView * _backgroundContainerView; // +0x58
    UIView * _backgroundView; // +0x60
    UIView * _bgMaskView; // +0x68
    WADynamicBackgroundGLViewController * _dynamicBGVC; // +0x70
    CAGradientLayer * _backgroundLayer; // +0x78
    UIView * _contentView; // +0x80
    UIView * _fakeTopTitleView; // +0x88
    UILabel * _fakeTopTitleLabel; // +0x90
    UILabel * _accessibilityTopTitle; // +0x98
    UIButton * _accessibilityCloseAreaButton; // +0xa0
    UIView * _fakeTopTitleSeperateLine; // +0xa8
    UIView * _transformViewContainerView; // +0xb0
    UIView * _mixedCollectionViewContainerView; // +0xb8
    UIView * _transformView; // +0xc0
    CAGradientLayer * _gradientLayer; // +0xc8
    WAMainFrameTaskBarCloseArea * _closeArea; // +0xd0
    UIView * _closeAreaBackgroundView; // +0xd8
    UIImageView * _closeImageView; // +0xe0
    UILabel * _closeLabel; // +0xe8
    UIButton * _closeButton; // +0xf0
    UIBarButtonItem * _savedRightButtonItem; // +0xf8
    WAMainFrameTaskBarDotLoadingView * _arrowImageView; // +0x100
    WAMainFrameChatBotEntryMgr * _chatBotEntryMgr; // +0x108
    WATaskBarCollectionViewLayout * _mixedLayout; // +0x110
    WAMainFrameTaskBarLogic * _taskBarLogic; // +0x118
    NSMutableArray * _mixedSectionData; // +0x120
    NSMutableArray * _weAppSectionData; // +0x128
    DynamicBackgroundSystemConfig * _manualBackgroundSystemConfig; // +0x130
    CADisplayLink * _displayLink; // +0x138
    double _manualColorRatio; // +0x140
    UIView * _fakeNavigationBarView; // +0x148
    UIView * _fakeNavigationBarBackgroundView; // +0x150
    UIView * _fakeNavigationBarInnerView; // +0x158
    MFTitleView * _fakeNavigationBarTitleView; // +0x160
    WAAppContainerSearchBar * _searchBar; // +0x168
    WAMainFrameTaskBarSearchCustomView * _searchButtonContainer; // +0x170
    WAMainFrameTaskBarSectionWeAppContainerView * _weAppContainerView; // +0x178
    WAMainFrameTaskBarSectionOtherView * _sectionOtherView; // +0x180
    WAMainFrameTaskBarSectionSearchView * _sectionSearchView; // +0x188
    MainFrameLeftBarView * _fakeNavigationBarLeftBarButton; // +0x190
    NewMainFrameRightTopMenuBtn * _fakeNavigationBarRightButton; // +0x198
    UIButton * _fakeMenuBtnArea; // +0x1a0
    double _lastLayoutWidth; // +0x1a8
    double _emptyViewAreaHeight; // +0x1b0
    WAMainFrameAudioCenterBaseView * _audioCenter; // +0x1b8
    WAMainFrameChatBotVoIPView * _chatBotVoIPView; // +0x1c0
    CGPoint _tableViewContentOffsetOnTapSearch; // +0x1c8
    CGPoint _tableViewLastContentOffset; // +0x1d8
}
+ (BOOL)checkLimitedBlockForType:(long long)arg1;
+ (id)mixColor1:(id)arg1 color2:(id)arg2 ratio:(double)arg3;
- (id)initWithMainFrameTaskBarLogic:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)detectDarkMode;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)enableOthersWording;
- (long long)excludedSectionCountForEmptyCheck;
- (void)updateSectionData;
- (id)currentSectionState;
- (void)animateRemoveSection:(id)arg1;
- (void)updateItemPerLine;
- (void)relayout;
- (void)setVisible:(BOOL)arg1;
- (void)becomeVisible;
- (void)becomeUnVisible;
- (double)calTaskBarHeight;
- (double)getFullScreenHeight;
- (double)calCloseAreaHeight;
- (double)calFakeNavigationBarHeight;
- (void)setContainerVC:(id)arg1;
- (id)availableContainerVC;
- (double)backgroundTopExtendHeight;
- (void)safeAreaInsetsDidChange;
- (void)updateStickingOffset:(double)arg1;
- (void)updateFilteredStickingOffset:(double)arg1;
- (void)updateVisiableOffset:(double)arg1 borderOffset:(double)arg2;
- (void)updateFilteredVisiableOffset:(double)arg1 borderOffset:(double)arg2;
- (void)updateVisibleOffset:(double)arg1 startOffset:(double)arg2 borderOffset:(double)arg3;
- (void)layoutFakeNavigationBarItems;
- (void)updateFilteredVisibleOffset:(double)arg1 startOffset:(double)arg2 borderOffset:(double)arg3;
- (void)updateCollectionViewAlphaProgress:(double)arg1;
- (void)updateCollectionViewScaleProgress:(double)arg1;
- (void)updateWebBgViewAlphaProgress:(double)arg1;
- (id)getBackgroundViewColor;
- (double)getBackgourndViewAlpha;
- (void)updateFloatingProgress:(double)arg1 borderOffset:(double)arg2;
- (void)updateGifAlphaProgress:(double)arg1;
- (BOOL)isXDevice;
- (void)updateDarkStyle;
- (void)animateToShow;
- (void)animateToHide;
- (void)startAnimateToShow;
- (void)endAnimateToShow;
- (void)startAnimateToHide;
- (void)endAnimateToHide;
- (void)unreset;
- (void)reset;
- (void)moveToTopMostItem;
- (void)didRotate:(id)arg1;
- (void)onMemoryWarning;
- (void)onEnterForeground;
- (void)didEnterBackground;
- (void)layoutSubviews;
- (void)relayoutSubviews;
- (void)checkViewNodes;
- (void)initView;
- (void)initBackgroundView;
- (void)buildManualBackground;
- (void)buildManualBackgroundSystem;
- (void)buildManualBackgroundDisplayLink;
- (void)buildGLLayer;
- (void)buildBackgroundLayer;
- (void)backgroundDisplayLink:(id)arg1;
- (_GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (_GLKVector4)mixColorWithA:(_GLKVector4)arg1 b:(_GLKVector4)arg2 portion:(double)arg3;
- (void)initContentView;
- (void)initDesktopView;
- (void)initFakeTopTitleView;
- (void)initArrow;
- (id)createLayout;
- (void)initMixedCollectionView;
- (void)addGradientMaskView;
- (void)initCloseArea;
- (void)initCloseAreaBackgroundView;
- (void)initFakeNavigationBarView;
- (void)updateFakeNavigationBarContentColor:(id)arg1;
- (void)reloadData;
- (void)onTaskBarDataStartUpdateCommonUseDataFromSvr;
- (void)stopCommuseLoadingOvertime;
- (void)commonUseDataEndLoading;
- (void)reloadCommonUseData:(unsigned long long)arg1;
- (void)checkHiddenState;
- (BOOL)shouldHideSearchButton;
- (void)ensureSearchButtonCreated;
- (void)layoutSearchButton;
- (BOOL)needFixVerticalScrollIssue;
- (void)layoutBackgroundView;
- (void)layoutContentView;
- (void)layoutAccessibilityTopTitle;
- (void)layoutFakeNavigationBarTitleCenterXIfNeeded;
- (void)layoutFakeNavigationBarRightButton;
- (id)getIndexPathForLastTaskItem;
- (id)getIndexPathForFirstTaskItem;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)layoutArrow;
- (id)chatBotEntryContainerView;
- (id)chatBotEntryCoverView;
- (double)chatBotEntryFakeNavigationBarHeight;
- (id)chatBotEntryMixedCollectionView;
- (id)chatBotEntryReportSessionId;
- (void)chatBotEntryMarkClosingPageType:(unsigned long long)arg1;
- (void)chatBotEntryUpdateSectionsIfNeeded;
- (void)fillXiaoWeiReportFields:(id)arg1;
- (void)chatBotEntryOpenSessionReady;
- (void)onTapFakeMenuBtn:(id)arg1;
- (void)onTapCloseArea:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)taptic;
- (void)voiceTic;
- (void)reverseVoiceTic;
- (double)getSelfContentViewY;
- (void)onTranslationYChanged:(double)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)dragUpToClose;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)onListViewHeightChange:(id)arg1;
- (id)weAppView;
- (id)myWeAppView;
- (void)refreshOperationWindowOption;
- (id)arrWeAppItem;
- (id)arrMyWeAppItem;
- (id)weAppViewModel;
- (id)myWeAppViewModel;
- (void)onWeAppItemSelected:(id)arg1 position:(int)arg2 isMyWeApp:(BOOL)arg3;
- (void)onWeAppItemDeleted:(id)arg1 position:(int)arg2;
- (void)onMyWeAppItemDeleted:(id)arg1 position:(int)arg2;
- (void)animateChangeSectionHeight;
- (void)onClickMore:(BOOL)arg1 shouldScrollToBottom:(BOOL)arg2;
- (void)notifyMyWeAppChanged:(BOOL)arg1 isFromMyWeApp:(BOOL)arg2 weappItem:(id)arg3 position:(int)arg4;
- (id)getMyWeAppSectionMoreIconPos;
- (void)onNewMoreWeAppIcon:(id)arg1;
- (void)onDragStateChange:(BOOL)arg1;
- (BOOL)onDragViewTo:(CGPoint)arg1;
- (BOOL)isTaskBarSectionVisible;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setIsStarNodeSpread:(BOOL)arg1;
- (BOOL)getStarNodeShowState;
- (void)setDraggingShowState:(BOOL)arg1;
- (void)setShowState:(BOOL)arg1;
- (void)reloadBGWebView;
- (void)endLoadBGWebView;
- (void)updateBackgroundColorWithColor1:(_GLKVector4)arg1 color2:(_GLKVector4)arg2;
- (void)updateFakeNavigationBarTitleView:(unsigned int)arg1 title:(id)arg2;
- (void)updateFakeNavigationBarTitleViewNearMode;
- (void)updateFakeNavigationBarRightBtnRedDot:(BOOL)arg1;
- (BOOL)isPointInItemArea:(CGPoint)arg1;
- (BOOL)isDynamicBackgroundDarkStyle;
- (unsigned long long)currentPageType;
- (id)reportSession;
- (void)desktopWillEnter;
- (void)desktopWillExit:(BOOL)arg1;
- (void)notifyWeAppChanged;
- (void)onClickSearch;
- (BOOL)isSearchButtonClickable;
- (void)onClickSearchWithSearchBar:(id)arg1;
- (void)onTapOnSearchButton;
- (BOOL)needDisableCommUseAppForSearch;
- (void)onSearchPageClickCancel;
- (void)didEnterWeappSearchPage;
- (void)desktopWillEndSearch;
- (void)willBeginSearch;
- (void)willEndSearch;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)mm_onColorAppearanceDidChange;
- (void)onNavigationBarHiddenChanged;
- (void)onMiniTaskEntryShowStateChanged;
- (void)refreshFakeNavigationBarLeftBarButton;
- (void)notifyLimitedModeUpdated;
- (void)notifySilentModeUpdated;
- (void)onTingTaskBarShowingStatusChanged:(BOOL)arg1 success:(BOOL)arg2;
- (void)onSectionViewClick:(id)arg1 weappData:(id)arg2 position:(int)arg3;
- (void)onWeAppSectionViewClick:(id)arg1 position:(int)arg2 isMyWeApp:(BOOL)arg3;
- (void)onSectionViewDelete:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(BOOL)arg4;
- (void)onSectionViewWillDisplay:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(BOOL)arg4;
- (void)reportWeTaskBarFeedClick:(id)arg1 weappData:(id)arg2 position:(long long)arg3;
- (void)reportWeTaskBarWeAppFeedClick:(id)arg1 position:(int)arg2 isMyWeApp:(BOOL)arg3;
- (void)reportWeTaskBarFeedDelete:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(BOOL)arg4;
- (void)reportTaskBarFeedAppear:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(BOOL)arg4;
- (void)reportWeAppSectionMoreAppear:(BOOL)arg1 myWeAppOnly:(BOOL)arg2;
- (void)hideViewsInNavigationBar;
- (void)showViewsInNavigationBar;
- (void)layoutAudioCell;
- (void)initAudioCell;
- (id)getAudioCenterView;
- (id)getChatBotVoIPView;
- (void)onAudioCenterWillLeaveTaskBar;
- (void)onHideWAMainFrameTaskBarView;
- (void)onSetWAMainFrameTaskBarViewShowState:(BOOL)arg1;
- (id)taskBarOpenSession;
- (double)getParentWidth;
- (id)getWeAppSectionData;
- (void)applySearchPlaceHolder:(id)arg1;
- (id)taskBarViewDelegate;
- (void)setTaskBarViewDelegate:(id)arg1;
- (id)containerVC;
- (id)mixedCollectionView;
- (void)setMixedCollectionView:(id)arg1;
- (BOOL)containerVCDisappearing;
- (void)setContainerVCDisappearing:(BOOL)arg1;
- (id)fakeNavigationBottomBackground;
- (void)setFakeNavigationBottomBackground:(id)arg1;
- (id)fakeNavigationBackground;
- (void)setFakeNavigationBackground:(id)arg1;
- (id)realSearchBar;
- (void)setRealSearchBar:(id)arg1;
- (BOOL)visible;
- (BOOL)draggingShowState;
- (BOOL)showState;
- (BOOL)isSpread;
- (void)setIsSpread:(BOOL)arg1;
- (BOOL)isStarNodeSpread;
- (BOOL)containerTableViewIsSettingInset;
- (void)setContainerTableViewIsSettingInset:(BOOL)arg1;
- (BOOL)isPresentingSecondaryPage;
- (void)setIsPresentingSecondaryPage:(BOOL)arg1;
- (BOOL)isPresentingSearch;
- (void)setIsPresentingSearch:(BOOL)arg1;
- (BOOL)forbidInnerItemTransform;
- (void)setForbidInnerItemTransform:(BOOL)arg1;
- (CGPoint)tableViewContentOffsetOnTapSearch;
- (void)setTableViewContentOffsetOnTapSearch:(CGPoint)arg1;
- (id)desktopContainerView;
- (void)setDesktopContainerView:(id)arg1;
- (id)backgroundContainerView;
- (void)setBackgroundContainerView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (id)dynamicBGVC;
- (void)setDynamicBGVC:(id)arg1;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)fakeTopTitleView;
- (void)setFakeTopTitleView:(id)arg1;
- (id)fakeTopTitleLabel;
- (void)setFakeTopTitleLabel:(id)arg1;
- (id)accessibilityTopTitle;
- (void)setAccessibilityTopTitle:(id)arg1;
- (id)accessibilityCloseAreaButton;
- (void)setAccessibilityCloseAreaButton:(id)arg1;
- (id)fakeTopTitleSeperateLine;
- (void)setFakeTopTitleSeperateLine:(id)arg1;
- (id)transformViewContainerView;
- (void)setTransformViewContainerView:(id)arg1;
- (id)mixedCollectionViewContainerView;
- (void)setMixedCollectionViewContainerView:(id)arg1;
- (id)transformView;
- (void)setTransformView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)closeArea;
- (void)setCloseArea:(id)arg1;
- (id)closeAreaBackgroundView;
- (void)setCloseAreaBackgroundView:(id)arg1;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg1;
- (id)closeLabel;
- (void)setCloseLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)savedRightButtonItem;
- (void)setSavedRightButtonItem:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)chatBotEntryMgr;
- (void)setChatBotEntryMgr:(id)arg1;
- (id)mixedLayout;
- (void)setMixedLayout:(id)arg1;
- (id)taskBarLogic;
- (void)setTaskBarLogic:(id)arg1;
- (BOOL)tapTicState;
- (void)setTapTicState:(BOOL)arg1;
- (BOOL)reseted;
- (void)setReseted:(BOOL)arg1;
- (id)mixedSectionData;
- (void)setMixedSectionData:(id)arg1;
- (id)weAppSectionData;
- (void)setWeAppSectionData:(id)arg1;
- (BOOL)canShowDynamicBackground;
- (void)setCanShowDynamicBackground:(BOOL)arg1;
- (id)manualBackgroundSystemConfig;
- (void)setManualBackgroundSystemConfig:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)manualColorRatio;
- (void)setManualColorRatio:(double)arg1;
- (CGPoint)tableViewLastContentOffset;
- (void)setTableViewLastContentOffset:(CGPoint)arg1;
- (BOOL)isDraggingDown;
- (void)setIsDraggingDown:(BOOL)arg1;
- (BOOL)notifiedStartPull;
- (void)setNotifiedStartPull:(BOOL)arg1;
- (BOOL)isAnimatingShowing;
- (void)setIsAnimatingShowing:(BOOL)arg1;
- (BOOL)isAnimatingHiding;
- (void)setIsAnimatingHiding:(BOOL)arg1;
- (id)fakeNavigationBarView;
- (void)setFakeNavigationBarView:(id)arg1;
- (id)fakeNavigationBarBackgroundView;
- (void)setFakeNavigationBarBackgroundView:(id)arg1;
- (id)fakeNavigationBarInnerView;
- (void)setFakeNavigationBarInnerView:(id)arg1;
- (id)fakeNavigationBarTitleView;
- (void)setFakeNavigationBarTitleView:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchButtonContainer;
- (void)setSearchButtonContainer:(id)arg1;
- (id)weAppContainerView;
- (void)setWeAppContainerView:(id)arg1;
- (id)sectionOtherView;
- (void)setSectionOtherView:(id)arg1;
- (id)sectionSearchView;
- (void)setSectionSearchView:(id)arg1;
- (id)fakeNavigationBarLeftBarButton;
- (void)setFakeNavigationBarLeftBarButton:(id)arg1;
- (id)fakeNavigationBarRightButton;
- (void)setFakeNavigationBarRightButton:(id)arg1;
- (id)fakeMenuBtnArea;
- (void)setFakeMenuBtnArea:(id)arg1;
- (BOOL)currentInDarkStyle;
- (void)setCurrentInDarkStyle:(BOOL)arg1;
- (BOOL)isInDarkMode;
- (void)setIsInDarkMode:(BOOL)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (BOOL)cellOnceCreated;
- (void)setCellOnceCreated:(BOOL)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (double)emptyViewAreaHeight;
- (void)setEmptyViewAreaHeight:(double)arg1;
- (id)audioCenter;
- (void)setAudioCenter:(id)arg1;
- (id)chatBotVoIPView;
- (void)setChatBotVoIPView:(id)arg1;
- (void).cxx_destruct;
@end
