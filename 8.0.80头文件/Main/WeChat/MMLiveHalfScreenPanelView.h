@interface MMLiveHalfScreenPanelView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isOpening; // +0x8
    UIView * _contentView; // +0x10
    double _maxHeight; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    CAShapeLayer * _shapeLayer; // +0x28
    UIView * _maskingView; // +0x30
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x38
    double _contentViewTopAtPanBegin; // +0x40
    double _contentViewPreviousPanPositionY; // +0x48
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)onHalfScreenPanelLightDismissed;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)openWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (double)liveCommonPanelTopMarginWithTotalHeight:(double)arg1;
- (double)liveCommonPanelWidthWithTotalWidth:(double)arg1;
- (void)onPanGestureRecognizerBegan;
- (void)onHalfScreenPanelOpened;
- (void)onHalfScreenPanelClosed;
- (BOOL)shouldInstallContentViewPanGesture;
- (void)setContentViewBackground;
- (void)initContentView;
- (void)layoutHalfScreenContentView;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)layoutSubviews;
- (id)audienceLogReporter;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)maskingView;
- (void)setMaskingView:(id)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (double)contentViewTopAtPanBegin;
- (void)setContentViewTopAtPanBegin:(double)arg1;
- (double)contentViewPreviousPanPositionY;
- (void)setContentViewPreviousPanPositionY:(double)arg1;
- (void).cxx_destruct;
@end
