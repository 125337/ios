@interface MinimizeBaseView : UIView
{
    id <MinimizeBaseViewDelegate> _delegate; // +0x8
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

