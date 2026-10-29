@interface MBWebViewPlugin_TingPlayer : WAWebViewPluginBase <TingPlayAppNotification, TingEventPluginProtocol>
{
    BOOL _isNotifyTingStateChange; // +0x8
    BOOL _lastVituralPlayerForegroundState; // +0x9
    id <MBAudioPluginEventDelegate> _delegate; // +0x10
    NSString * _albumId; // +0x18
    NSString * _audioId; // +0x20
}
- (void)dealloc;
- (void)startObserveTingStateChange;
- (void)stopObserveTingStateChange;
- (void)onSetPlayerForegroundState:(BOOL)arg1;
- (void)playApp:(id)arg1 onPlayTaskStatusChanged:(int)arg2 tingItem:(id)arg3 onEvent:(int)arg4 withContext:(id)arg5;
- (void)playApp:(id)arg1 onPlayListRefresh:(id)arg2;
- (void)sendBackgroundStateChangeEvent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)albumId;
- (void)setAlbumId:(id)arg1;
- (id)audioId;
- (void)setAudioId:(id)arg1;
- (BOOL)isNotifyTingStateChange;
- (void)setIsNotifyTingStateChange:(BOOL)arg1;
- (BOOL)lastVituralPlayerForegroundState;
- (void)setLastVituralPlayerForegroundState:(BOOL)arg1;
- (void).cxx_destruct;
@end
