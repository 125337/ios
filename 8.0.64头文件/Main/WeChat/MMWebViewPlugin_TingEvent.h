@interface MMWebViewPlugin_TingEvent : MMWebViewPluginBase <TingFlowPlayerNotification, TingEventPluginProtocol>
{
    BOOL _isNotifyTingStateChange; // +0x8
    BOOL _lastVituralPlayerForegroundState; // +0x9
    NSString * _albumId; // +0x10
    NSString * _audioId; // +0x18
}
- (void)dealloc;
- (void)startObserveTingStateChange;
- (void)stopObserveTingStateChange;
- (void)onSetPlayerForegroundState:(BOOL)arg1;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)flowPlayer:(id)arg1 onPlayListRefresh:(id)arg2;
- (void)sendBackgroundStateChangeEvent:(id)arg1;
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
