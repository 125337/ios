@interface ChatbotAutoPhonePlugin : NSObject <WCAccountBindPhoneControlLogicDelegate, MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
    NSMutableDictionary * _requests; // +0x10
    ChatbotAutoPhoneBindPending * _bindPending; // +0x18
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handlePrepare:(id /* block */)arg1;
- (void)handleRequestTicket:(id)arg1 result:(id /* block */)arg2;
- (void)finishTicketRequestWithRequestId:(id)arg1 mobileTicket:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (void)handleBindPhone:(id)arg1 result:(id /* block */)arg2;
- (void)startBindPhoneFlowWithRequestId:(id)arg1 result:(id /* block */)arg2;
- (void)scheduleBindPendingUIVerify;
- (void)verifyBindPendingUI;
- (BOOL)bindPendingUIVisible:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)finishBindPending:(id)arg1;
- (void)handleRelease:(id)arg1 result:(id /* block */)arg2;
- (void)failAllPendingRequestsWithErrorCode:(id)arg1;
- (id)payloadWithRequestId:(id)arg1 mobile:(id)arg2;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)requests;
- (void)setRequests:(id)arg1;
- (id)bindPending;
- (void)setBindPending:(id)arg1;
- (void).cxx_destruct;
@end
