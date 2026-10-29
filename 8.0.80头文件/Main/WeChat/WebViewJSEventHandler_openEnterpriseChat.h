@interface WebViewJSEventHandler_openEnterpriseChat : WebviewJSEventHandlerBase <IEnterpriseGroupMgrExt>
{
    NSString * _enterpriseChatScene; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onInitiateBizChat:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void).cxx_destruct;
@end
