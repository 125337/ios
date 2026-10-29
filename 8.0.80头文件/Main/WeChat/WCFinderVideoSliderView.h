@interface WCFinderVideoSliderView : MMUIView <WCFinderVideoSliderProtocol>
{
    AVAssetImageGenerator * _coverGenerator; // +0x8
    MMUIView * _sliderBarView; // +0x10
    UIImageView * _selectedView; // +0x18
    unsigned long long _thumbCount; // +0x20
    id /* block */ _selectedChangeBlock; // +0x28
    double _keyFrameRate; // +0x30
    AVAsset * _avAsset; // +0x38
    UIImage * _speciallyImage; // +0x40
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x48
    NSTimer * _panGesTimer; // +0x50
    double _lastLongPressLocationX; // +0x58
}
+ (void)updateSliderView:(id)arg1 sliderBarView:(id)arg2 selectedView:(id)arg3 maxWidth:(double)arg4 updateWidth:(id /* block */)arg5;
+ (id)resizeImageForCGImage:(CGImage *)arg1 size:(CGSize)arg2;
- (id)initWithHeight:(double)arg1 maxWidth:(double)arg2;
- (id)feedbackGenerator;
- (void)updateMaxWidth:(double)arg1;
- (void)setupGesture;
- (void)setupSubViewsWithMaxWidth:(double)arg1;
- (void)loadSliderByPlayerAsset:(id)arg1 keyFrameRate:(double)arg2 specialImage:(id)arg3 coverTimeStamp:(double)arg4 selectedChangeBlock:(id /* block */)arg5;
- (id)panGesTimer;
- (void)resetPanGesTimer;
- (void)handlePanGesture:(id)arg1;
- (void)panGesTimerFired:(id)arg1;
- (void)longPressSelectCoverGes:(id)arg1;
- (void)refreshSelectedView;
- (BOOL)isSpeciallyImageSelected;
- (id)getCurrentResult;
- (void)setSelectedViewToSpecialImagePlace;
- (void)setSelectedPlayTime:(double)arg1;
- (id)coverGenerator;
- (void)setCoverGenerator:(id)arg1;
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
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (id)speciallyImage;
- (void)setSpeciallyImage:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setPanGesTimer:(id)arg1;
- (double)lastLongPressLocationX;
- (void)setLastLongPressLocationX:(double)arg1;
- (void).cxx_destruct;
@end
