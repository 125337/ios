@interface MJShootCropGuidelineMaskView : MMUIView
{
    id <MJShootCropGuidelineMaskViewDelegate> _delegate; // +0x8
    MMUIView * _guidelineFrameContainerView; // +0x10
    unsigned long long _snapType; // +0x18
    CALayer * _topBorder; // +0x20
    CALayer * _bottomBorder; // +0x28
    CALayer * _leftBorder; // +0x30
    CALayer * _rightBorder; // +0x38
    MJDashLine * _verticalLine; // +0x40
    MJDashLine * _horizontalLine; // +0x48
    MMUIView * _topOverlayView; // +0x50
    MMUIView * _bottomOverlayView; // +0x58
    MMUIView * _leftOverlayView; // +0x60
    MMUIView * _rightOverlayView; // +0x68
    CGSize _canvasPointSize; // +0x70
}
+ (id)snapTypeDescription:(unsigned long long)arg1;
- (id)initWithCanvasPointSize:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (void)layoutGuidelineFrameContainerView;
- (void)setupGuidelines;
- (void)showVerticalGuidelineAnimated:(BOOL)arg1;
- (void)dismissVerticalGuidelineAnimated:(BOOL)arg1;
- (void)showHorizontalGuidelineAnimated:(BOOL)arg1;
- (void)dismissHorizontalGuidelineAnimated:(BOOL)arg1;
- (void)setupBorders;
- (void)resetBordersFrame;
- (void)highlightTopBorder;
- (void)unhighlightTopBorder;
- (void)highlightLeftBorder;
- (void)unhighlightLeftBorder;
- (void)highlightBottomBorder;
- (void)unhighlightBottomBorder;
- (void)highlightRightBorder;
- (void)unhighlightRightBorder;
- (void)setupOverlays;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)dismissOverlayAnimated:(BOOL)arg1;
- (void)showOverlayExclusivelyAnimated:(BOOL)arg1;
- (void)setSnapType:(unsigned long long)arg1;
- (id)guidelineFrameContainerView;
- (id)verticalLine;
- (id)horizontalLine;
- (id)topOverlayView;
- (id)bottomOverlayView;
- (id)leftOverlayView;
- (id)rightOverlayView;
- (id)topBorder;
- (id)bottomBorder;
- (id)leftBorder;
- (id)rightBorder;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setGuidelineFrameContainerView:(id)arg1;
- (unsigned long long)snapType;
- (CGSize)canvasPointSize;
- (void)setCanvasPointSize:(CGSize)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setBottomBorder:(id)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setVerticalLine:(id)arg1;
- (void)setHorizontalLine:(id)arg1;
- (void)setTopOverlayView:(id)arg1;
- (void)setBottomOverlayView:(id)arg1;
- (void)setLeftOverlayView:(id)arg1;
- (void)setRightOverlayView:(id)arg1;
- (void).cxx_destruct;
@end

