@interface ChatBotBubbleView : UIView
{
    double _cornerRadius; // +0x8
    double _popDistance; // +0x10
    double _maxContentWidth; // +0x18
    NSString * _textContent; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UILabel * _textContentView; // +0x30
    UIView * _contentView; // +0x38
    long long _type; // +0x40
}
- (id)initWithTextContent:(id)arg1;
- (id)initWithTextContent:(id)arg1 type:(long long)arg2;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)layoutArrowImageView;
- (void)layoutTextContent;
- (void)updateContent:(id)arg1;
- (void)showOnView:(id)arg1;
- (void)showOnView:(id)arg1 superview:(id)arg2;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (double)popDistance;
- (void)setPopDistance:(double)arg1;
- (double)maxContentWidth;
- (void)setMaxContentWidth:(double)arg1;
- (id)textContent;
- (void)setTextContent:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)textContentView;
- (void)setTextContentView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (void).cxx_destruct;
@end
