@interface WCAdFormWebViewJSLogic : LocalJSLogicBase <WCAdFormWebViewJSFunctionHandlerDelegate>
{
    id <WCAdFormWebViewJSLogicDelegate> _delegate; // +0x10
    WCAdDynamicCanvasPageInfo * _pageInfo; // +0x18
    NSString * _componentId; // +0x20
    NSString * _qrExtInfo; // +0x28
    NSMutableDictionary * _jsFunctionHandlerDic; // +0x30
}
- (id)initWithWebView:(id)arg1 pageInfo:(id)arg2 componentId:(id)arg3 qrExtInfo:(id)arg4;
- (unsigned long long)getLocalJSBusinessType;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)sendCallback:(id)arg1 ret:(int)arg2 error:(id)arg3 data:(id)arg4;
- (BOOL)dispatchJSEvent:(id)arg1 param:(id)arg2 callbackID:(id)arg3;
- (BOOL)onOpenUrlInWebview:(id)arg1 callbackID:(id)arg2;
- (void)handlerSendCallback:(id)arg1 ret:(int)arg2 error:(id)arg3 data:(id)arg4;
- (void)handlerPublishEvent:(id)arg1 params:(id)arg2;
- (void)onPerformActionResult:(id)arg1 resultData:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (id)componentId;
- (void)setComponentId:(id)arg1;
- (id)qrExtInfo;
- (void)setQrExtInfo:(id)arg1;
- (id)jsFunctionHandlerDic;
- (void)setJsFunctionHandlerDic:(id)arg1;
- (void).cxx_destruct;
@end
