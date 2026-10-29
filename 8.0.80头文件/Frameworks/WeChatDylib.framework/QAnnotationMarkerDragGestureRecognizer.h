@interface QAnnotationMarkerDragGestureRecognizer : UIGestureRecognizer
{
    QMapView * _mapView; // +0x8
    int _hitMarkerID; // +0x10
    QAnnotationView * _hitView; // +0x18
    CGPoint _startPoint; // +0x20
    BOOL _hasMoved; // +0x30
    BOOL _longPressActivated; // +0x31
    BOOL _draggable; // +0x32
    CGPoint _anchorOffset; // +0x38
    int _currentDragState; // +0x48
    NSTimer * _longPressTimer; // +0x50
    double _minimumPressDuration; // +0x58
    double _allowableMovement; // +0x60
}
- (id)initWithMapView:(id)arg1;
- (void)_resetState;
- (void)_cancelLongPressTimer;
- (void)_transitionDragStateTo:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_onLongPressTimer:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (double)minimumPressDuration;
- (void)setMinimumPressDuration:(double)arg1;
- (double)allowableMovement;
- (void)setAllowableMovement:(double)arg1;
- (void).cxx_destruct;
@end
