@interface LineStyleWrap : NSObject
{
    NSString * m_nsChars; // +0x8
    UIColor * m_color; // +0x10
    UIFont * m_font; // +0x18
    double m_fOffset; // +0x20
    BOOL m_bUnderline; // +0x28
    double m_fRealLength; // +0x30
    BOOL m_hide; // +0x38
    NSString * _m_nsStrikeThroughWording; // +0x40
    UIColor * _m_strikeThroughWordingColor; // +0x48
    UIColor * _m_wxColor; // +0x50
}
- (long long)compare:(id)arg1;
- (id)getColor;
- (id)m_nsChars;
- (void)setM_nsChars:(id)arg1;
- (id)m_color;
- (void)setM_color:(id)arg1;
- (id)m_font;
- (void)setM_font:(id)arg1;
- (double)m_fOffset;
- (void)setM_fOffset:(double)arg1;
- (BOOL)m_bUnderline;
- (void)setM_bUnderline:(BOOL)arg1;
- (double)m_fRealLength;
- (void)setM_fRealLength:(double)arg1;
- (BOOL)m_hide;
- (void)setM_hide:(BOOL)arg1;
- (id)m_nsStrikeThroughWording;
- (void)setM_nsStrikeThroughWording:(id)arg1;
- (id)m_strikeThroughWordingColor;
- (void)setM_strikeThroughWordingColor:(id)arg1;
- (id)m_wxColor;
- (void)setM_wxColor:(id)arg1;
- (void).cxx_destruct;
@end

