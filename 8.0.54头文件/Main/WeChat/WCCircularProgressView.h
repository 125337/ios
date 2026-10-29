@interface WCCircularProgressView : UIView
{
    double _progressStepForFinishingAnimation; // +0x8
    double _lastTappedTime; // +0x10
    BOOL _enable; // +0x18
    double _progress; // +0x20
    id <WCCircularProgressViewDelegate> _delegate; // +0x28
    NSString * _successTipText; // +0x30
    CAShapeLayer * _unfinishedShapeLayer; // +0x38
    CAShapeLayer * _finishedShapeLayer; // +0x40
    CAShapeLayer * _arrowLayer; // +0x48
    CAShapeLayer * _tickLayer; // +0x50
    UILabel * _successTipsLabel; // +0x58
    CADisplayLink * _displayLink; // +0x60
    double _realProgress; // +0x68
    double _radius; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)commonInit;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
- (void)applyFinishAnimation;
- (void)setEnable:(BOOL)arg1;
- (void)setSuccessTipText:(id)arg1;
- (void)viewDidTapped:(id)arg1;
- (void)updateCircularWithProgress:(double)arg1 animated:(BOOL)arg2;
- (void)updateArrowWithProgress:(double)arg1;
- (void)updateTickWithProgress:(double)arg1;
- (void)updateTextTipWithProgress:(double)arg1;
- (void)updateAnimation;
- (void)startFinishAnimation;
- (void)stopFinishAnimation;
- (double)progress;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)enable;
- (id)successTipText;
- (id)unfinishedShapeLayer;
- (void)setUnfinishedShapeLayer:(id)arg1;
- (id)finishedShapeLayer;
- (void)setFinishedShapeLayer:(id)arg1;
- (id)arrowLayer;
- (void)setArrowLayer:(id)arg1;
- (id)tickLayer;
- (void)setTickLayer:(id)arg1;
- (id)successTipsLabel;
- (void)setSuccessTipsLabel:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)realProgress;
- (void)setRealProgress:(double)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (void).cxx_destruct;
@end

