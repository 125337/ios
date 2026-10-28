@interface WCFinderSimplePhotoView : MMUIView <WCPlayableImageViewDelegate>
{
    id <WCFinderSimplePhotoViewDelegate> _delegate; // +0x8
    WCFinderFeedMediaWrap * _mediaWrap; // +0x10
    WCPlayableImageView * _playableImageView; // +0x18
    double _progressValue; // +0x20
    MMTimer * _staticPhotoTimer; // +0x28
}
- (void)updateWithMediaInfo:(id)arg1;
- (void)reCreatePlayableImageView;
- (void)startPlayPhoto;
- (void)pausePlayPhoto;
- (void)prepareForReuse;
- (void)_cancelImageLoad;
- (void)_clearPlayableImageView;
- (void)_startOrResumeTimer;
- (void)_startTimmer;
- (void)_resumeTimer;
- (void)_pauseTimer;
- (void)_stopTimer;
- (void)onTimerTrick;
- (void)_handleDownloadImageSuccess:(id)arg1;
- (void)_handleDownloadImageFailed:(id)arg1;
- (void)playableImageView:(id)arg1 updateVideoCurrentTime:(double)arg2 videoDuration:(double)arg3;
- (void)playableImageViewDidPlayToEnd:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)playableImageView;
- (void)setPlayableImageView:(id)arg1;
- (double)progressValue;
- (void)setProgressValue:(double)arg1;
- (id)staticPhotoTimer;
- (void)setStaticPhotoTimer:(id)arg1;
- (void).cxx_destruct;
@end
