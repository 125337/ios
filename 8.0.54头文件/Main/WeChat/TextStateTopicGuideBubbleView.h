@interface TextStateTopicGuideBubbleView : UIView
{
    UIView * _bubbleView; // +0x8
    CAShapeLayer * _bubbleLayer; // +0x10
    MMUILabel * _textLabel; // +0x18
    CGPoint _arrowPoint; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)refreshView;
- (void)didMoveToSuperview;
- (void)setArrowPoint:(CGPoint)arg1;
- (CGPoint)arrowPoint;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

