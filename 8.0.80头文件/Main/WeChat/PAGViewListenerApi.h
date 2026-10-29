@interface PAGViewListenerApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onAnimationUpdatePagId:(long long)arg1 completion:(id /* block */)arg2;
- (void)onAnimationStartPagId:(long long)arg1 completion:(id /* block */)arg2;
- (void)onAnimationEndPagId:(long long)arg1 completion:(id /* block */)arg2;
- (void)onAnimationCancelPagId:(long long)arg1 completion:(id /* block */)arg2;
- (void)onAnimationRepeatPagId:(long long)arg1 completion:(id /* block */)arg2;
- (void)onPagSizeReadyPagId:(long long)arg1 width:(long long)arg2 height:(long long)arg3 completion:(id /* block */)arg4;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
