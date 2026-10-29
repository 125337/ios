@interface MMMenuBubbleTipsView : MMUIView
{
    BOOL _arrowDirectionUp; // +0x8
    BOOL _reverseBubble; // +0x9
    UIView * _bgView; // +0x10
    MMUILabel * _textLabel; // +0x18
    UIImageView * _arrowImageView; // +0x20
    MMUIButton * _closeButton; // +0x28
    UIView * _parentView; // +0x30
    CGPoint _targetPoint; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)initShadow;
- (void)initBubbleBgView;
- (void)initTextlabel;
- (void)initArrowImageView;
- (void)initCloseButton;
- (void)onClose:(id)arg1;
- (void)showInView:(id)arg1 targetPosition:(CGPoint)arg2 animated:(BOOL)arg3;
- (void)hideWithAniamted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)adjustSelfUIStateAndFrame;
- (double)maxWidth;
- (UIEdgeInsets)bubbleInset;
- (UIEdgeInsets)contentInset;
- (id)textLabelFont;
- (id)textColor;
- (id)bubbleColor;
- (BOOL)shouldShowClose;
- (double)bubbleCornerRadius;
- (BOOL)arrowDirectionUp;
- (void)setArrowDirectionUp:(BOOL)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (CGPoint)targetPoint;
- (void)setTargetPoint:(CGPoint)arg1;
- (BOOL)reverseBubble;
- (void)setReverseBubble:(BOOL)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end
