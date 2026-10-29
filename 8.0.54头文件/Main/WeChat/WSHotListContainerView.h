@interface WSHotListContainerView : UIView <ISearchConfigDataExt, _TtP6WeChat33WSWebViewExceptionHandlerDelegate_, WSWebViewPluginableProtocol, WSHotListTeachView>
{
    BOOL _isVisable; // +0x8
    BOOL _enableSendViewAppearJSEvent; // +0x9
    MMUIViewController * _viewController; // +0x10
    id <SearchGuideViewDelegate> _delegate; // +0x18
    WSWebViewPluginScheduler * _pluginScheduler; // +0x20
    WSLocalTemplateController * _webviewController; // +0x28
    NSMutableArray * _arrEntryDatas; // +0x30
    NSMutableArray * _arrButtons; // +0x38
    MMUILabel * _titleLabel; // +0x40
    UIView * _lineView; // +0x48
    SearchCgiGuideConfig * _vertInfo; // +0x50
    long long _searchSessionID; // +0x58
}
+ (id)getPreloadInstance;
+ (void)removeCache;
- (void)tryRecycleSelf;
- (id)initWithFrame:(CGRect)arg1;
- (void)initWebview;
- (void)observeViewVisableStatus;
- (void)showContentViewAnimated:(BOOL)arg1;
- (void)hideContentViewAnimated;
- (void)onTapButton:(id)arg1;
- (void)layoutSubviews;
- (void)showDynamicViewAnimated:(BOOL)arg1;
- (void)onPopOrDismissed;
- (void)onViewAppear;
- (id)webview;
- (void)initPluginScheduler;
- (void)sendOnUiInit;
- (void)setIsVisable:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (void)reloadView;
- (void)onSearchConfigDataFailToUpdate;
- (void)onSearchConfigDataUpdated;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (unsigned long long)localJSBizType;
- (void)reloadWebview;
- (id)viewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (BOOL)isVisable;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (id)arrEntryDatas;
- (void)setArrEntryDatas:(id)arg1;
- (id)arrButtons;
- (void)setArrButtons:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)vertInfo;
- (void)setVertInfo:(id)arg1;
- (long long)searchSessionID;
- (void)setSearchSessionID:(long long)arg1;
- (BOOL)enableSendViewAppearJSEvent;
- (void)setEnableSendViewAppearJSEvent:(BOOL)arg1;
- (void).cxx_destruct;
@end

