@interface MinimizeBaseView : UIView
{
    id <MinimizeBaseViewDelegate> _delegate; // +0x8
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (BOOL)lookin_shouldCaptureImage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
