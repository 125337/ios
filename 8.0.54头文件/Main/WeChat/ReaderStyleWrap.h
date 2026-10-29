@interface ReaderStyleWrap : NSObject
{
    UIColor * m_color; // +0x8
    UIFont * m_font; // +0x10
    BOOL m_bUnderline; // +0x18
    _NSRange m_range; // +0x20
    UIColor * _m_wxColor; // +0x30
}
- (long long)compare:(id)arg1;
- (id)getColor;
- (id)m_color;
- (void)setM_color:(id)arg1;
- (id)m_font;
- (void)setM_font:(id)arg1;
- (BOOL)m_bUnderline;
- (void)setM_bUnderline:(BOOL)arg1;
- (_NSRange)m_range;
- (void)setM_range:(_NSRange)arg1;
- (id)m_wxColor;
- (void)setM_wxColor:(id)arg1;
- (void).cxx_destruct;
@end

