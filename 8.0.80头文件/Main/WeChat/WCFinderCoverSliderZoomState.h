@interface WCFinderCoverSliderZoomState : NSObject
{
    BOOL _isZoomed; // +0x8
    double _videoTrackDuration; // +0x10
    double _visibleThumbCount; // +0x18
    double _zoomStartTime; // +0x20
    double _zoomEndTime; // +0x28
    id /* block */ _onZoomActivated; // +0x30
    NSTimer * _pauseDetectionTimer; // +0x38
    UIImpactFeedbackGenerator * _zoomFeedbackGenerator; // +0x40
}
- (id)initWithVideoTrackDuration:(double)arg1 visibleThumbCount:(double)arg2;
- (id)zoomFeedbackGenerator;
- (void)panPositionDidChangeAtTime:(id)arg1 positionRatio:(double)arg2;
- (void)panDidEnd;
- (void)activateZoomWithCurrentTime:(id)arg1 ratio:(double)arg2;
- (double)longPressTimerInterval;
- (void)invalidatePauseTimer;
- (void)dealloc;
- (double)videoTrackDuration;
- (double)visibleThumbCount;
- (BOOL)isZoomed;
- (void)setIsZoomed:(BOOL)arg1;
- (double)zoomStartTime;
- (void)setZoomStartTime:(double)arg1;
- (double)zoomEndTime;
- (void)setZoomEndTime:(double)arg1;
- (id /* block */)onZoomActivated;
- (void)setOnZoomActivated:(id /* block */)arg1;
- (id)pauseDetectionTimer;
- (void)setPauseDetectionTimer:(id)arg1;
- (void)setZoomFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end
