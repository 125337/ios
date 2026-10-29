@interface TXCDashboardFloatingBall : UIButton
{
    id /* block */ _onClick; // +0x8
    TXCDashboardWindow * _containerWindow; // +0x10
    CGPoint _originPoint; // +0x18
}
+ (id)defaultFloatingBall;
- (id)initWithFrame:(CGRect)arg1;
- (void)show:(BOOL)arg1;
- (void)createContainerWindow;
- (void)handlePanGesture:(id)arg1;
- (void)didClick;
- (id /* block */)onClick;
- (void)setOnClick:(id /* block */)arg1;
- (id)containerWindow;
- (void)setContainerWindow:(id)arg1;
- (CGPoint)originPoint;
- (void)setOriginPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
