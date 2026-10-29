@interface MMHeadImageAnnotationViewV2 : QAnnotationView <UIGestureRecognizerDelegate>
{
    UIImageView * _annotationView; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    UIButton * _calloutButton; // +0x18
    UIImageView * _headingImageView; // +0x20
    id /* block */ _onTapped; // +0x28
}
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)onHeadImageTapped:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void)setShowCallout:(BOOL)arg1 Animated:(BOOL)arg2;
- (void)stopAnnimation:(BOOL)arg1;
- (void)bringToFront;
- (void)setHeading:(double)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)onTapped;
- (void)setOnTapped:(id /* block */)arg1;
- (void).cxx_destruct;
@end
