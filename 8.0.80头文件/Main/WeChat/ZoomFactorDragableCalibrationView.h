@interface ZoomFactorDragableCalibrationView : UIView <ZoomFactorControlUtilsDelegate>
{
    BOOL _isAdsorbed; // +0x8
    id <ZoomFactorDragableCalibrationViewDelegate> _delegate; // +0x10
    ZoomFactorCursorButtonItem * _zoomFactorCursorButtonItem; // +0x18
    ZoomFactorRulerView * _zoomFactorRulerView; // +0x20
    NSArray * _zoomFactorDisplayValueArray; // +0x28
    double _maxZoomFactorDisplayValue; // +0x30
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator; // +0x38
    UIImpactFeedbackGenerator * _impactFeedbackGenerator; // +0x40
    double _currentZoomDisplayFactor; // +0x48
    double _zoomFactorRulerViewBeginLeft; // +0x50
    double _lastRulerDisplacement; // +0x58
    double _distance; // +0x60
    double _adsorption; // +0x68
    NSArray * _positionOfZoomFactorDisplayValue; // +0x70
    UILabel * _debugSpeedLabel; // +0x78
    CAGradientLayer * _backgroundGradientLayer; // +0x80
    UIView * _cursorIndicatorView; // +0x88
    double _previousLayoutWidth; // +0x90
}
- (id)initWithFrame:(CGRect)arg1 parentFrame:(CGRect)arg2 contentFrame:(CGRect)arg3 toolBarFrame:(CGRect)arg4 zoomFactorDisplayValueArray:(id)arg5 maxZoomFactorDisplayValue:(double)arg6;
- (void)setupFeedbackGenerator;
- (void)setupDebugSpeedLabel;
- (void)initCalibrationComponent;
- (void)initZoomFactorRulerView;
- (void)initCursorButton;
- (void)layoutSubviews;
- (void)updateOrientation:(long long)arg1;
- (void)updateZoomVideoFactor:(double)arg1;
- (void)onUIGestureRecognizerStateBegan:(id)arg1;
- (void)onUIGestureRecognizerStateChanged:(id)arg1;
- (void)onUIGestureRecognizerStateEnded:(id)arg1;
- (void)applyHapticFeedbackFrom:(double)arg1 to:(double)arg2 velocity:(double)arg3;
- (id)densityTicksFrom:(double)arg1 to:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)zoomFactorCursorButtonItem;
- (void)setZoomFactorCursorButtonItem:(id)arg1;
- (id)zoomFactorRulerView;
- (void)setZoomFactorRulerView:(id)arg1;
- (id)zoomFactorDisplayValueArray;
- (void)setZoomFactorDisplayValueArray:(id)arg1;
- (double)maxZoomFactorDisplayValue;
- (void)setMaxZoomFactorDisplayValue:(double)arg1;
- (id)selectionFeedbackGenerator;
- (void)setSelectionFeedbackGenerator:(id)arg1;
- (id)impactFeedbackGenerator;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (double)currentZoomDisplayFactor;
- (void)setCurrentZoomDisplayFactor:(double)arg1;
- (double)zoomFactorRulerViewBeginLeft;
- (void)setZoomFactorRulerViewBeginLeft:(double)arg1;
- (double)lastRulerDisplacement;
- (void)setLastRulerDisplacement:(double)arg1;
- (double)distance;
- (void)setDistance:(double)arg1;
- (BOOL)isAdsorbed;
- (void)setIsAdsorbed:(BOOL)arg1;
- (double)adsorption;
- (void)setAdsorption:(double)arg1;
- (id)positionOfZoomFactorDisplayValue;
- (void)setPositionOfZoomFactorDisplayValue:(id)arg1;
- (id)debugSpeedLabel;
- (void)setDebugSpeedLabel:(id)arg1;
- (id)backgroundGradientLayer;
- (void)setBackgroundGradientLayer:(id)arg1;
- (id)cursorIndicatorView;
- (void)setCursorIndicatorView:(id)arg1;
- (double)previousLayoutWidth;
- (void)setPreviousLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
