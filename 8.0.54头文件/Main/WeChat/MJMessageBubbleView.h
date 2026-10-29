@interface MJMessageBubbleView : MMUIView
{
    double _bubbleTailHeight; // +0x8
    double _bubbleCornerRadius; // +0x10
    UIColor * _bubbleBackgroundColor; // +0x18
    MMUILabel * _label; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)drawRect:(CGRect)arg1;
- (void)setBubbleTailHeight:(double)arg1;
- (void)setbubbleCornerRadius:(double)arg1;
- (void)setBubbleBackgroundColor:(id)arg1;
- (id)label;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (double)bubbleTailHeight;
- (double)bubbleCornerRadius;
- (void)setBubbleCornerRadius:(double)arg1;
- (id)bubbleBackgroundColor;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end

