@interface MMBubbleTipsView : UIControl
{
    MMUILabel * _titleLabel; // +0x8
    double _bubbleCornerRadius; // +0x10
    CGSize _maxSize; // +0x18
    CGSize _arrowSize; // +0x28
    UIEdgeInsets _contentEdgeInsets; // +0x38
    UIEdgeInsets _bubbleEdgeInsets; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (id)titleLabel;
- (id)defaultTextAttrs;
- (void)setText:(id)arg1;
- (void)setContent:(id)arg1;
- (void)showInView:(id)arg1 targetPosition:(CGPoint)arg2 animated:(BOOL)arg3;
- (void)hide:(BOOL)arg1;
- (void)resizeBubble:(CGPoint)arg1;
- (void)rebuildMask:(double)arg1;
- (CGSize)maxSize;
- (void)setMaxSize:(CGSize)arg1;
- (void)setTitleLabel:(id)arg1;
- (double)bubbleCornerRadius;
- (void)setBubbleCornerRadius:(double)arg1;
- (CGSize)arrowSize;
- (void)setArrowSize:(CGSize)arg1;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)bubbleEdgeInsets;
- (void)setBubbleEdgeInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
