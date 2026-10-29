@interface ChatBotBubblePopView : UIView
{
    BOOL _hasPopped; // +0x8
    UILabel * _textLabel; // +0x10
    UIImageView * _imageView; // +0x18
    ChatBotBubblePopConfig * _bubbleConfig; // +0x20
    CGRect _popBeforFrame; // +0x28
}
- (id)initWithConfig:(id)arg1;
- (void)setupView;
- (void)setupLabel;
- (void)setupImage;
- (void)PopMsgBubble;
- (void)PopMsgBubble:(id)arg1;
- (void)disMissMsgBubble;
- (void)PopRecoverableBubble:(id /* block */)arg1;
- (void)PopRecoverableBubble;
- (BOOL)hasPopped;
- (void)setHasPopped:(BOOL)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (CGRect)popBeforFrame;
- (void)setPopBeforFrame:(CGRect)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)bubbleConfig;
- (void).cxx_destruct;
@end
