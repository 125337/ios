@interface WCFinderLivePlayerSlider : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isStartRecognizePanGes; // +0x8
    int _lastTime; // +0xc
    id <WCFinderLivePlayerSliderDelegate> _delegate; // +0x10
    MMUIButton * _progressIconButton; // +0x18
    NSNumber * _lastValueNum; // +0x20
    UIView * _leftBarView; // +0x28
    UIView * _rightBarView; // +0x30
    UIPanGestureRecognizer * _panGes; // +0x38
    SliderPanGestureRecognizerHandler * _panGesDelegateHandler; // +0x40
    double _startGesHandleRecordWidth; // +0x48
    NSNumber * _valueNum; // +0x50
    double _lastX; // +0x58
    NSMutableArray * _autoAttachDotList; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initGestures;
- (void)initNotifications;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutRightBarView;
- (void)layoutLeftBarView;
- (void)layoutProgressIconButton;
- (void)updateWidgetsOrigin;
- (void)updateUIWithValue:(double)arg1;
- (void)updateUIWithDragState:(unsigned long long)arg1;
- (id)panGes;
- (void)onPanProgressIcon:(id)arg1;
- (unsigned long long)getSliderDragStateFromPanGestureState:(long long)arg1;
- (double)checkAndAdjustDotValueForAutoAttach:(double)arg1;
- (void)configAutoAttachDotValues:(id)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3;
- (BOOL)shoudAnimateToProgress:(double)arg1 duration:(double)arg2 time:(double)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3 completion:(id /* block */)arg4;
- (void)removeProgressAnimation;
- (BOOL)checkProgressValueValid:(double)arg1;
- (void)reset;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)resetAnimation;
- (double)sliderBarCenterY;
- (void)updateValueNum:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)resetLayer:(id)arg1;
- (void)makeProgressIconBtnNotOverBoundary;
- (id)autoAttachDotList;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handleUIOrientationChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)progressIconButton;
- (void)setProgressIconButton:(id)arg1;
- (id)lastValueNum;
- (void)setLastValueNum:(id)arg1;
- (id)leftBarView;
- (void)setLeftBarView:(id)arg1;
- (id)rightBarView;
- (void)setRightBarView:(id)arg1;
- (void)setPanGes:(id)arg1;
- (id)panGesDelegateHandler;
- (void)setPanGesDelegateHandler:(id)arg1;
- (BOOL)isStartRecognizePanGes;
- (void)setIsStartRecognizePanGes:(BOOL)arg1;
- (double)startGesHandleRecordWidth;
- (void)setStartGesHandleRecordWidth:(double)arg1;
- (id)valueNum;
- (void)setValueNum:(id)arg1;
- (int)lastTime;
- (void)setLastTime:(int)arg1;
- (double)lastX;
- (void)setLastX:(double)arg1;
- (void)setAutoAttachDotList:(id)arg1;
- (void).cxx_destruct;
@end

