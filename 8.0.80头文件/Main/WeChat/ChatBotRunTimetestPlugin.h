@interface ChatBotRunTimetestPlugin : NSObject <MMFlutterPlugin>
{
    NSString * _currentVoIPSessionID; // +0x8
    FlutterMethodChannel * _channel; // +0x10
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handleFetchPendingEvaluationMode:(id /* block */)arg1;
- (void)handleUpdateVoIPSessionID:(id)arg1 result:(id /* block */)arg2;
- (id)currentVoIPSessionID;
- (void)setCurrentVoIPSessionID:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end
