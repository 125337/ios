@interface BizProfileCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onContactInfoChangeParams:(id)arg1 completion:(id /* block */)arg2;
- (void)updateStatusUsername:(id)arg1 exportId:(id)arg2 completion:(id /* block */)arg3;
- (void)updateTraceSourceBizUin:(long long)arg1 mid:(long long)arg2 idx:(long long)arg3 itemShowType:(long long)arg4 reqId:(id)arg5 sessionId:(id)arg6 completion:(id /* block */)arg7;
- (void)updateProfileTraceShownShown:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
