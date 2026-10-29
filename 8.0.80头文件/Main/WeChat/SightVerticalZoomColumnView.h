@interface SightVerticalZoomColumnView : UIView <SightVerticalZoomButtonListDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isRulerAppeared; // +0x8
    BOOL _recordingLayoutLocked; // +0x9
    BOOL _usesDuoLayout; // +0xa
    BOOL _isAnimatingSwitch; // +0xb
    BOOL _isLongPressRecognized; // +0xc
    BOOL _isDragging; // +0xd
    BOOL _isAdsorbed; // +0xe
    id <SightVerticalZoomColumnViewDelegate> _delegate; // +0x10
    UILongPressGestureRecognizer * _longPressGesture; // +0x18
    UIPanGestureRecognizer * _panGesture; // +0x20
    NSArray * _zoomFactorDisplayValueArray; // +0x28
    double _maxZoomFactorDisplayValue; // +0x30
    SightVerticalZoomButtonList * _buttonListView; // +0x38
    UIView * _rulerContainerView; // +0x40
    SightVerticalZoomRulerView * _rulerView; // +0x48
    ZoomFactorCursorButtonItem * _rulerCursorItem; // +0x50
    UIButton * _rulerCursorIndicatorView; // +0x58
    ZoomFactorCursorButtonItem * _animatingCursorItem; // +0x60
    CAGradientLayer * _rulerScrimLayer; // +0x68
    UIView * _macroSwitchView; // +0x70
    unsigned long long _transitionGeneration; // +0x78
    double _currentRulerDisplacement; // +0x80
    double _rulerBeginDisplacement; // +0x88
    double _distance; // +0x90
    double _adsorption; // +0x98
    double _lastRulerDisplacement; // +0xa0
    double _currentDisplayZoomFactor; // +0xa8
    NSArray * _displacementOfZoomFactorDisplayValue; // +0xb0
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator; // +0xb8
    UIImpactFeedbackGenerator * _impactFeedbackGenerator; // +0xc0
}
- (id)initWithZoomFactorDisplayValueArray:(id)arg1 maxZoomFactorDisplayValue:(double)arg2;
- (void)setupSubviews;
- (void)setupButtonListView;
- (void)setupRulerContainerView;
- (void)setupGestures;
- (void)setupFeedbackGenerators;
- (void)layoutSubviews;
- (void)applyRulerDisplacement:(double)arg1;
- (void)layoutRulerCursor;
- (void)layoutMacroSwitch;
- (double)videoZoomFactorForDisplayFactor:(double)arg1;
- (void)switchRulerView:(id)arg1 toViewB:(id)arg2 begin:(id /* block */)arg3 end:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)resetRulerForLayoutExit;
- (void)showRulerAnimated;
- (void)dismissRulerAnimated;
- (void)placeAnimatingCursorFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 atStart:(BOOL)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)scheduleDismissRuler;
- (void)beginDrag;
- (void)updateDragWithGesture:(id)arg1;
- (void)applyHapticFeedbackFrom:(double)arg1 to:(double)arg2 velocity:(double)arg3;
- (id)densityTicksFrom:(double)arg1 to:(double)arg2;
- (void)verticalZoomButtonListDidSelectDisplayFactor:(double)arg1;
- (void)notifyZoomChangedToDisplayFactor:(double)arg1;
- (void)updateZoomVideoFactor:(double)arg1;
- (void)switchToSingleCursorButtonState;
- (void)switchToNormalState;
- (void)setInteractionEnabled:(BOOL)arg1;
- (void)attachMacroSwitchView:(id)arg1;
- (void)detachMacroSwitchView;
- (void)onMacroSwitchViewHidden:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRulerAppeared;
- (void)setIsRulerAppeared:(BOOL)arg1;
- (BOOL)recordingLayoutLocked;
- (void)setRecordingLayoutLocked:(BOOL)arg1;
- (BOOL)usesDuoLayout;
- (void)setUsesDuoLayout:(BOOL)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)zoomFactorDisplayValueArray;
- (void)setZoomFactorDisplayValueArray:(id)arg1;
- (double)maxZoomFactorDisplayValue;
- (void)setMaxZoomFactorDisplayValue:(double)arg1;
- (id)buttonListView;
- (void)setButtonListView:(id)arg1;
- (id)rulerContainerView;
- (void)setRulerContainerView:(id)arg1;
- (id)rulerView;
- (void)setRulerView:(id)arg1;
- (id)rulerCursorItem;
- (void)setRulerCursorItem:(id)arg1;
- (id)rulerCursorIndicatorView;
- (void)setRulerCursorIndicatorView:(id)arg1;
- (id)animatingCursorItem;
- (void)setAnimatingCursorItem:(id)arg1;
- (id)rulerScrimLayer;
- (void)setRulerScrimLayer:(id)arg1;
- (id)macroSwitchView;
- (void)setMacroSwitchView:(id)arg1;
- (BOOL)isAnimatingSwitch;
- (void)setIsAnimatingSwitch:(BOOL)arg1;
- (unsigned long long)transitionGeneration;
- (void)setTransitionGeneration:(unsigned long long)arg1;
- (BOOL)isLongPressRecognized;
- (void)setIsLongPressRecognized:(BOOL)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (double)currentRulerDisplacement;
- (void)setCurrentRulerDisplacement:(double)arg1;
- (double)rulerBeginDisplacement;
- (void)setRulerBeginDisplacement:(double)arg1;
- (double)distance;
- (void)setDistance:(double)arg1;
- (double)adsorption;
- (void)setAdsorption:(double)arg1;
- (BOOL)isAdsorbed;
- (void)setIsAdsorbed:(BOOL)arg1;
- (double)lastRulerDisplacement;
- (void)setLastRulerDisplacement:(double)arg1;
- (double)currentDisplayZoomFactor;
- (void)setCurrentDisplayZoomFactor:(double)arg1;
- (id)displacementOfZoomFactorDisplayValue;
- (void)setDisplacementOfZoomFactorDisplayValue:(id)arg1;
- (id)selectionFeedbackGenerator;
- (void)setSelectionFeedbackGenerator:(id)arg1;
- (id)impactFeedbackGenerator;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end
