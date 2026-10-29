@interface TPPlayerAdapterProxyDelegate : NSObject <ITPPlayerBaseDelegate>
{
    id <ITPPlayerBaseDelegate> _outerDelegate; // +0x8
    TPPlayerEventPublisher * _publisher; // +0x10
    TPPlayerAdapter * _playerAdapter; // +0x18
}
- (void)onPrepared:(id)arg1;
- (void)onCompletion:(id)arg1;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onSeekComplete:(id)arg1;
- (void)onVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onPlayer:(id)arg1 subtitleData:(id)arg2;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 audioFrameOut:(id)arg2;
- (id)onPlayer:(id)arg1 videoProcessFrameOut:(id)arg2;
- (id)onPlayer:(id)arg1 audioProcessFrameOut:(id)arg2;
- (void)onRetryStart:(id)arg1;
- (void)onRetryEnd:(id)arg1;
- (id)onPlayer:(id)arg1 assembleAVAssetWithUrl:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onPlayer:(id)arg1 airplayDidActive:(BOOL)arg2;
- (void)onPlayer:(id)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 stateChangedWhenPictureInPictureActive:(unsigned long long)arg2;
- (void)onPlayer:(id)arg1 detailInfo:(id)arg2;
- (void)onPlayer:(id)arg1 drmInfo:(id)arg2;
- (id)onSdpExchange:(id)arg1 localSdp:(id)arg2 ids:(int)arg3;
- (id)outerDelegate;
- (void)setOuterDelegate:(id)arg1;
- (id)publisher;
- (void)setPublisher:(id)arg1;
- (id)playerAdapter;
- (void)setPlayerAdapter:(id)arg1;
- (void).cxx_destruct;
@end
