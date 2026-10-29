@interface FTSVoiceHijackOverlayView : UIView
{
    BOOL _hijackEnabled; // +0x8
    BOOL _debugDrawHotRegion; // +0x9
    double _minimumPressDuration; // +0x10
    id <FTSVoiceHijackOverlayViewDelegate> _delegate; // +0x18
    FTSHijackLongPressGestureRecognizer * _longPress; // +0x20
    UIView * _attachedSuperview; // +0x28
    CAShapeLayer * _debugShapeLayer; // +0x30
    CGRect _hotRegion; // +0x38
}
+ (BOOL)isDebugAllowed;
- (id)init;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setupLongPress;
- (void)willMoveToSuperview:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setHijackEnabled:(BOOL)arg1;
- (void)setHotRegion:(CGRect)arg1;
- (void)setDebugDrawHotRegion:(BOOL)arg1;
- (void)installDebugShapeLayer;
- (void)removeDebugShapeLayer;
- (void)updateDebugShapeLayerPath;
- (CGRect)hotRegion;
- (double)minimumPressDuration;
- (BOOL)hijackEnabled;
- (BOOL)debugDrawHotRegion;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)longPress;
- (void)setLongPress:(id)arg1;
- (id)attachedSuperview;
- (void)setAttachedSuperview:(id)arg1;
- (id)debugShapeLayer;
- (void)setDebugShapeLayer:(id)arg1;
- (void).cxx_destruct;
@end
