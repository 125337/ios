@interface ChatBotEllipseRecordView : UIView
{
    UIColor * _color; // +0x8
    UILabel * _hintLabel; // +0x10
}
- (id)init;
- (void)setActive:(BOOL)arg1;
- (void)updateColor:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (void)layoutHintLabel;
- (id)color;
- (void)setColor:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (void).cxx_destruct;
@end
