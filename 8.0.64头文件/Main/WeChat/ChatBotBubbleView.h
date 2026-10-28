@interface ChatBotBubbleView : UIView
{
    NSString * _textContent; // +0x8
    UIImageView * _arrowImageView; // +0x10
    UILabel * _textContentView; // +0x18
    UIView * _contentView; // +0x20
}
- (id)initWithTextContent:(id)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)layoutArrowImageView;
- (void)layoutTextContent;
- (void)updateContent:(id)arg1;
- (void)showInView:(id)arg1;
- (id)textContent;
- (void)setTextContent:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)textContentView;
- (void)setTextContentView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
