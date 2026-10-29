@interface WCWebSearchViewControllerNewH5 : WCSearchViewController <UITextFieldDelegate, ForwardMessageLogicDelegate, WSTagSearchDelegate, _TtP6WeChat24WSPlugin_NavControllable_, _TtP6WeChat22WSViewsManagerDelegate_, WSInputProviderDelegate, WSInteractivePage, MMPageSheetAdapterDelegate, LocalJSConfigurableContainerView, _TtP6WeChat33WSWebViewExceptionHandlerDelegate_, UIViewControllerTransitioningDelegate, WCStoryDismissInteractiveTransitionDelegate, _TtP4Hero26HeroViewControllerDelegate_, MMWebViewDelegate, WSWebViewPluginableProtocol, WCWebSearchPageInterface>
{
    WSTagSearchLogic * _tagSearchLogic; // +0x68
    NSMutableDictionary * _jumpWebParams; // +0x70
    BOOL _enablePopBackInteractiveGesture; // +0x78
    BOOL _isDismissing; // +0x79
    BOOL _poppedInHalfPage; // +0x7a
    unsigned long long _VCType; // +0x80
    WSWebViewPluginScheduler * _pluginScheduler; // +0x88
    WebSearchContext * _context; // +0x90
    WCSearchUIConfig * _uiConfig; // +0x98
    id /* block */ _clickBackButtonExitAction; // +0xa0
    _TtC6WeChat21WSTextFieldInteractor * _textFieldInteractor; // +0xa8
    WCWebSearchPresenter * _presenter; // +0xb0
    _TtC6WeChat25WSWebviewExceptionCatcher * _eCatcher; // +0xb8
    ForwardMessageLogicController * _forwardMessageLogicController; // +0xc0
    MMTagTextField * _navSearchTextField; // +0xc8
    UIView * _searchBoxContainer; // +0xd0
    unsigned long long _viewType; // +0xd8
    UIButton * _voiceInputButton; // +0xe0
    WCSearchPageState * _store; // +0xe8
    WCWebSearchInputProvider * _inputProvider; // +0xf0
    WSLocalTemplateController * _webviewController; // +0xf8
    WCStoryDismissInteractiveTransition * _dismissInteractiveTransition; // +0x100
    WAAppDismissAnimateTransition * _dismissAnimateTransition; // +0x108
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x110
}
+ (BOOL)ftsNavBackToHomePage;
- (void)initVoiceInputButton;
- (void)startVoiceInputProcess;
- (void)observeKeyboardAppear;
- (void)cancelObserveKeyboardAppear;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (BOOL)isUseInteractiveVoiceInput;
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
- (id)initWithScene:(unsigned long long)arg1;
- (id)initWithScene:(unsigned long long)arg1 query:(id)arg2;
- (id)initWithParams:(id)arg1;
- (id)initWithParams:(id)arg1 uiConfig:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)willDisappear;
- (void)viewDidBeInteractivePoped;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)showNavigationBarSepLine;
- (void)injected;
- (double)searchBarHeight;
- (BOOL)prefersStatusBarHidden;
- (void)initData;
- (void)initPlugins;
- (id)pluginScheduler;
- (void)initView;
- (void)initNavigationBar;
- (void)initRightBarButton;
- (id)customSearchBar;
- (void)initCustomSearchBar;
- (void)setUpStrongButtonStyleV2:(id)arg1;
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
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (id)getPageState;
- (id)getSearchParams;
- (id)getWebSearchBar;
- (void)genParallelRequestIdIfNeed;
- (void)sendParallelRequestIfNeed;
- (void)sendParallelSearchGuideRequestIfNeed;
- (void)tryParallelAsyncWebSearch:(unsigned long long)arg1 scene:(unsigned int)arg2 query:(id)arg3;
- (void)initiativeSearch:(id)arg1;
- (void)initiativeSearch:(id)arg1 withExtraData:(id)arg2;
- (void)startCommonSearch:(id)arg1 withSugId:(id)arg2;
- (void)preSearchGuideData;
- (void)notifyUserToggleFullScreen;
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
- (void)onGetTextInput:(id)arg1 isFromVoice:(BOOL)arg2;
- (void)pageSheetWillClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetDidRotation:(id)arg1;
- (unsigned long long)interactiveTransitionType;
- (void)configureBackgroundColor:(id)arg1;
- (void)restoreDefaultBackgroundColor;
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
- (void)setTextFieldInteractor:(id)arg1;
- (void)setPresenter:(id)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (BOOL)poppedInHalfPage;
- (void)setPoppedInHalfPage:(BOOL)arg1;
- (void)setECatcher:(id)arg1;
- (id)forwardMessageLogicController;
- (void)setForwardMessageLogicController:(id)arg1;
- (id)navSearchTextField;
- (void)setNavSearchTextField:(id)arg1;
- (id)searchBoxContainer;
- (void)setSearchBoxContainer:(id)arg1;
- (unsigned long long)viewType;
- (void)setViewType:(unsigned long long)arg1;
- (id)voiceInputButton;
- (void)setVoiceInputButton:(id)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (void)setInputProvider:(id)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (id)dismissInteractiveTransition;
- (void)setDismissInteractiveTransition:(id)arg1;
- (id)dismissAnimateTransition;
- (void)setDismissAnimateTransition:(id)arg1;
- (id)popBackInteractivePopGesture;
- (void)setPopBackInteractivePopGesture:(id)arg1;
- (void).cxx_destruct;
@end

