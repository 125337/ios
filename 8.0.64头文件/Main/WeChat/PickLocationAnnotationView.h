@interface PickLocationAnnotationView : QAnnotationView
{
    BOOL _isUnSelectContentDisplay; // +0x8
    BOOL _isSelectContentDisplay; // +0x9
    BOOL _isAnimateViewDisplay; // +0xa
    long long _annotationState; // +0x10
    AnnotationUnSelectContentView * _unSelectContentView; // +0x18
    AnnotationSelectContentView * _selectContentView; // +0x20
    RoundRingView * _roundView; // +0x28
    UIView * _lineView; // +0x30
    double _lastWidth; // +0x38
    double _lastHeight; // +0x40
    CADisplayLink * _animateDisplayLink; // +0x48
}
+ (double)annotationWidth;
+ (double)annotationHeightUnSelect;
+ (double)annotationHeightSelect;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)roundView;
- (id)lineView;
- (id)unSelectContentView;
- (id)selectContentView;
- (void)updateAnimateViews:(BOOL)arg1;
- (void)updateUnSelectContent:(BOOL)arg1;
- (void)updateSelectContent:(BOOL)arg1;
- (void)removeAllAnimations;
- (void)setAnnotationState:(long long)arg1;
- (void)startAnimateFromUnSelectToSelect;
- (void)startAnimateFromSelectToUnSelect;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)addDisplayLink;
- (void)removeDisplayLink;
- (void)onUpdateAnimateValue;
- (long long)annotationState;
- (BOOL)isUnSelectContentDisplay;
- (void)setIsUnSelectContentDisplay:(BOOL)arg1;
- (BOOL)isSelectContentDisplay;
- (void)setIsSelectContentDisplay:(BOOL)arg1;
- (BOOL)isAnimateViewDisplay;
- (void)setIsAnimateViewDisplay:(BOOL)arg1;
- (void)setUnSelectContentView:(id)arg1;
- (void)setSelectContentView:(id)arg1;
- (void)setRoundView:(id)arg1;
- (void)setLineView:(id)arg1;
- (double)lastWidth;
- (void)setLastWidth:(double)arg1;
- (double)lastHeight;
- (void)setLastHeight:(double)arg1;
- (id)animateDisplayLink;
- (void)setAnimateDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end
