@interface WCPayBadgeView : UIView
{
    UILabel * _m_textLabel; // +0x8
    UIColor * _m_textColor; // +0x10
    NSString * _m_textString; // +0x18
    double _m_maxWidth; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateMaxWidth:(double)arg1;
- (void)updateFontColor:(id)arg1;
- (void)updateText:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateTextLabel;
- (id)m_textLabel;
- (void)setM_textLabel:(id)arg1;
- (id)m_textColor;
- (void)setM_textColor:(id)arg1;
- (id)m_textString;
- (void)setM_textString:(id)arg1;
- (double)m_maxWidth;
- (void)setM_maxWidth:(double)arg1;
- (void).cxx_destruct;
@end

