@interface WAOpenSDKJSEventHandleLogic : NSObject <WAOpenSDKJSEventHandlerDelegate, PBMessageObserverDelegate, WAOpenSDKJSAPIContextAdapterDelegate, WAOpenSDKTransferAuthAdapterDelegate>
{
    long long _apiFrom; // +0x8
    WAContactGetter * _contactGetter; // +0x10
    NSMutableArray * _jsapiEvents; // +0x18
    NSMutableArray * _WAJSAPIEventsPool; // +0x20
    NSMutableArray * _WAJSAPIAuthPool; // +0x28
}
+ (Class)convertNameToWAJSAPIClass:(id)arg1;
+ (BOOL)_WAJSAPIMustRunInMainThread:(id)arg1;
+ (long long)convertToQRCodeStateWithResultType:(long long)arg1;
+ (BOOL)_WAJSEventParamsIsCancel:(id)arg1 handlerClassString:(id)arg2;
- (id)init;
- (void)handleOpenSDKJSEventWithAppId:(id)arg1 invokeData:(id)arg2 transferScene:(unsigned long long)arg3 invokeContext:(id)arg4;
- (void)handleAuthAndRunJSEventWithAppId:(id)arg1 invokeData:(id)arg2 invokeContext:(id)arg3;
- (BOOL)handleOpenSDKJSEventWithUserName:(id)arg1 orAppId:(id)arg2 invokeData:(id)arg3 invokeContext:(id)arg4;
- (Class)getJsapiClass:(id)arg1;
- (void)handleEvent:(id)arg1 argsDic:(id)arg2 eventContext:(id)arg3 jsapiType:(id)arg4 transitiveData:(id)arg5;
- (void)sendQRResult:(id)arg1 qrState:(long long)arg2 eventHandler:(id)arg3;
- (void)sendQRResult:(id)arg1 qrState:(long long)arg2 transitiveData:(id)arg3 context:(id)arg4;
- (void)endWithResult:(id)arg1 eventHandler:(id)arg2;
- (void)endWithResult:(id)arg1 eventHandler:(id)arg2 transitiveData:(id)arg3 context:(id)arg4;
- (void)sendRespToOpenApiMgr:(id)arg1;
- (void)updateRuntimeQrcode:(unsigned int)arg1 respData:(id)arg2 invokeContext:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onWAOpenSDKJSAPIContextAdapter:(id)arg1 endWithResult:(id)arg2 handler:(id)arg3;
- (void)handleOpenSDKWithTicketResult:(id)arg1 eventContext:(id)arg2;
- (void)onWAOpenSDKJSAPIContextAdapter:(id)arg1 sendResultBeforeEnd:(id)arg2 resultType:(long long)arg3 handler:(id)arg4;
- (void)onWAOpenSDKTransferAuthAdapterUserDidAccept:(id)arg1;
- (void)onWAOpenSDKTransferAuthAdapterUserDidReject:(id)arg1;
- (void)onWAOpenSDKTransferAuthAdapter:(id)arg1 authDidFailWithErrMsg:(id)arg2;
- (void)onWAOpenSDKTransferAuthAdapter:(id)arg1 confirmAuthRequestDidComplete:(BOOL)arg2;
- (id)containerVCForWAOpenSDKTransferAuthAdapter:(id)arg1;
- (BOOL)needDelayPopSourceVcInQRCodeModeWithHandler:(id)arg1;
- (long long)apiFrom;
- (void)setApiFrom:(long long)arg1;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (id)jsapiEvents;
- (void)setJsapiEvents:(id)arg1;
- (id)WAJSAPIEventsPool;
- (void)setWAJSAPIEventsPool:(id)arg1;
- (id)WAJSAPIAuthPool;
- (void)setWAJSAPIAuthPool:(id)arg1;
- (void).cxx_destruct;
@end

