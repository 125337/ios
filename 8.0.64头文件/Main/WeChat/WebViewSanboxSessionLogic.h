@interface WebViewSanboxSessionLogic : MMObject <WebViewSanboxSessionTaskDelegate>
{
    id <WebViewSanboxSessionLogicDelegate> _delegate; // +0x8
    WKWebView<YYWebViewInterface> * _webView; // +0x10
    NSMutableDictionary * _dictSessionInfo; // +0x18
    WebvViewSanboxSessionInfo * _currentPageSessionInfo; // +0x20
}
+ (BOOL)canUseWebCom;
+ (BOOL)canUseWebComMessageReplyHandler;
+ (id)WebComMessageReplyHandlerName;
+ (BOOL)canUseWebComDebugEnv;
- (id)init;
- (void)changeWebContentSessionForUrl:(id)arg1;
- (void)releaseWebViewSessionForClearWebContent;
- (id)mainFrameSessionId;
- (id)currentSessionIFrameUrlPrefix;
- (id)debugWxConfigUrlForUrl:(id)arg1;
- (void)onRecieveWebComTagInfo:(id)arg1 forAppId:(id)arg2 forUrl:(id)arg3 forContext:(id)arg4;
- (void)handleWebComMessage:(id)arg1 mainFrame:(BOOL)arg2 frameUrl:(id)arg3;
- (void)iframe_handlePostMessage:(id)arg1;
- (void)dispatchEvent:(id)arg1 params:(id)arg2 toWebCompt:(id)arg3;
- (id)replyResultFromPostMessage:(id)arg1 errMsg:(id *)arg2;
- (id)promptResultFromFrameInfo:(id)arg1 promptMessage:(id)arg2;
- (void)funcCallCreateCtxTask:(id)arg1;
- (void)patchTaskTagList:(id)arg1;
- (void)doCallBackMainFrameForWebComptTaskClear;
- (void)sendMessageToWebCompt:(id)arg1 messageString:(id)arg2;
- (void)mainThread_onSendMessageToSanbox:(id)arg1 task:(id)arg2;
- (id)mainThread_jsapiDef:(id)arg1;
- (void)mainThread_onInvokeJsApiFromContext:(id)arg1 params:(id)arg2 callBackId:(id)arg3 task:(id)arg4;
- (void)mainThread_fetchCurrentSesessionEvalMainFrameBeginTimeStamp:(unsigned long long *)arg1 endTimeStamp:(unsigned long long *)arg2;
- (void)callbackTaskJsApiInvoke:(id)arg1 resultMsg:(id)arg2 callBackId:(id)arg3 task:(id)arg4;
- (void)task_callbackTaskJsApiInvoke:(id)arg1 result:(id)arg2 callBackId:(id)arg3 task:(id)arg4;
- (void)doReportWxConfigResult:(id)arg1 forContext:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)dictSessionInfo;
- (void)setDictSessionInfo:(id)arg1;
- (id)currentPageSessionInfo;
- (void)setCurrentPageSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
