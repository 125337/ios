@interface DialectVoiceTransGuideBubbleView : UIView
{
    id /* block */ _closeHandler; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _textLabel; // +0x18
    MMUIButton * _closeButton; // +0x20
    CAShapeLayer * _bubbleLayer; // +0x28
    double _arrowCenterX; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)updateLayoutForContainerWidth:(double)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)showWithArrowCenterX:(double)arg1;
- (void)updateArrowCenterX:(double)arg1;
- (void)refreshLayer;
- (void)updateAnchorPoint;
- (id)generateBubblePath;
- (void)onCloseButtonClicked;
- (id /* block */)closeHandler;
- (void)setCloseHandler:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (double)arrowCenterX;
- (void)setArrowCenterX:(double)arg1;
- (void).cxx_destruct;
@end
