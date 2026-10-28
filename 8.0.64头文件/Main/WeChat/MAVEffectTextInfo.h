@interface MAVEffectTextInfo : NSObject
{
    BOOL _italic; // +0x8
    BOOL _bold; // +0x9
    float _fontSize; // +0xc
    NSString * _text; // +0x10
    NSString * _fontFamily; // +0x18
}
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 fontSize:(float)arg2 fontFamily:(id)arg3 italic:(BOOL)arg4 bold:(BOOL)arg5;
- (id)text;
- (void)setText:(id)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (id)fontFamily;
- (void)setFontFamily:(id)arg1;
- (BOOL)italic;
- (void)setItalic:(BOOL)arg1;
- (BOOL)bold;
- (void)setBold:(BOOL)arg1;
- (void).cxx_destruct;
@end
