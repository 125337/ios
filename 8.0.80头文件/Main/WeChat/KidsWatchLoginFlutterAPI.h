@interface KidsWatchLoginFlutterAPI : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)confirmLoginWithCompletion:(id /* block */)arg1;
- (void)cancelLoginWithCompletion:(id /* block */)arg1;
- (void)onAvatarSelectedResult:(id)arg1 completion:(id /* block */)arg2;
- (void)onPrivacyAgreementResultResult:(id)arg1 completion:(id /* block */)arg2;
- (void)onSpamVerifyResultResult:(id)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
