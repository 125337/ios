@interface MMFinderLiveMusicVolumnContentView : UIView
{
    BOOL _isUpdatingWithSEI; // +0x8
    int _previousVolumeValue; // +0xc
    MMLiveMusicStyleSlider * _sliderBar; // +0x10
    MMUILabel * _progressTipLabel; // +0x18
    id /* block */ _volumnAdjustCallback; // +0x20
}
+ (int)getAdaptedProgressValue:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSliderBar;
- (void)layoutProgressTipLabel;
- (void)onMusicStyleSliderValueChangedForceUpdate:(id)arg1;
- (void)onMusicStyleSliderValueChanged:(id)arg1;
- (void)updateProgressTip:(int)arg1;
- (void)reduceVolumnToLowVoice;
- (void)recoverPreviousVolumn;
- (int)currentVolumn;
- (void)setVolumn:(int)arg1;
- (void)updateUIWithVolumn:(int)arg1;
- (id)sliderBar;
- (void)setSliderBar:(id)arg1;
- (id)progressTipLabel;
- (void)setProgressTipLabel:(id)arg1;
- (id /* block */)volumnAdjustCallback;
- (void)setVolumnAdjustCallback:(id /* block */)arg1;
- (int)previousVolumeValue;
- (void)setPreviousVolumeValue:(int)arg1;
- (BOOL)isUpdatingWithSEI;
- (void)setIsUpdatingWithSEI:(BOOL)arg1;
- (void).cxx_destruct;
@end

