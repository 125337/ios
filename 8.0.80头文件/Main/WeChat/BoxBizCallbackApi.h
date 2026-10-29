@interface BoxBizCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onDataChangeBizMsgInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)onNotifyChangeNotifyInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)onMoveToTopWithCompletion:(id /* block */)arg1;
- (void)deleteRecCardCardId:(id)arg1 completion:(id /* block */)arg2;
- (void)onFinderLiveStatusChangeLiveId:(id)arg1 completion:(id /* block */)arg2;
- (void)onBizPageScreenShotWithCompletion:(id /* block */)arg1;
- (void)onInsertMockCanvasModelIndex:(long long)arg1 model:(id)arg2 completion:(id /* block */)arg3;
- (void)onNativeBizCreationInfoChangedInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)markPersonalizedChangedOperation:(long long)arg1 completion:(id /* block */)arg2;
- (void)onBizFinderLiveInfoUpdateScene:(long long)arg1 info:(id)arg2 completion:(id /* block */)arg3;
- (void)onCgiGetFinderLiveInfoStartTaskId:(long long)arg1 completion:(id /* block */)arg2;
- (void)onCgiGetFinderLiveInfoEndTaskId:(long long)arg1 isSuccess:(BOOL)arg2 errorCode:(long long)arg3 completion:(id /* block */)arg4;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
