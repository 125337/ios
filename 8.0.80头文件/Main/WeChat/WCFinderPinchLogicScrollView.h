@interface WCFinderPinchLogicScrollView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _isTriggerBySetZoomAnimated; // +0x8
    id <WCFinderPinchLogicScrollViewDelegate> _finderDelegate; // +0x10
    unsigned long long _zoomInStartTimeStampMs; // +0x18
    double _scaleBeforeZoom; // +0x20
    unsigned long long _timeStampBeforeZoom; // +0x28
    CGRect _pinchContentDefaultRect; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (BOOL)isInPinchOutState;
- (BOOL)isInPinchInState;
- (void)setScrollViewCanPinch:(BOOL)arg1;
- (void)resetToInitialZoomScale;
- (id)pinchContentView;
- (unsigned long long)_checkMediaViewBouncingResult;
- (unsigned long long)_checkMediaViewBouncingResultWithOffset:(CGPoint)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (id)contentVM;
- (id)commonReportDict;
- (void)reportZoomEventWithBeforeZoom:(double)arg1 endDraggingZoom:(double)arg2 afterZoom:(double)arg3;
- (void)reportZoomExitEventWithType:(unsigned long long)arg1;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (CGRect)pinchContentDefaultRect;
- (void)setPinchContentDefaultRect:(CGRect)arg1;
- (unsigned long long)zoomInStartTimeStampMs;
- (void)setZoomInStartTimeStampMs:(unsigned long long)arg1;
- (double)scaleBeforeZoom;
- (void)setScaleBeforeZoom:(double)arg1;
- (unsigned long long)timeStampBeforeZoom;
- (void)setTimeStampBeforeZoom:(unsigned long long)arg1;
- (BOOL)isTriggerBySetZoomAnimated;
- (void)setIsTriggerBySetZoomAnimated:(BOOL)arg1;
- (void).cxx_destruct;
@end
