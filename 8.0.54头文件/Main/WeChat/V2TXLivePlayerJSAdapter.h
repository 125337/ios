@interface V2TXLivePlayerJSAdapter : NSObject <V2TXLivePlayerObserverWx>
{
    V2TXLivePlayerWx * _player; // +0x8
    V2TXLivePlayerJSConfig * _appliedConfig; // +0x10
    BOOL _needCompress; // +0x18
    id /* block */ _snapshotCompletion; // +0x20
    id <V2TXLivePlayerJSAdapterDelegate> _delegate; // +0x28
    NSString * _playerId; // +0x30
}
- (id)initWithPreviewView:(id)arg1 delegate:(id)arg2;
- (void)updateLivePlayerWithConfigs:(id)arg1;
- (void)updateLivePlayerWithConfigs:(id)arg1 force:(BOOL)arg2;
- (BOOL)operateLivePlayerWithType:(id)arg1 params:(id)arg2;
- (id)config;
- (BOOL)isPlaying;
- (void)setPreview:(id)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)takePhoto:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onlineLog:(id)arg1;
- (void)onlineLog:(id)arg1 online:(BOOL)arg2;
- (void)restartAudioDevice;
- (id)parseConfigs:(id)arg1;
- (void)applyConfig:(id)arg1 force:(BOOL)arg2;
- (long long)startPlay;
- (long long)stopPlay;
- (void)pausePlay;
- (void)resumePlay;
- (void)muteAudio:(BOOL)arg1;
- (void)muteVideo:(BOOL)arg1;
- (id)getPlayerIdWithUrl:(id)arg1;
- (void)onSnapshotComplete:(id)arg1 image:(id)arg2;
- (void)onPlayoutVolumeUpdate:(id)arg1 volume:(long long)arg2;
- (void)onPlayEvent:(long long)arg1 param:(id)arg2;
- (void)onPlayNetStatus:(id)arg1;
- (void)sendEventNotify:(long long)arg1 param:(id)arg2;
- (void)sendEventNotify:(long long)arg1 msg:(id)arg2;
- (void)apiOnlineLog:(id)arg1 online:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerId;
- (void)setPlayerId:(id)arg1;
- (void).cxx_destruct;
@end

