@interface WCSearchViewController : MMUIViewController <_TtP4Hero26HeroViewControllerDelegate_, UIViewControllerTransitioningDelegate, HeroInteractiveTransitionPage, WCSearchTransitionViewSource, WCSearchFocusRestorable>
{
    BOOL _isPresentFromHeroAnimation; // +0x70
    BOOL _forceFullScreenPresent; // +0x71
    BOOL _isPoppingBySwipe; // +0x72
    BOOL _isDeepThink; // +0x73
    BOOL _isAskRealPeople; // +0x74
    BOOL _isBackToChat; // +0x75
    BOOL _focusTexfieldWhenFirstShow; // +0x76
    BOOL _useNoSnapshotTransition; // +0x77
    BOOL _focusTextfieldWhenViewAppear; // +0x78
    BOOL _shouldShowTitle; // +0x79
    BOOL _isFTSSugTableShowed; // +0x7a
    BOOL _isCurrentInLargeInput; // +0x7b
    BOOL _enableGlobalSearchLargeInput; // +0x7c
    BOOL _enableVoiceInputV3; // +0x7d
    BOOL _shouldHideNavBar; // +0x7e
    BOOL _hasCheckBox; // +0x7f
    BOOL _hideCheckBox; // +0x80
    BOOL _checkBoxSelect; // +0x81
    WCSearchBar * _searchBar; // +0x88
    UIView * _contentView; // +0x90
    UIView * _navBarContainerView; // +0x98
    UIScreenEdgePanGestureRecognizer * _leftEdgePanGestureRecognizer; // +0xa0
    _TtC6WeChat25WCSearchTransitionManager * _transitionMgr; // +0xa8
    long long _currentScene; // +0xb0
    long long _currentBusinessType; // +0xb8
    MMPageSheetAdapter * _sheetAdapter; // +0xc0
    WCSearchBar * _fromSearchBar; // +0xc8
    FTSWebSearchAdInfo * _latestAdInfo; // +0xd0
    MMUIButton * _backIconView; // +0xd8
    MMUIButton * _settingButton; // +0xe0
    UILabel * _titleLabel; // +0xe8
    UIViewController * _fromVC; // +0xf0
    MMUIButton * _lastCheckBox; // +0xf8
    NSMutableArray * _actionButtons; // +0x100
    UINavigationController * _originalNav; // +0x108
    UIButton * _lastActionButton; // +0x110
    AISearchConfig * _aiSearchConfig; // +0x118
    UIButton * _adV2Button; // +0x120
    UIButton * _aiSearchV2Button; // +0x128
    UIView * _sepView; // +0x130
    AISearchConfig * _aiSearchWithAdConfig; // +0x138
    SearchAdConfig * _searchAdConfig; // +0x140
    FTSWebSearchAdInfo * _searchAdInfo; // +0x148
    NSString * _searchAdId; // +0x150
    NSMutableArray * _needHideViews; // +0x158
    UIView * _extendedNavBandView; // +0x160
    double _lastNavigationAlignedTop; // +0x168
    UIEdgeInsets _lastDuoSearchBarHorizontalMargins; // +0x170
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initWCSearchViewControllerView;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateSeachBarToNaviBar;
- (void)updateSearchBarConstraints;
- (BOOL)shouldAdaptDuoSearchBarHorizontalMargins;
- (void)searchBarHorizontalLayoutDidUpdate;
- (BOOL)largeScreenSearchBarBackIconLeft:(double *)arg1 trailing:(double *)arg2 phoneStyle:(BOOL *)arg3;
- (BOOL)largeScreenSearchBoxLeft:(double *)arg1 right:(double *)arg2 phoneStyle:(BOOL *)arg3;
- (double)duoSearchBarBackIconOffset;
- (UIEdgeInsets)duoAdjustedSearchBarLayoutMargins:(UIEdgeInsets)arg1 searchBarOriginX:(double)arg2;
- (void)assembleNavBarWithTitle;
- (void)assembleCheckBoxButton;
- (void)assembleActionButton;
- (void)assembleAISearchButton;
- (BOOL)enableGlobalSearchAdButton;
- (void)assembleAdButton;
- (id)genAdButton;
- (void)assembleAdV2Button;
- (id)getAdId;
- (void)assembleAISearchV2Button;
- (void)updateAdV2ButtonStatus:(BOOL)arg1;
- (void)updateAISearchV2ButtonStatus:(BOOL)arg1;
- (void)updateCheckBoxHidden:(BOOL)arg1 sugTableShowed:(BOOL)arg2;
- (BOOL)rightSideNeedBreakLine;
- (void)layoutNavBarActionButtons;
- (void)assembleRightActionButtons;
- (BOOL)needAISearchV2Button;
- (BOOL)needAdV2Button;
- (void)showActionSheet:(id)arg1;
- (void)jumpToLiteApp:(id)arg1 timeout:(unsigned int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)restoreSearchFocusWhenAppear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)refreshSearchBarContainerLayout;
- (BOOL)shouldSyncExtendedContentBackground;
- (void)updateExtendedContentBackground;
- (BOOL)shouldUseGreenMicLargeInputTransition;
- (void)mmInputBoxWillEnterLargeInputBox;
- (void)mmInputBoxLargeInputHeightDidChange;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useCustomNavibar;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)configLeftBackButton;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2 forceFullScreen:(BOOL)arg3;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2 forceFullScreen:(BOOL)arg3 animated:(BOOL)arg4;
- (void)startSearchFrom:(id)arg1;
- (void)startSearchFrom:(id)arg1 searchBarOffset:(double)arg2;
- (void)realStartSearchFrom:(id)arg1 forceFullScreen:(BOOL)arg2;
- (void)realStartSearchFrom:(id)arg1 forceFullScreen:(BOOL)arg2 animated:(BOOL)arg3;
- (void)__startSearchFrom:(id)arg1;
- (void)__startSearchFrom:(id)arg1 forceFullScreen:(BOOL)arg2;
- (void)__startSearchFrom:(id)arg1 forceFullScreen:(BOOL)arg2 animated:(BOOL)arg3;
- (void)addLeftEdgeGestureState;
- (void)removeLeftEdgeGestureState;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)onNavigationBackItemClick;
- (void)onNavigationCancelItemClick;
- (void)onPageSettingItemClick;
- (void)disMissMySelf:(BOOL)arg1;
- (BOOL)enableShowKeyboardWhenViewWillAppear;
- (id)inputProvider;
- (id)customSearchBar;
- (id)searchBar;
- (id)transitionMgr;
- (double)topMargin;
- (BOOL)shouldAlignSearchRowWithNavigationBar;
- (BOOL)isNavigationAlignedSearchRowActive;
- (double)navigationContentBandCenterY;
- (double)searchRowCenterOffsetInSearchBar;
- (double)navigationAlignedSearchBarTop;
- (double)navBarContainerHeight;
- (double)searchBarHeight;
- (BOOL)isHalfPage;
- (void)tryHideCheckBoxForQuery:(id)arg1 triggerMinTextLength:(unsigned int)arg2;
- (void)tryHideCheckBox:(BOOL)arg1;
- (void)trySwitchToLargeInputBox;
- (void)switchToLargeInputBoxImmediately;
- (void)switchToLargeInputBox;
- (void)setActionButtonHidden:(BOOL)arg1;
- (void)setActionButtonHiddenImmediately:(BOOL)arg1;
- (void)heroDidEndTransition;
- (void)heroDidCancelTransition;
- (void)heroWillStartAnimatingFromViewController:(id)arg1;
- (void)heroDidEndAnimatingFromViewController:(id)arg1;
- (id)animatableViews;
- (unsigned long long)interactiveTransitionType;
- (void)onStartInteractivePop;
- (void)onEndInteractivePop:(BOOL)arg1;
- (id)getSearchBar;
- (id)getNavBackgroundView;
- (id)getFloatingVoiceInputView;
- (id)getSettingButton;
- (id)getContentView;
- (void)hideNavBar:(BOOL)arg1;
- (void)doSearch;
- (void)jumpToAISearch;
- (void)juampToYuanbaoAd;
- (void)onJumpToAdWithAid:(id)arg1;
- (void)jumpToAISearch:(id)arg1 scene:(unsigned long long)arg2 businessType:(int)arg3 hideSearchBar:(BOOL)arg4 hideNavBar:(BOOL)arg5 extParams:(id)arg6;
- (void)updateConentViewHiddenStatus:(BOOL)arg1;
- (void)report26897:(unsigned long long)arg1 actionType:(unsigned long long)arg2;
- (void)report26897:(unsigned long long)arg1 actionType:(unsigned long long)arg2 docInfo:(id)arg3;
- (void)report25118:(unsigned long long)arg1;
- (void)report25118:(unsigned long long)arg1 itemInfo:(id)arg2 docInfo:(id)arg3 scene:(unsigned long long)arg4 businessType:(long long)arg5;
- (void)updateCheckBoxSelect;
- (void)disableImgSearchButton:(BOOL)arg1;
- (BOOL)checkBoxSelected;
- (BOOL)isLargeInputBox;
- (BOOL)isDeepThinkSelected;
- (BOOL)isAskRealPeopleSelected;
- (unsigned int)inputBoxChangeType;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)navBarContainerView;
- (void)setNavBarContainerView:(id)arg1;
- (id)leftEdgePanGestureRecognizer;
- (void)setLeftEdgePanGestureRecognizer:(id)arg1;
- (void)setTransitionMgr:(id)arg1;
- (BOOL)isPresentFromHeroAnimation;
- (void)setIsPresentFromHeroAnimation:(BOOL)arg1;
- (BOOL)forceFullScreenPresent;
- (void)setForceFullScreenPresent:(BOOL)arg1;
- (BOOL)isPoppingBySwipe;
- (void)setIsPoppingBySwipe:(BOOL)arg1;
- (BOOL)isDeepThink;
- (void)setIsDeepThink:(BOOL)arg1;
- (BOOL)isAskRealPeople;
- (void)setIsAskRealPeople:(BOOL)arg1;
- (BOOL)isBackToChat;
- (void)setIsBackToChat:(BOOL)arg1;
- (long long)currentScene;
- (void)setCurrentScene:(long long)arg1;
- (long long)currentBusinessType;
- (void)setCurrentBusinessType:(long long)arg1;
- (BOOL)focusTexfieldWhenFirstShow;
- (void)setFocusTexfieldWhenFirstShow:(BOOL)arg1;
- (BOOL)useNoSnapshotTransition;
- (void)setUseNoSnapshotTransition:(BOOL)arg1;
- (id)sheetAdapter;
- (void)setSheetAdapter:(id)arg1;
- (BOOL)focusTextfieldWhenViewAppear;
- (void)setFocusTextfieldWhenViewAppear:(BOOL)arg1;
- (id)fromSearchBar;
- (void)setFromSearchBar:(id)arg1;
- (id)latestAdInfo;
- (void)setLatestAdInfo:(id)arg1;
- (id)backIconView;
- (void)setBackIconView:(id)arg1;
- (id)settingButton;
- (void)setSettingButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)shouldShowTitle;
- (void)setShouldShowTitle:(BOOL)arg1;
- (BOOL)isFTSSugTableShowed;
- (void)setIsFTSSugTableShowed:(BOOL)arg1;
- (BOOL)isCurrentInLargeInput;
- (void)setIsCurrentInLargeInput:(BOOL)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)lastCheckBox;
- (void)setLastCheckBox:(id)arg1;
- (id)actionButtons;
- (void)setActionButtons:(id)arg1;
- (BOOL)enableGlobalSearchLargeInput;
- (void)setEnableGlobalSearchLargeInput:(BOOL)arg1;
- (BOOL)enableVoiceInputV3;
- (void)setEnableVoiceInputV3:(BOOL)arg1;
- (BOOL)shouldHideNavBar;
- (void)setShouldHideNavBar:(BOOL)arg1;
- (BOOL)hasCheckBox;
- (void)setHasCheckBox:(BOOL)arg1;
- (BOOL)hideCheckBox;
- (void)setHideCheckBox:(BOOL)arg1;
- (BOOL)checkBoxSelect;
- (void)setCheckBoxSelect:(BOOL)arg1;
- (id)originalNav;
- (void)setOriginalNav:(id)arg1;
- (id)lastActionButton;
- (void)setLastActionButton:(id)arg1;
- (id)aiSearchConfig;
- (void)setAiSearchConfig:(id)arg1;
- (id)adV2Button;
- (void)setAdV2Button:(id)arg1;
- (id)aiSearchV2Button;
- (void)setAiSearchV2Button:(id)arg1;
- (id)sepView;
- (void)setSepView:(id)arg1;
- (id)aiSearchWithAdConfig;
- (void)setAiSearchWithAdConfig:(id)arg1;
- (id)searchAdConfig;
- (void)setSearchAdConfig:(id)arg1;
- (id)searchAdInfo;
- (void)setSearchAdInfo:(id)arg1;
- (id)searchAdId;
- (void)setSearchAdId:(id)arg1;
- (id)needHideViews;
- (void)setNeedHideViews:(id)arg1;
- (id)extendedNavBandView;
- (void)setExtendedNavBandView:(id)arg1;
- (double)lastNavigationAlignedTop;
- (void)setLastNavigationAlignedTop:(double)arg1;
- (UIEdgeInsets)lastDuoSearchBarHorizontalMargins;
- (void)setLastDuoSearchBarHorizontalMargins:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
