@interface KindaLink : NSObject <MMKLink>
{
    int _linkBkgRadius; // +0x8
    NSString * _m_text; // +0x10
    MMVoidCallback * _m_linkCallback; // +0x18
    MMDynamicColor * _m_linkColor; // +0x20
    long long _m_linkStyle; // +0x28
    NSString * _fontName; // +0x30
    MMDynamicColor * _linkBkgColor; // +0x38
    double _linkTextSize; // +0x40
    long long _fontStyle; // +0x48
    _NSRange _m_range; // +0x50
}
- (id)init;
- (void)setText:(id)arg1;
- (void)setLinkColor:(id)arg1;
- (void)setLinkCallbackImpl:(id)arg1;
- (void)setLinkStyle:(long long)arg1;
- (void)setLinkFont:(id)arg1;
- (id)getText;
- (id)getLinkColor;
- (id)getLinkCallbackImpl;
- (long long)getLinkStyle;
- (id)getLinkFont;
- (void)setBackground:(id)arg1 radius:(int)arg2;
- (id)getLinkBkgColor;
- (int)getLinkBkgRadius;
- (void)setTextSize:(float)arg1;
- (float)getLinkTextSize;
- (void)setFontStyle:(long long)arg1;
- (long long)getFontStyle;
- (_NSRange)m_range;
- (void)setM_range:(_NSRange)arg1;
- (id)m_text;
- (void)setM_text:(id)arg1;
- (id)m_linkCallback;
- (void)setM_linkCallback:(id)arg1;
- (id)m_linkColor;
- (void)setM_linkColor:(id)arg1;
- (long long)m_linkStyle;
- (void)setM_linkStyle:(long long)arg1;
- (id)fontName;
- (void)setFontName:(id)arg1;
- (id)linkBkgColor;
- (void)setLinkBkgColor:(id)arg1;
- (int)linkBkgRadius;
- (void)setLinkBkgRadius:(int)arg1;
- (double)linkTextSize;
- (void)setLinkTextSize:(double)arg1;
- (long long)fontStyle;
- (void).cxx_destruct;
@end
