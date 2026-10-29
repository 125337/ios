@interface NotifyMsgCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onNewMsgMsg:(id)arg1 serviceType:(long long)arg2 completion:(id /* block */)arg3;
- (void)onMsgUpdatedMsg:(id)arg1 serviceType:(long long)arg2 completion:(id /* block */)arg3;
- (void)onContactAddedUsername:(id)arg1 serviceType:(long long)arg2 completion:(id /* block */)arg3;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
