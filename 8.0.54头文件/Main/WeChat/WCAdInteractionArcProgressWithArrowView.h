@interface WCAdInteractionArcProgressWithArrowView : WCAdInteractionContentView
{
    double _currentProgress; // +0x68
    CAShapeLayer * _progressArcLayer; // +0x70
    CAShapeLayer * _progressTriangleLayer; // +0x78
}
- (void)organizeSubContentViews;
- (void)updateProgressWith:(double)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (id)progressArcLayer;
- (void)setProgressArcLayer:(id)arg1;
- (id)progressTriangleLayer;
- (void)setProgressTriangleLayer:(id)arg1;
- (void).cxx_destruct;
@end

