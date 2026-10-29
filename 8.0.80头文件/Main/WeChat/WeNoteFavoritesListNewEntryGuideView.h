@interface WeNoteFavoritesListNewEntryGuideView : UIView
{
    UILabel * _textLabel; // +0x8
    CAShapeLayer * _bubbleLayer; // +0x10
    NSString * _text; // +0x18
}
- (id)initWithText:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (id)text;
- (void).cxx_destruct;
@end
