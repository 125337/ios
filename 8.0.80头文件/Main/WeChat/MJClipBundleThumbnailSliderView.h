@interface MJClipBundleThumbnailSliderView : MMUIView <WCFinderVideoSliderProtocol>
{
    UIView * _renderView; // +0x8
    MMUIView * _sliderBarView; // +0x10
    UIImageView * _selectedView; // +0x18
    unsigned long long _thumbCount; // +0x20
    id /* block */ _selectedChangeBlock; // +0x28
    double _keyFrameRate; // +0x30
    UIImage * _speciallyImage; // +0x38
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x40
    NSTimer * _panGesTimer; // +0x48
    double _lastLongPressLocationX; // +0x50
    MJPublisherMovieCompositionTask * _compositionTask; // +0x58
}
- (id)initWithHeight:(double)arg1 maxWidth:(double)arg2 compositionTask:(id)arg3;
- (void)updateMaxWidth:(double)arg1;
- (void)setupGesture;
- (void)setupSubViewsWithMaxWidth:(double)arg1;
- (void)loadSliderByPlayerAsset:(id)arg1 keyFrameRate:(double)arg2 specialImage:(id)arg3 coverTimeStamp:(double)arg4 selectedChangeBlock:(id /* block */)arg5;
- (void)_innerLoadSliderWithKeyFrameRate:(double)arg1 specialImage:(id)arg2 coverTimeStamp:(double)arg3 selectedChangeBlock:(id /* block */)arg4;
- (void)_snapshotAtTime:(struct)arg1 withTimes:(id)arg2 coverWidth:(double)arg3;
- (void)resetPanGesTimer;
- (void)handlePanGesture:(id)arg1;
- (void)panGesTimerFired:(id)arg1;
- (void)longPressSelectCoverGes:(id)arg1;
- (void)refreshSelectedView;
- (BOOL)isSpeciallyImageSelected;
- (id)getCurrentResult;
- (void)setSelectedViewToSpecialImagePlace;
- (void)setSelectedPlayTime:(double)arg1;
- (void)snapshotAtTime:(struct)arg1 completionHandler:(id /* block */)arg2;
- (id)feedbackGenerator;
- (id)panGesTimer;
- (double)videoDuration;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (id)sliderBarView;
- (void)setSliderBarView:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (unsigned long long)thumbCount;
- (void)setThumbCount:(unsigned long long)arg1;
- (id /* block */)selectedChangeBlock;
- (void)setSelectedChangeBlock:(id /* block */)arg1;
- (double)keyFrameRate;
- (void)setKeyFrameRate:(double)arg1;
- (id)speciallyImage;
- (void)setSpeciallyImage:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setPanGesTimer:(id)arg1;
- (double)lastLongPressLocationX;
- (void)setLastLongPressLocationX:(double)arg1;
- (id)compositionTask;
- (void)setCompositionTask:(id)arg1;
- (void).cxx_destruct;
@end
