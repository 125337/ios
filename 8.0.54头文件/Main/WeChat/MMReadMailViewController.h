@interface MMReadMailViewController : MMWebViewController <YYWebViewDelegate, VerifyQQPwdMgrExt, UITableViewDelegate, UITableViewDataSource, IMsgExt, IQQMailExt, WCActionSheetDelegate, MailAttachDelegate, UIScrollViewDelegate>
{
    MMTableView * _tableView; // +0x160
    WebViewJSLogicImpl * _jsLogicImpl; // +0x168
    UIView * _fromListView; // +0x170
    UIView * _toListView; // +0x178
    UIView * _ccListView; // +0x180
    UIView * _titleView; // +0x188
    UIView * _tipView; // +0x190
    UIView * _loadingView; // +0x198
    UIView * _loadFailView; // +0x1a0
    UILabel * _webContentView; // +0x1a8
    UIView * _attachView; // +0x1b0
    UIView * m_actionBanner; // +0x1b8
    UIButton * m_mailAppBtn; // +0x1c0
    UIButton * _hideDetailBtn; // +0x1c8
    UIButton * _showDetailBtn; // +0x1d0
    UIButton * _readOriginalBtn; // +0x1d8
    BOOL bShowDetail; // +0x1e0
    int eLoadingEnd; // +0x1e4
    NSMutableArray * arrCells; // +0x1e8
    PushMailWrap * _pushMailWrap; // +0x1f0
    CMessageWrap * _messageWrap; // +0x1f8
    CMail * _mail; // +0x200
    MMLoadingView * m_loadingView; // +0x208
    CAttach * m_loadingAttach; // +0x210
    NSString * activePageTag; // +0x218
    YYWKWebView * _webView; // +0x220
    BOOL isLoadingFinished; // +0x228
    NSString * nsFinalHtml; // +0x230
    id <MMReadMailViewDelegate> _m_mailDelegate; // +0x238
}
- (id)init;
- (void)dealloc;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (id)htmlAdjustWithPageWidth:(double)arg1 html:(id)arg2 webView:(id)arg3;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (id)getPreInjectScriptStr;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)onLongPressRightNavigationButton:(id)arg1;
- (void)onShowDetail:(id)arg1;
- (void)onHideDetail:(id)arg1;
- (void)onSenderClicked:(id)arg1;
- (void)onToListClicked:(id)arg1;
- (void)onCCListClicked:(id)arg1;
- (void)onLoadFailRefresh:(id)arg1;
- (void)onReadOrigin:(id)arg1;
- (CGPoint)findPossibleOriginForCGRect:(CGRect)arg1 withLeftWidth:(long long)arg2;
- (id)GetContactButton;
- (unsigned int)getMarginTop;
- (void)SetWebviewMargin:(unsigned int)arg1;
- (unsigned int)getWebviewMarginTopHeight;
- (void)updateWebViewMarginTopAnimated:(BOOL)arg1;
- (void)onVerifyQQPwdCancel;
- (void)onVerifyQQPwdOK;
- (void)beginLoadMail;
- (void)updateMailHTML;
- (void)endLoadMail;
- (void)FormFromList;
- (void)FormToList;
- (void)updateToList;
- (void)FormCCList;
- (void)updateCCList;
- (void)FormMailTitle;
- (void)updateMailTitle;
- (void)FromTipsView;
- (void)FormLoadingView;
- (void)FormLoadFailView;
- (void)FormWebView;
- (void)FormAttachView:(id)arg1;
- (void)FormCells;
- (void)updateCells;
- (void)deleteMail;
- (void)SetCookie;
- (BOOL)showsMailApp;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (void)initBanner;
- (void)onOperate:(id)arg1;
- (void)onOpenMailApp:(id)arg1;
- (void)onDownloadMailApp:(id)arg1;
- (void)OnGetMail:(id)arg1 mailId:(id)arg2 errMsg:(id)arg3;
- (void)OnSetMailUnreadWithMailId:(id)arg1 errMsg:(id)arg2;
- (void)PreviewAttach:(id)arg1 Pop:(BOOL)arg2;
- (void)OnMailAttachPreview:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)canAccessJSApi:(id)arg1;
- (unsigned char)getJSApiPermission:(id)arg1;
- (id)getAuthorizedMonitorEvents:(id)arg1;
- (id)getCurrentWebviewViewController;
- (BOOL)isTempAccessOfJSApiPermitted:(id)arg1;
- (void)processJSAPICall:(id)arg1 funcDef:(id)arg2 funcBlock:(id /* block */)arg3 failHandleBlock:(id /* block */)arg4 apiPermission:(unsigned char)arg5;
- (BOOL)isGetingA8Key;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (void)onFinishedHandleJSApi;
- (long long)getPermissionIndex:(id)arg1;
- (id)pushMailWrap;
- (void)setPushMailWrap:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)mail;
- (void)setMail:(id)arg1;
- (id)m_loadingAttach;
- (void)setM_loadingAttach:(id)arg1;
- (id)m_mailDelegate;
- (void)setM_mailDelegate:(id)arg1;
- (void).cxx_destruct;
@end

