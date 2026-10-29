@interface MMSightRecordHelperView : UIView
{
    BOOL m_shouldRecord; // +0x8
    BOOL m_needHandleTouchEnd; // +0x9
    MMUIView * m_tipsView; // +0x10
    id <MMSightRecordHelperViewDelegate> _delegate; // +0x18
    MMSightRecordView * _recordView; // +0x20
    MMCircularProgressView * _circleProgress; // +0x28
    double _startRecordAnimationDuration; // +0x30
    double _minRecordDuration; // +0x38
    double _maxRecordDuration; // +0x40
}
- (void)showTips:(id)arg1 color:(id)arg2 font:(id)arg3 topMargin:(double)arg4;
- (void)hideTipsView;
- (void)hideTipsViewImmediately;
- (void)startCircleProgressAnimation;
- (void)onTimeOut;
- (void)onLongPressed;
- (void)onStartRealRecord;
- (void)onTouchFinished;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recordView;
- (void)setRecordView:(id)arg1;
- (id)circleProgress;
- (void)setCircleProgress:(id)arg1;
- (double)startRecordAnimationDuration;
- (void)setStartRecordAnimationDuration:(double)arg1;
- (double)minRecordDuration;
- (void)setMinRecordDuration:(double)arg1;
- (double)maxRecordDuration;
- (void)setMaxRecordDuration:(double)arg1;
- (void).cxx_destruct;
@end

