@interface ScanGoodsJSHandler : WSTemplateBaseJSHandler <IScanGoodsServiceExt, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    unsigned int _enterSessionID; // +0x8
    unsigned int _tabSessionID; // +0xc
    unsigned int _scanSessionID; // +0x10
    ForwardMessageLogicController * _forwardMsgLogic; // +0x18
    NSMutableDictionary * _forwardUrl2MessageWrapMap; // +0x20
    NSMutableDictionary * _forwardUrl2UploadTaskMap; // +0x28
}
- (id)init;
- (id)jsEventsNeedRegister;
- (BOOL)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (unsigned long long)getLocalJSBusinessType;
- (void)handleJSAPIUpdateShareData:(id)arg1;
- (void)handleJSAPIShowShareMenu:(id)arg1;
- (void)onSelectShareChat:(id)arg1;
- (void)onMpTemplateResponseSuccess:(unsigned int)arg1 content:(id)arg2;
- (void)onMpTemplateResponseFail:(unsigned int)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (unsigned int)enterSessionID;
- (void)setEnterSessionID:(unsigned int)arg1;
- (unsigned int)tabSessionID;
- (void)setTabSessionID:(unsigned int)arg1;
- (unsigned int)scanSessionID;
- (void)setScanSessionID:(unsigned int)arg1;
- (id)forwardMsgLogic;
- (void)setForwardMsgLogic:(id)arg1;
- (id)forwardUrl2MessageWrapMap;
- (void)setForwardUrl2MessageWrapMap:(id)arg1;
- (id)forwardUrl2UploadTaskMap;
- (void)setForwardUrl2UploadTaskMap:(id)arg1;
- (void).cxx_destruct;
@end

