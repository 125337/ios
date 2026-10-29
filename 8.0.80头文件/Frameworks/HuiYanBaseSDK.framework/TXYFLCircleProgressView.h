@interface TXYFLCircleProgressView : UIView
{
    BOOL isLoading; // +0x8
    double _startAngle; // +0x10
    UIColor * _trackColor; // +0x18
    double _lineWidth; // +0x20
    UIColor * _progressColor; // +0x28
    NSString * _progressLineCap; // +0x30
    double _progress; // +0x38
    NSString * _contentText; // +0x40
    UIColor * _contentTextColor; // +0x48
    UIFont * _contentTextFont; // +0x50
    CAShapeLayer * _circleBackgroundLayer; // +0x58
    CAShapeLayer * _progressLayer; // +0x60
    CATextLayer * _contentTextLayer; // +0x68
    double _cornerRadius; // +0x70
}
- (id)init;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (void)drawLayer:(id)arg1 inContext:(CGContext *)arg2;
- (void)fl_drawCircleBackgroundLayer;
- (void)fl_drawProgressLayer;
- (void)fl_drawContentTextLayer;
- (void)setTrackColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressColor:(id)arg1;
- (void)setProgressLineCap:(id)arg1;
- (CGSize)fl_sizeString:(id)arg1 font:(id)arg2 constrainedSize:(CGSize)arg3 mode:(long long)arg4;
- (void)autoFontLayoutWithContent:(id)arg1;
- (void)setContentText:(id)arg1;
- (void)setContentTextFont:(id)arg1;
- (void)setContentTextColor:(id)arg1;
- (id)circleBackgroundLayer;
- (id)progressLayer;
- (id)contentTextLayer;
- (void)startLoading;
- (void)stopLoading;
- (double)startAngle;
- (void)setStartAngle:(double)arg1;
- (id)trackColor;
- (double)lineWidth;
- (id)progressColor;
- (id)progressLineCap;
- (double)progress;
- (id)contentText;
- (id)contentTextColor;
- (id)contentTextFont;
- (void)setCircleBackgroundLayer:(id)arg1;
- (void)setProgressLayer:(id)arg1;
- (void)setContentTextLayer:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void).cxx_destruct;
@end
