@interface EcsFinderFeedFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)updateProductCardDataData:(id)arg1 completion:(id /* block */)arg2;
- (void)setNaviHeightNaviHeight:(double)arg1 completion:(id /* block */)arg2;
- (void)onRecycleWithCompletion:(id /* block */)arg1;
- (void)setFinderCardInfoFinderCardInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)onFocusWithCompletion:(id /* block */)arg1;
- (void)onBlurWithCompletion:(id /* block */)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
