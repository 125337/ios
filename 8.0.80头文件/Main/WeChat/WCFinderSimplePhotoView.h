@interface WCFinderSimplePhotoView : MMUIView <WCPlayableImageViewDelegate>
{
    BOOL _coverImageLoading; // +0x8
    id <WCFinderSimplePhotoViewDelegate> _delegate; // +0x10
    WCFinderFeedMediaWrap * _mediaWrap; // +0x18
    WCPlayableImageView * _playableImageView; // +0x20
    double _progressValue; // +0x28
    MMTimer * _staticPhotoTimer; // +0x30
    double _playRate; // +0x38
    unsigned long long _coverImageLoadGeneration; // +0x40
}
- (void)updateWithMediaInfo:(id)arg1;
- (void)reCreatePlayableImageView;
- (void)loadCoverImage;
- (void)startPlayPhoto;
- (void)resumePlayPhoto;
- (void)resumeLivePhotoIfNeeded;
- (void)pausePlayPhoto;
- (void)setPlayRate:(double)arg1;
- (id)getImage;
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
- (double)playRate;
- (BOOL)coverImageLoading;
- (void)setCoverImageLoading:(BOOL)arg1;
- (unsigned long long)coverImageLoadGeneration;
- (void)setCoverImageLoadGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
