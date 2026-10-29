@interface WCPictureInPictureController : NSObject <AVPictureInPictureControllerDelegate>
{
    BOOL _enablePictureInPictureSeekButton; // +0x8
    int _taskId; // +0xc
    AVPictureInPictureController * _pictureInPictureController; // +0x10
    id <WCPictureInPictureDelegate> _delegate; // +0x18
    long long _state; // +0x20
    AVPlayerLayer * _playerLayer; // +0x28
    long long _initTimeMs; // +0x30
}
+ (BOOL)isPictureInPictureSupported;
- (id)initWithPipContentSource:(id)arg1;
- (id)initWithPlayerLayer:(id)arg1;
- (void)initResource;
- (void)dealloc;
- (void)changePipContentSource:(id)arg1;
- (void)observePipState;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPictureInPictureActive;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)resetPipController;
- (id)makePipStateName:(long long)arg1;
- (void)setEnablePictureInPictureSeekButton:(BOOL)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (id)pictureInPictureController;
- (void)setPictureInPictureController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (BOOL)enablePictureInPictureSeekButton;
- (int)taskId;
- (void)setTaskId:(int)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (long long)initTimeMs;
- (void)setInitTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end
