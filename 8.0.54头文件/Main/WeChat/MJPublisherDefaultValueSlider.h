@interface MJPublisherDefaultValueSlider : MJPublisherSlider
{
    map<float, double, std::less<float>, std::allocator<std::pair<const float, double>>> _gearXCoordsByValue; // +0x8
    BOOL _isSnapFeedbackEnabled; // +0x20
    float _defaultValue; // +0x24
    double _trackMarkHeight; // +0x28
    double _autoSnapThreshold; // +0x30
    UIColor * _defaultValueMarkColor; // +0x38
    UISelectionFeedbackGenerator * _snapFeedbackGenerator; // +0x40
    CALayer * _defaultValueMarkLayer; // +0x48
}
- (void)commonInit;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (float)valueForTouchPoint:(CGPoint)arg1 withTrackRect:(CGRect)arg2;
- (void)tintColorDidChange;
- (CGRect)defaultValueMarkRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2;
- (void)updateGearXCoordsCache;
- (void)setDefaultValue:(float)arg1;
- (void)setTrackMarkHeight:(double)arg1;
- (void)setDefaultValueMarkColor:(id)arg1;
- (void)layoutMarkLayerAnimated:(BOOL)arg1;
- (double)ratioForValue:(double)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)feedbackIfNeededWithValue:(float)arg1;
- (float)defaultValue;
- (double)trackMarkHeight;
- (double)autoSnapThreshold;
- (void)setAutoSnapThreshold:(double)arg1;
- (id)defaultValueMarkColor;
- (BOOL)isSnapFeedbackEnabled;
- (void)setIsSnapFeedbackEnabled:(BOOL)arg1;
- (id)snapFeedbackGenerator;
- (void)setSnapFeedbackGenerator:(id)arg1;
- (id)defaultValueMarkLayer;
- (void)setDefaultValueMarkLayer:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

