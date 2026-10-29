@interface WCPipContentSourcePlaybackDelegateObj : NSObject <AVPictureInPictureSampleBufferPlaybackDelegate>
{
    NSObject<AVPictureInPictureSampleBufferPlaybackDelegate> * _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)pictureInPictureController:(id)arg1 didTransitionToRenderSize:(struct)arg2;
- (void)pictureInPictureController:(id)arg1 setPlaying:(BOOL)arg2;
- (void)pictureInPictureController:(id)arg1 skipByInterval:(struct)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (struct)pictureInPictureControllerTimeRangeForPlayback:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

