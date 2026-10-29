@interface WCPayWarningNotice : NSObject
{
    unsigned int _is_show_notice; // +0x8
    WCPayAntiCheatWarningTextInfo * _text_info; // +0x10
    NSString * _text_color; // +0x18
    NSString * _text_dark_color; // +0x20
    NSString * _lefticon; // +0x28
    NSString * _lefticon_dark; // +0x30
    NSString * _righticon; // +0x38
    NSString * _righticon_dark; // +0x40
}
- (unsigned int)is_show_notice;
- (void)setIs_show_notice:(unsigned int)arg1;
- (id)text_info;
- (void)setText_info:(id)arg1;
- (id)text_color;
- (void)setText_color:(id)arg1;
- (id)text_dark_color;
- (void)setText_dark_color:(id)arg1;
- (id)lefticon;
- (void)setLefticon:(id)arg1;
- (id)lefticon_dark;
- (void)setLefticon_dark:(id)arg1;
- (id)righticon;
- (void)setRighticon:(id)arg1;
- (id)righticon_dark;
- (void)setRighticon_dark:(id)arg1;
- (void).cxx_destruct;
@end

