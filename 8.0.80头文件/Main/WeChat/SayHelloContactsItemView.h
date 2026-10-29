@interface SayHelloContactsItemView : ContactsItemView
{
    UILabel * m_timeLabel; // +0x60
}
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)descLabelMaxWidthForWidth:(double)arg1;
- (unsigned long long)descLabelNumberOfLinesForWidth:(double)arg1;
- (void)initView:(id)arg1;
- (void)initDescLabel:(id)arg1 color:(id)arg2;
- (void)initTimeLabel:(id)arg1;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void).cxx_destruct;
@end
