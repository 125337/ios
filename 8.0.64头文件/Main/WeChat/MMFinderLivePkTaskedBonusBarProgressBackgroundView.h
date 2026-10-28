@interface MMFinderLivePkTaskedBonusBarProgressBackgroundView : UIView <MMFinderLivePkTaskedBonusBarBackgroundView>
{
    UIView * _backgroundView; // +0x8
    UIView * _foregroundView; // +0x10
    CAShapeLayer * _foregroundMaskLayer; // +0x18
    MMFinderLivePkTaskedBonusModel * _model; // +0x20
    NSArray * _progressItems; // +0x28
    double _progress; // +0x30
    MMTimer * _timer; // +0x38
    unsigned long long _elapsedTime; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setProgress:(double)arg1;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)onTimerTick;
- (CGPath *)createMaskingPathWithSize:(CGSize)arg1;
- (void)updateForegroundViewTransformForProgress:(double)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)foregroundView;
- (void)setForegroundView:(id)arg1;
- (id)foregroundMaskLayer;
- (void)setForegroundMaskLayer:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)progressItems;
- (void)setProgressItems:(id)arg1;
- (double)progress;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned long long)elapsedTime;
- (void)setElapsedTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
