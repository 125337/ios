@interface WCFinderShareFakeCell : UIView <WCFinderZoomAnimatorBehavior, WCFinderShareAbstractCell>
{
    UIImage * _image; // +0x8
    CGRect _mainViewRect; // +0x10
}
- (id)initWithImage:(id)arg1 mainViewRect:(CGRect)arg2;
- (void)doShareAnimation;
- (id)transitionStartImage;
- (id)transitionEndImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (BOOL)zoomAnimatorUseTranSnapViewWithSnapAgain;
- (id)image;
- (void)setImage:(id)arg1;
- (CGRect)mainViewRect;
- (void)setMainViewRect:(CGRect)arg1;
- (void).cxx_destruct;
@end

