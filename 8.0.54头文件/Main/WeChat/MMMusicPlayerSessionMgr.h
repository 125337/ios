@interface MMMusicPlayerSessionMgr : MMRootService <MMServiceProtocol, IRemoteControlCheckExt>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)beginNewMusicPlayerAudioSession:(id)arg1;
- (void)endNewMusicPlayerAudioSession:(id)arg1;
- (void)notifyNewPlayStateChange:(id)arg1;
- (void)iRemoteControlCheckShouldPlay;
- (void)iRemoteControlCheckShouldPause;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)iRemoteControlCheckShouldStop;
- (void)iRemoteControlCheckPluginOff;
- (void)iRemoteControlCheckShouldNextTrack;
- (void)iRemoteControlCheckShouldPrevTrack;
@end

