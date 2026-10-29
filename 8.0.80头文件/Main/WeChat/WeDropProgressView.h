@interface WeDropProgressView : UIView
{
    BOOL _animated; // +0x8
    double _progress; // +0x10
    UIColor * _trackColor; // +0x18
    UIColor * _progressColor; // +0x20
    double _cornerRadius; // +0x28
    double _animationDuration; // +0x30
    UIView * _trackView; // +0x38
    UIView * _progressView; // +0x40
    NSLayoutConstraint * _progressWidthConstraint; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupDefaults;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
- (void)setTrackColor:(id)arg1;
- (void)setProgressColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)updateProgressWidth:(BOOL)arg1;
- (void)updateCornerRadius;
- (double)progress;
- (id)trackColor;
- (id)progressColor;
- (double)cornerRadius;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (id)trackView;
- (void)setTrackView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)progressWidthConstraint;
- (void)setProgressWidthConstraint:(id)arg1;
- (void).cxx_destruct;
@end
