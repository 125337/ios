@interface EmotionProgressView : UIView
{
    double _progress; // +0x8
    UIView * _foregroundView; // +0x10
    UIView * _backgroundView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setupFrame:(CGRect)arg1;
- (void)setupViews;
- (void)setBackColor:(id)arg1;
- (void)setPrsColor:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)updateSizeIfNeeded;
- (double)progress;
- (id)foregroundView;
- (void)setForegroundView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

