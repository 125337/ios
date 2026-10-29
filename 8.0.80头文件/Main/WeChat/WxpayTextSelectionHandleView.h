@interface WxpayTextSelectionHandleView : UIView
{
    CAShapeLayer * _shape; // +0x8
    long long _boundary; // +0x10
}
- (id)initWithBoundary:(long long)arg1;
- (void)applyColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)placeAtCaret:(CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (long long)boundary;
- (void).cxx_destruct;
@end
