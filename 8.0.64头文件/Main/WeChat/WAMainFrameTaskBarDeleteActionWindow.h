@interface WAMainFrameTaskBarDeleteActionWindow : MMUIWindow
{
    WAMainFrameTaskbarOperationViewController * _operationVC; // +0x8
    UIView * _containerView; // +0x10
    CGSize _targetSize; // +0x18
}
- (id)init;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)makeKeyWindow;
- (id)operationVC;
- (void)setOperationVC:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (CGSize)targetSize;
- (void)setTargetSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
