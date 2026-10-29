@interface WCWebSearchViewControllerNewH5 : WCSearchViewController <UITextFieldDelegate, ForwardMessageLogicDelegate, WCSearchBarDelegate, WSTagSearchDelegate, _TtP6WeChat24WSPlugin_NavControllable_, _TtP6WeChat22WSViewsManagerDelegate_, WSInputProviderDelegate, WSInteractivePage, MMPageSheetAdapterDelegate, LocalJSConfigurableContainerView, _TtP6WeChat33WSWebViewExceptionHandlerDelegate_, MMScreenShotExt, MMScreenShotReportExt, FTSFloatingVoiceInputViewDelegate, UIViewControllerTransitioningDelegate, WCStoryDismissInteractiveTransitionDelegate, _TtP4Hero26HeroViewControllerDelegate_, MMWebViewDelegate, WSWebViewPluginableProtocol, WCWebSearchPageInterface>
{
    WSTagSearchLogic * _tagSearchLogic; // +0x70
    NSMutableDictionary * _jumpWebParams; // +0x78
    BOOL _enablePopBackInteractiveGesture; // +0x80
    BOOL _keepAliveForMinimize; // +0x81
    BOOL _isFromHotSearchClick; // +0x82
    BOOL _isDismissing; // +0x83
    BOOL _poppedInHalfPage; // +0x84
    BOOL _isKeyBoardSearch; // +0x85
    BOOL _isFriendShare; // +0x86
    unsigned long long _VCType; // +0x88
    WSWebViewPluginScheduler * _pluginScheduler; // +0x90
    WebSearchContext * _context; // +0x98
    WCSearchUIConfig * _uiConfig; // +0xa0
    id /* block */ _clickBackButtonExitAction; // +0xa8
    id /* block */ _viewWillDisappear; // +0xb0
    id /* block */ _viewDidBePushOrPresent; // +0xb8
    MiniRecTransitionController * _m_minimizationTransitionController; // +0xc0
    NSDictionary * _m_gestureStarTaskData; // +0xc8
    _TtC6WeChat21WSTextFieldInteractor * _textFieldInteractor; // +0xd0
    WCWebSearchPresenter * _presenter; // +0xd8
    _TtC6WeChat25WSWebviewExceptionCatcher * _eCatcher; // +0xe0
    ForwardMessageLogicController * _forwardMessageLogicController; // +0xe8
    WCWebSearchInputProvider * _inputProvider; // +0xf0
    NSString * _lastReportedPlaceholderText; // +0xf8
    UIPanGestureRecognizer * _keyboardDismissPanGesture; // +0x100
    UITapGestureRecognizer * _keyboardDismissTapGesture; // +0x108
    WCWebSearchKeyboardDismissGestureDelegate * _keyboardDismissGestureDelegate; // +0x110
    MMTagTextField * _navSearchTextField; // +0x118
    UIView * _searchBoxContainer; // +0x120
    unsigned long long _viewType; // +0x128
    UIButton * _voiceInputButton; // +0x130
    FTSFloatingVoiceInputView * _floatingVoiceInputView; // +0x138
    WCSearchPageState * _store; // +0x140
    WSLocalTemplateController * _webviewController; // +0x148
    double _keyboardHeight; // +0x150
    WCStoryDismissInteractiveTransition * _dismissInteractiveTransition; // +0x158
    WAAppDismissAnimateTransition * _dismissAnimateTransition; // +0x160
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x168
}
+ (BOOL)ftsNavBackToHomePage;
- (void)initVoiceInputButton;
- (void)startNativeVoiceInput:(id)arg1;
- (void)startNativeVoiceInputV2:(id)arg1;
- (void)removeNativeVoiceInputV2;
- (void)showNativeVoiceInputEntry:(id)arg1;
- (void)hideNativeVoiceInputEntry;
- (void)startVoiceInputProcess:(BOOL)arg1;
- (void)startStreamVoiceInput:(long long)arg1 vadSAndNRation:(float)arg2 setLangBySystem:(BOOL)arg3;
- (void)stopStreamVoiceInput;
- (void)cancelStreamVoiceInput;
- (void)observeKeyboardAppear;
- (void)cancelObserveKeyboardAppear;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (BOOL)isUseInteractiveVoiceInput;
- (void)configBottomAiContinue:(id)arg1;
- (void)startActionTriggerShimmerAnimation;
- (void)enableWebInputVoiceHijack:(id)arg1;
- (void)disableWebInputVoiceHijack;
- (void)updateWebInputVoiceHijackHotRegion:(id)arg1;
- (void)setWebInputVoiceHijackEnabled:(id)arg1;
- (void)addPopBackInteractivePopGesture;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (void)heroWillStartAnimatingToViewController:(id)arg1;
- (void)heroDidEndAnimatingFromViewController:(id)arg1;
- (void)heroDidEndAnimatingToViewController:(id)arg1;
- (void)setSearchBarMagicAnimeId:(id)arg1;
- (void)onEndInteractivePop:(BOOL)arg1;
- (BOOL)isFingertipSearch;
- (BOOL)isImageSearch;
- (BOOL)isTopicSearch;
- (BOOL)isSpecialSearch;
- (BOOL)isCustomNavigationBar;
- (id)exposedSearchFeatureItemArrString;
- (void)reportFeatureItemsExposed;
- (BOOL)showCancelButtonUsually;
- (BOOL)enableCancelBackToHomePage;
- (BOOL)isFromMinimize;
- (BOOL)isFromStar;
- (BOOL)isFromMultiContent;
- (BOOL)isPrepareToGestureStar;
- (void)installMinimizationTransitionController;
- (void)prepareMinimizeTask:(id)arg1;
- (void)reloadMinimizeContext:(id)arg1;
- (void)updateMinimizeSnapshotIfNeeded;
- (id)minimizationTransitionController;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (BOOL)shouldBlockMinimizationEntryInInteractivePop;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (id)currentMinimizationTaskBizName;
- (id)currentMinimizationTaskBizKey;
- (id)currentMultiContentTaskBizName;
- (id)currentMultiContentTaskBizKey;
- (id)initWithScene:(unsigned long long)arg1;
- (id)initWithScene:(unsigned long long)arg1 query:(id)arg2;
- (id)initWithParams:(id)arg1;
- (id)initWithParams:(id)arg1 uiConfig:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)resignWebContentFocusIfEnteringCloseOnClearPage;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)willDisappear;
- (void)viewDidBeInteractivePoped;
- (void)dealloc;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)showNavigationBarSepLine;
- (void)injected;
- (double)searchBarHeight;
- (BOOL)prefersStatusBarHidden;
- (void)setActionButtonHiddenImmediately:(BOOL)arg1;
- (void)initData;
- (void)initPlugins;
- (id)pluginScheduler;
- (void)initView;
- (void)setupResultViewKeyboardDismissGesture;
- (void)handleKeyboardDismissPanGesture:(id)arg1;
- (void)handleKeyboardDismissTapGesture:(id)arg1;
- (BOOL)shouldHandleResultViewKeyboardDismissGesture;
- (void)initNavigationBar;
- (void)initRightBarButton;
- (id)customSearchBar;
- (void)initCustomSearchBar;
- (void)applySearchBarInputTextFont;
- (BOOL)needSearchBarInNewStyle;
- (id)validCameraSearchScenes;
- (BOOL)isInProActioveSearchScene;
- (id)validProactiveCameraSearchScenes;
- (void)updateSearchBarInNewStyle;
- (void)setUpStrongButtonStyleV2:(id)arg1;
- (void)initReportPageTypeIfNeed;
- (void)assembleCameraButtonIfNeed:(id)arg1;
- (BOOL)needAssembleCameraButton;
- (void)assembleSearchButton;
- (void)setUpStrongWireFrameStyle:(id)arg1;
- (void)assembleActionButtonToSearchBar;
- (void)setCustomSearchNavBar;
- (void)setLeftBarButtonStyleClose;
- (void)setLeftBarButtonStyleBack;
- (void)setRightBarButtonStyleShare;
- (void)setNavCancelButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (long long)overrideUserInterfaceStyle;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onShareButtonClick:(id)arg1;
- (void)__disMissByBackButton;
- (void)__disMissSelf;
- (void)_disMissByNavPop;
- (BOOL)canBackToLastResultPage;
- (void)backToLastResultPage;
- (void)onNavigationCancelItemClick:(id)arg1;
- (BOOL)enableCancelDissmiss;
- (void)onLeftCloseButtonTap;
- (void)notifyH5ResetStatus:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)outsideSetJumpParams:(id)arg1;
- (void)registerTagSearchLogic;
- (void)resetSearchPlaceHolder;
- (void)applySearchBarPlaceholder;
- (id)localSessionId;
- (void)updateLocalSessionId:(id)arg1;
- (BOOL)isDiscoverPageSearch;
- (BOOL)initiativeImageSearchEnabled;
- (id)inputProvider;
- (id)textFieldInteractor;
- (id)presenter;
- (void)setInitedUrlParams:(id)arg1;
- (id)initedUrlParams;
- (unsigned long long)initScene;
- (id)currentResultView;
- (id)eCatcher;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)reportOpenWebViewStatusWithHttpStatus:(long long)arg1;
- (void)report26897:(unsigned long long)arg1 actionType:(unsigned long long)arg2;
- (void)report26897:(unsigned long long)arg1 actionType:(unsigned long long)arg2 docInfo:(id)arg3;
- (id)placeholderReportInfo26897;
- (BOOL)isShowingTransferredPlaceholder:(id)arg1;
- (void)reportPlaceholderExposureIfNeeded;
- (void)reportPlaceholderClick26897;
- (void)reportPlaceholder26897WithActionId:(unsigned long long)arg1;
- (BOOL)webCanCloseWhenClearInput;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)shouldReturnStartSearch;
- (BOOL)mmShouldAutoFocusAfterClear;
- (void)mmInputBoxSearchButtonClick;
- (void)mmInputBoxKeyBoardClick;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (id)getPageState;
- (id)getSearchParams;
- (id)getWebSearchBar;
- (void)genParallelRequestIdIfNeed;
- (void)sendParallelRequestIfNeed;
- (void)notifyOpenWebSearch;
- (id)prefetchSearchGuideExtReqParams;
- (id)genPrefetchSearchGuideParamWithRequestId:(unsigned long long)arg1 reqType:(long long)arg2;
- (void)sendParallelSearchGuideRequestIfNeed;
- (void)sendParallelSearchGuideRequestByReqTypeIfNeed;
- (void)tryParallelAsyncWebSearch:(unsigned long long)arg1 scene:(unsigned int)arg2 query:(id)arg3 isFromNewVoice:(BOOL)arg4;
- (void)tryParallelAsyncWebSearch:(unsigned long long)arg1 scene:(unsigned int)arg2 query:(id)arg3;
- (void)initiativeSearch:(id)arg1;
- (void)initiativeSearch:(id)arg1 withExtraData:(id)arg2;
- (void)startCommonSearch:(id)arg1 withSugId:(id)arg2;
- (void)preSearchGuideData;
- (void)notifyUserToggleFullScreen;
- (void)notifyScreenShot:(unsigned long long)arg1;
- (void)onConfigNavBarWithParams:(id)arg1;
- (void)setLeftBarButtonType:(id)arg1;
- (void)restoreOriginalNavBar;
- (void)tryRestoreNavSearchBar;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (unsigned long long)localJSBizType;
- (void)doExitPage;
- (void)onH5TakeOverOfNavControlWith:(id)arg1;
- (void)onH5ResignNavControl;
- (void)configNavBarWith:(id)arg1;
- (void)onViewTypeChangedTo:(unsigned long long)arg1;
- (id)getCusteomPopBackInteractivePopGesture;
- (void)onGetTextInput:(id)arg1 isFromVoice:(unsigned int)arg2;
- (void)onConfirmVoiceSearch;
- (double)getKeyboardHeight;
- (void)onClickCameraSearch;
- (long long)currentSearchScene;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightCameraViewWillDisappear:(BOOL)arg1;
- (void)onSightStartPickImage;
- (void)onSightDidPickImage;
- (void)pageSheetWillClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetDidRotation:(id)arg1;
- (unsigned long long)interactiveTransitionType;
- (void)configureBackgroundColor:(id)arg1;
- (void)restoreDefaultBackgroundColor;
- (BOOL)shouldSyncExtendedContentBackground;
- (BOOL)shouldAdaptDuoSearchBarHorizontalMargins;
- (void)reloadWebview;
- (void)didFinishReloadWebview;
- (BOOL)enableShowExceptionTip;
- (void)recreateWebview;
- (void)sendOnShareButtonClick;
- (void)sendOnShareResult:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (id)getCurrentViewController;
- (void)onCreateScreenShotInfo:(id *)arg1;
- (void)onMenuItemClick:(id)arg1;
- (void)onSendSuccess;
- (unsigned long long)VCType;
- (void)setVCType:(unsigned long long)arg1;
- (BOOL)enablePopBackInteractiveGesture;
- (void)setEnablePopBackInteractiveGesture:(BOOL)arg1;
- (void)setPluginScheduler:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (id /* block */)clickBackButtonExitAction;
- (void)setClickBackButtonExitAction:(id /* block */)arg1;
- (id /* block */)viewWillDisappear;
- (void)setViewWillDisappear:(id /* block */)arg1;
- (id /* block */)viewDidBePushOrPresent;
- (void)setViewDidBePushOrPresent:(id /* block */)arg1;
- (id)m_minimizationTransitionController;
- (void)setM_minimizationTransitionController:(id)arg1;
- (id)m_gestureStarTaskData;
- (void)setM_gestureStarTaskData:(id)arg1;
- (BOOL)keepAliveForMinimize;
- (void)setKeepAliveForMinimize:(BOOL)arg1;
- (BOOL)isFromHotSearchClick;
- (void)setIsFromHotSearchClick:(BOOL)arg1;
- (void)setTextFieldInteractor:(id)arg1;
- (void)setPresenter:(id)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (BOOL)poppedInHalfPage;
- (void)setPoppedInHalfPage:(BOOL)arg1;
- (BOOL)isKeyBoardSearch;
- (void)setIsKeyBoardSearch:(BOOL)arg1;
- (void)setECatcher:(id)arg1;
- (id)forwardMessageLogicController;
- (void)setForwardMessageLogicController:(id)arg1;
- (void)setInputProvider:(id)arg1;
- (BOOL)isFriendShare;
- (void)setIsFriendShare:(BOOL)arg1;
- (id)lastReportedPlaceholderText;
- (void)setLastReportedPlaceholderText:(id)arg1;
- (id)keyboardDismissPanGesture;
- (void)setKeyboardDismissPanGesture:(id)arg1;
- (id)keyboardDismissTapGesture;
- (void)setKeyboardDismissTapGesture:(id)arg1;
- (id)keyboardDismissGestureDelegate;
- (void)setKeyboardDismissGestureDelegate:(id)arg1;
- (id)navSearchTextField;
- (void)setNavSearchTextField:(id)arg1;
- (id)searchBoxContainer;
- (void)setSearchBoxContainer:(id)arg1;
- (unsigned long long)viewType;
- (void)setViewType:(unsigned long long)arg1;
- (id)voiceInputButton;
- (void)setVoiceInputButton:(id)arg1;
- (id)floatingVoiceInputView;
- (void)setFloatingVoiceInputView:(id)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)dismissInteractiveTransition;
- (void)setDismissInteractiveTransition:(id)arg1;
- (id)dismissAnimateTransition;
- (void)setDismissAnimateTransition:(id)arg1;
- (id)popBackInteractivePopGesture;
- (void)setPopBackInteractivePopGesture:(id)arg1;
- (void).cxx_destruct;
@end
