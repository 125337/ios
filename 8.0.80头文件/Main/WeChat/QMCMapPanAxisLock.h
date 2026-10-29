@interface QMCMapPanAxisLock : NSObject <UIGestureRecognizerDelegate>
{
    id <UIGestureRecognizerDelegate> _originalDelegate; // +0x8
    QMapView * _mapView; // +0x10
    UIEdgeInsets _hotZoneInsets; // +0x18
}
- (BOOL)_isHotZoneMode;
- (CGRect)_hotZoneRect;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)mapPanGestureUpdated:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (id)originalDelegate;
- (void)setOriginalDelegate:(id)arg1;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (UIEdgeInsets)hotZoneInsets;
- (void)setHotZoneInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
