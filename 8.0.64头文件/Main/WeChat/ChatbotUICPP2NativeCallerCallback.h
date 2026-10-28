@interface ChatbotUICPP2NativeCallerCallback : NSObject
{
    ChatbotUICPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ChatbotUICPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onTalkSuccComplete:(unsigned long long)arg1;
- (void)onCallEndComplete:(unsigned long long)arg1;
- (void)onOnRecvRUDPComplete:(unsigned long long)arg1;
- (void)onOnTTSBeginComplete:(unsigned long long)arg1;
- (void)onOnTTSEndComplete:(unsigned long long)arg1;
- (void)onOnRecvMsgComplete:(unsigned long long)arg1;
- (void)onOnRecvStreamTextComplete:(unsigned long long)arg1;
- (void)onOnRecvQuestionInfoComplete:(unsigned long long)arg1;
- (void)onOnRecvWeAppNotifyClientMsgComplete:(unsigned long long)arg1;
- (void)onOnRecvWeAppCdpComplete:(unsigned long long)arg1;
- (void)onOnRecvWeAppProccessMsgComplete:(unsigned long long)arg1;
- (void)onOnRecvPOIRequestComplete:(unsigned long long)arg1;
- (void)onOnRecvCommonFunctionCallDataComplete:(unsigned long long)arg1;
- (void)onOnSocialHistoryUpdateComplete:(unsigned long long)arg1;
- (void)onOnRecvAiSpeakingInfoComplete:(unsigned long long)arg1;
@end
