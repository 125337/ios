@interface MegaVideoPlayerCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onErrorPlayerId:(long long)arg1 mediaId:(id)arg2 errorMsg:(id)arg3 what:(long long)arg4 extra:(long long)arg5 completion:(id /* block */)arg6;
- (void)onPreparedPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(id /* block */)arg3;
- (void)onPlayStartPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(id /* block */)arg3;
- (void)onPlayPausePlayerId:(long long)arg1 mediaId:(id)arg2 completion:(id /* block */)arg3;
- (void)onPlayEndPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(id /* block */)arg3;
- (void)onBufferStartPlayerId:(long long)arg1 mediaId:(id)arg2 isSeeking:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)onBufferEndPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(id /* block */)arg3;
- (void)onVideoFirstFrameDrawPlayerId:(long long)arg1 mediaId:(id)arg2 completion:(id /* block */)arg3;
- (void)onGetVideoSizePlayerId:(long long)arg1 mediaId:(id)arg2 width:(long long)arg3 height:(long long)arg4 completion:(id /* block */)arg5;
- (void)onGetVideoPlayFpsPlayerId:(long long)arg1 mediaId:(id)arg2 videoFps:(long long)arg3 decodeFps:(long long)arg4 renderFps:(long long)arg5 completion:(id /* block */)arg6;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end

