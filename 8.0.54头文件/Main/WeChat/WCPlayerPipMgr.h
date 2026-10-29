@interface WCPlayerPipMgr : MMUserService <WCPictureInPictureDelegate, MMServiceProtocol, WCAudioModuleExt>
{
    BOOL _enablePictureInPictureSeekButton; // +0x8
    WCPlayerPipSessionInfo * _sessionInfo; // +0x10
    WCAudioModule * _activeAudioModule; // +0x18
    WCPictureInPictureController * _pipController; // +0x20
    WCPipContentSourcePlayer * _pipSourcePlayer; // +0x28
    WCPipContentSourcePlayer * _oldPipSourcePlayer; // +0x30
    NSMutableArray * _arrSessionInfo; // +0x38
}
- (void)onServiceInit;
- (void)invalidatePlaybackState;
- (BOOL)isAudioModuleInterruptPipResource;
- (BOOL)isPictureInPictureActive;
- (BOOL)isRegisteredPipResource:(id)arg1;
- (BOOL)isPipingWithSourcePlayer:(id)arg1;
- (void)showPictureInPictureSeekButton:(BOOL)arg1;
- (id)getPipSessionInfo;
- (BOOL)canRegisterNewPipSourcePlayer;
- (BOOL)tryRegisterPipSourcePlayer:(id)arg1;
- (void)createPipControllerWithSourcePlayer:(id)arg1;
- (void)unregisterPipSourcePlayer:(id)arg1;
- (void)stopPipAndCleanResource:(id)arg1;
- (void)cleanResourceWhenPipNotSuccStart:(id)arg1;
- (void)tryDelayStopAutoPipWhenEnterForeground:(id)arg1;
- (BOOL)isCloseInterruptCleanPipResouce;
- (void)audioModuleDidActive:(id)arg1;
- (void)audioModuleDidDeactive:(id)arg1;
- (void)destoryPipSourcePlayer;
- (void)destoryPipController;
- (void)setPipController:(id)arg1;
- (long long)pictureInPictureState;
- (BOOL)pictureInPictureActive;
- (id)pipView;
- (void)movePlayerViewToPipView:(id)arg1 reason:(long long)arg2;
- (void)recoverPlayerViewToOriginSuperview:(id)arg1 reason:(long long)arg2;
- (void)pictureInPictureStateDidChange:(long long)arg1;
- (void)printPictureInPictureStatus;
- (void)onPictureInPicturePossibleChanged:(BOOL)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)activeAudioModule;
- (void)setActiveAudioModule:(id)arg1;
- (id)pipController;
- (id)pipSourcePlayer;
- (void)setPipSourcePlayer:(id)arg1;
- (id)oldPipSourcePlayer;
- (void)setOldPipSourcePlayer:(id)arg1;
- (BOOL)enablePictureInPictureSeekButton;
- (void)setEnablePictureInPictureSeekButton:(BOOL)arg1;
- (id)arrSessionInfo;
- (void)setArrSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end

