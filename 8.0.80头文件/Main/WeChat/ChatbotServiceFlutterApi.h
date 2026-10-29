@interface ChatbotServiceFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)updateUdrPathPath:(id)arg1 completion:(id /* block */)arg2;
- (void)updateUdrResPathResPath:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyPanelEnterSourceSource:(long long)arg1 completion:(id /* block */)arg2;
- (void)notifyPanelExitSourceSource:(long long)arg1 completion:(id /* block */)arg2;
- (void)notifyEnterSceneScene:(long long)arg1 completion:(id /* block */)arg2;
- (void)notifyXiaoweiEntryClickTsClkTsMs:(long long)arg1 completion:(id /* block */)arg2;
- (void)notifyPanelExposeRectX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 completion:(id /* block */)arg5;
- (void)notifyBannerLocateToSvrIdSvrId:(long long)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
