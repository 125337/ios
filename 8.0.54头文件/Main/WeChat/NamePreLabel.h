@interface NamePreLabel : MMUILabel
{
    CGRect m_superFrame; // +0x8
    double m_leftMargin; // +0x28
    double m_rightMargin; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 leftMargin:(double)arg2;
- (void)updateRightMargin:(double)arg1;
- (void)layoutSelf;
- (void)setText:(id)arg1;
@end

