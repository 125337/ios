@interface WMPFManager : NSObject <WMPFVideoAPIProtocol, WMPFAudioAPIProtocol, WMPFLivePlayerAPIProtocol, WMPFLivePusherAPIProtocol, WMPFAppTaskAPIProtocol>
+ (id)sharedManager;
- (void)innerAppAudioInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)audioSessionInterruptionEnd;
- (void)pauseLivePlay;
- (void)resumeLivePlay;
- (void)pauseLivePush;
- (void)resumeLivePush;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)muteVideo:(BOOL)arg1;
- (void)onWeAppServiceClosed;
@end

