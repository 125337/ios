@interface ImplicitView : UIImageView
{
    unsigned long long m_curFrameIndex; // +0x8
    NSArray * m_frames; // +0x10
    double m_nextTimeToFlashFrame; // +0x18
    BOOL _hasStartAnimation; // +0x20
    int _residueNumForRebound; // +0x24
    id <ImplicitViewDelegate> _delegate; // +0x28
    double _speedX; // +0x30
    double _speedY; // +0x38
    double _accelerationY; // +0x40
    double _scaleSpeed; // +0x48
    unsigned long long _beginPosition; // +0x50
    long long _animationType; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setHasStartAnimation:(BOOL)arg1;
- (void)onWillStartWithOrigin:(CGPoint *)arg1 bounds:(CGRect)arg2;
- (void)setImplicitFrames:(id)arg1;
- (void)updateFrameWithBottomBoundaryY:(double)arg1;
- (void)flashFrameWithTimeInterval:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)residueNumForRebound;
- (void)setResidueNumForRebound:(int)arg1;
- (double)speedX;
- (void)setSpeedX:(double)arg1;
- (double)speedY;
- (void)setSpeedY:(double)arg1;
- (double)accelerationY;
- (void)setAccelerationY:(double)arg1;
- (double)scaleSpeed;
- (void)setScaleSpeed:(double)arg1;
- (unsigned long long)beginPosition;
- (void)setBeginPosition:(unsigned long long)arg1;
- (BOOL)hasStartAnimation;
- (long long)animationType;
- (void)setAnimationType:(long long)arg1;
- (void).cxx_destruct;
@end
