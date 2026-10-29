@interface WSHalfScreenWebSearchBaseViewController : MMUIViewController <UITextFieldDelegate, _TtP6WeChat33WSWebViewExceptionHandlerDelegate_, MMPageSheetGestureRecognizerDelegate, WSPlugin_NavBarShadowCustomize, MMPageSheetAdapterDelegate, _TtP6WeChat23SearchTagResultReceiver_, WSWebViewPluginableProtocol>
{
    BOOL _isDetailPage; // +0x68
    BOOL _hasFirstWebviewJsbridgeReady; // +0x69
    BOOL _hasViewAppear; // +0x6a
    BOOL _bSearchBarHidden; // +0x6b
    WSWebViewPluginScheduler * _pluginScheduler; // +0x70
    MMPageSheetAdapter * _adapter; // +0x78
    WSLocalTemplateController * _templateController; // +0x80
    NSString * _inputQuery; // +0x88
    UIView<YYWebViewInterface> * _firstWebPageView; // +0x90
    MMTagTextField * _headerSearchTextField; // +0x98
    NSString * _sessionId; // +0xa0
    NSString * _nsLastFormatQueryFromMultiStageForFixingWKSearchBug; // +0xa8
    UIView * _searchHeaderBgView; // +0xb0
    UIView * _headerSearchTextFieldBgView; // +0xb8
    UIImageView * _headerSearchLeftIconView; // +0xc0
    MMUIButton * _headerSearchTextFieldClearButton; // +0xc8
    _TtC6WeChat21WSTextFieldInteractor * _textFieldInteractor; // +0xd0
    WCWebSearchPresenter * _presenter; // +0xd8
}
- (id)initWithQuery:(id)arg1;
- (id)textfiledBackgroundColor;
- (id)baseBackgroundColor;
- (id)leftIconBgImageColor;
- (void)initPlugins;
- (void)initSubviews;
- (void)initSearchHeaderBgView;
- (id)navCloseButton;
- (void)initSearchTextField;
- (void)initWebSearchViewController;
- (id)textFieldInteractor;
- (id)presenter;
- (id)adapter;
- (id)dragToCloseInstallScrollView;
- (BOOL)useCustomNavibar;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2;
- (id)makeAdapter;
- (void)reLayoutSearchTextField;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (double)getShadowViewHeight;
- (CGSize)closeButtonSize;
- (void)doClose;
- (void)doBack;
- (id)getSearchSessionId;
- (void)onClickClose:(id)arg1;
- (void)makeTextFieldAutoBecomFirstResponder;
- (void)setBSearchBarHidden:(BOOL)arg1;
- (void)updateUIStatus;
- (id)leftIconButtonWithButtonType:(unsigned long long)arg1;
- (double)webSearchViewPosY;
- (id)getInputMarginTop;
- (id)getInputMarginLeftRight;
- (id)getInputHeight;
- (id)getNativeHeight;
- (void)onJsbridgeReady:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (void)onConfigNavBarWithParams:(id)arg1;
- (void)onSearchBackToPreviousView;
- (void)onAppendSearchTagQuery:(id)arg1;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)openDetailViewWithKeyword:(id)arg1 params:(id)arg2;
- (void)onControllerWillBeginDetailSearch:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)getPageState;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (void)reloadWebview;
- (void)didFinishReloadWebview;
- (void)exitPagewhenFault;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (unsigned long long)localJSBizType;
- (id)initedUrlParams;
- (unsigned long long)searchScene;
- (id)defaultNavTitle;
- (id)searchBarPlaceholder;
- (BOOL)shouldSendSearchInputChangedEventDuringMultiStageInput;
- (BOOL)shouldMakeTextFieldAutoBecomFirstResponder;
- (id)stayTimeReporter;
- (void)onSearchVCAppearAction;
- (void)onSearchVCDisappearAction;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (void)setAdapter:(id)arg1;
- (id)templateController;
- (void)setTemplateController:(id)arg1;
- (id)inputQuery;
- (void)setInputQuery:(id)arg1;
- (id)firstWebPageView;
- (void)setFirstWebPageView:(id)arg1;
- (id)headerSearchTextField;
- (void)setHeaderSearchTextField:(id)arg1;
- (BOOL)isDetailPage;
- (void)setIsDetailPage:(BOOL)arg1;
- (id)sessionId;
- (BOOL)hasFirstWebviewJsbridgeReady;
- (void)setHasFirstWebviewJsbridgeReady:(BOOL)arg1;
- (BOOL)hasViewAppear;
- (void)setHasViewAppear:(BOOL)arg1;
- (id)nsLastFormatQueryFromMultiStageForFixingWKSearchBug;
- (void)setNsLastFormatQueryFromMultiStageForFixingWKSearchBug:(id)arg1;
- (BOOL)bSearchBarHidden;
- (id)searchHeaderBgView;
- (void)setSearchHeaderBgView:(id)arg1;
- (id)headerSearchTextFieldBgView;
- (void)setHeaderSearchTextFieldBgView:(id)arg1;
- (id)headerSearchLeftIconView;
- (void)setHeaderSearchLeftIconView:(id)arg1;
- (id)headerSearchTextFieldClearButton;
- (void)setHeaderSearchTextFieldClearButton:(id)arg1;
- (void)setTextFieldInteractor:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void).cxx_destruct;
@end

