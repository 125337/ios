@interface WAMarkerAlongAnimationContext : NSObject
{
    BOOL _autoRotate; // +0x8
    BOOL _isAnimating; // +0x9
    int _lastIndex; // +0xc
    QAnnotationView * _annotationView; // +0x10
    UIView * _rotationView; // +0x18
    NSArray * _locations; // +0x20
    double _totalDuration; // +0x28
    double _startTime; // +0x30
    double _pauseTime; // +0x38
    double _precision; // +0x40
}
- (id)annotationView;
- (void)setAnnotationView:(id)arg1;
- (id)rotationView;
- (void)setRotationView:(id)arg1;
- (id)locations;
- (void)setLocations:(id)arg1;
- (double)totalDuration;
- (void)setTotalDuration:(double)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)pauseTime;
- (void)setPauseTime:(double)arg1;
- (int)lastIndex;
- (void)setLastIndex:(int)arg1;
- (BOOL)autoRotate;
- (void)setAutoRotate:(BOOL)arg1;
- (double)precision;
- (void)setPrecision:(double)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
