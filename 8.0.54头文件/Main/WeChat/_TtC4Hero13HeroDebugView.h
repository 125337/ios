@interface _TtC4Hero13HeroDebugView : UIView <UIGestureRecognizerDelegate>
{
     backgroundView; // +0x8
     debugSlider; // +0x10
     perspectiveButton; // +0x18
     doneButton; // +0x20
     arcCurveButton; // +0x28
     delegate; // +0x30
     panGR; // +0x40
     pinchGR; // +0x48
     showControls; // +0x50
     showOnTop; // +0x51
     rotation; // +0x58
     scale; // +0x60
     translation; // +0x68
     startRotation; // +0x78
     startLocation; // +0x80
     startTranslation; // +0x90
     startScale; // +0xa0
}
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)pan;
- (void)pinch;
- (void)onDone;
- (void)onPerspective;
- (void)onDisplayArcCurve;
- (void)onSlide;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

