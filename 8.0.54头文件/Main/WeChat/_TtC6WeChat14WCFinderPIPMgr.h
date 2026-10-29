@interface _TtC6WeChat14WCFinderPIPMgr : MMUserService <WCPlayerPipMgrExt, MMServiceProtocol>
{
     sourceContentVM; // +0x8
     curContentVM; // +0x10
     curPlayerView; // +0x18
     is_pip_status; // +0x20
     currentVolume; // +0x28
}
- (void)addNotify;
- (void)removeNotify;
- (void)addPIPNotify;
- (void)removePIPNotify;
- (void)onEnterForeground;
- (void)reportEnterForeground;
- (void)didEnterBackGround;
- (void)willTerminated;
- (void)volumeChangedAfterIOS15WithNotification:(id)arg1;
- (void)volumeChangedBeforeIOS15WithNotification:(id)arg1;
- (void)reportCreate:(id)arg1 contentVM:(id)arg2;
- (void)reportClose:(id)arg1 contentVM:(id)arg2 reason:(long long)arg3;
- (void)reportSeekFromTime:(double)arg1 toTime:(double)arg2;
- (void)reportPause;
- (void)reportPlay;
- (void)reportPlayFinished;
- (void)reportReplay;
- (void)onPipSourcePlayerUnRegisterPipResource:(id)arg1;
- (void)onPlayerRestoreUserInterface;
- (void)onPlayerWillStopPictureInPicture;
- (void)onPlayerWillStartPictureInPicture;
- (void)onPlayerDidStartPictureInPicture;
- (void)onPlayerDidStopPictureInPicture:(id)arg1;
- (id)sourceContentVM;
- (void)setSourceContentVM:(id)arg1;
- (id)curContentVM;
- (void)setCurContentVM:(id)arg1;
- (id)curPlayerView;
- (void)setCurPlayerView:(id)arg1;
- (BOOL)is_pip_status;
- (void)setIs_pip_status:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end

