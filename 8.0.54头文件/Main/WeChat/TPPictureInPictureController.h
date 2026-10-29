@interface TPPictureInPictureController : NSObject <AVPictureInPictureControllerDelegate>
{
    AVPictureInPictureController * _pictureInPictureController; // +0x8
    long long _state; // +0x10
    AVPlayerLayer * _playerLayer; // +0x18
    BOOL _preloadAVPIPController; // +0x20
    id <TPPictureInPictureDelegate> _delegate; // +0x28
    long long _pictureInPictureStartDelayMs; // +0x30
}
+ (BOOL)isPictureInPictureSupported;
- (id)initWithPlayerLayer:(id)arg1 preloadAVPIPController:(BOOL)arg2;
- (void)dealloc;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPictureInPictureActive;
- (BOOL)isPictureInPictureSuspended;
- (void)startPictureInPicture;
- (void)stopPictureInPictureNotifyStopAsync:(BOOL)arg1;
- (void)resetPipController;
- (id)makePipStateName:(long long)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)pictureInPictureStartDelayMs;
- (void)setPictureInPictureStartDelayMs:(long long)arg1;
- (BOOL)preloadAVPIPController;
- (void)setPreloadAVPIPController:(BOOL)arg1;
- (void).cxx_destruct;
@end

