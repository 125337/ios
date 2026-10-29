@interface PAGViewListenerApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)onAnimationUpdateWithPagId:(id)arg1 Completion:(id /* block */)arg2;
- (void)onAnimationStartWithPagId:(id)arg1 Completion:(id /* block */)arg2;
- (void)onAnimationEndWithPagId:(id)arg1 Completion:(id /* block */)arg2;
- (void)onAnimationCancelWithPagId:(id)arg1 Completion:(id /* block */)arg2;
- (void)onAnimationRepeatWithPagId:(id)arg1 Completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end

