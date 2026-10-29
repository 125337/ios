@interface WCEditImageBubbleView : UIView
{
    BOOL _arrowAtBottom; // +0x8
    UIView * _targetView; // +0x10
    UILabel * _textLabel; // +0x18
    CGPoint _arrowPoint; // +0x20
}
+ (void)showGuideWithTargetView:(id)arg1 text:(id)arg2;
+ (void)dismiss;
- (id)initWithTargetView:(id)arg1 text:(id)arg2;
- (void)drawBubbleWithCornerRadius:(double)arg1 arrowHeight:(double)arg2;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (CGPoint)arrowPoint;
- (void)setArrowPoint:(CGPoint)arg1;
- (BOOL)arrowAtBottom;
- (void)setArrowAtBottom:(BOOL)arg1;
- (void).cxx_destruct;
@end
