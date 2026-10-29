@interface WCCanvasComponentTextAreaInfo : MMObject <NSCoding>
{
    unsigned int _showType; // +0x8
    unsigned int _textAlignmentType; // +0xc
    unsigned int _fontSize; // +0x10
    unsigned int _maxLines; // +0x14
    int _fontType; // +0x18
    NSString * _content; // +0x20
    long long _textVerticalAlignmentType; // +0x28
    NSString * _fontColorStr; // +0x30
    double _lineSpace; // +0x38
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)showType;
- (void)setShowType:(unsigned int)arg1;
- (unsigned int)textAlignmentType;
- (void)setTextAlignmentType:(unsigned int)arg1;
- (long long)textVerticalAlignmentType;
- (void)setTextVerticalAlignmentType:(long long)arg1;
- (unsigned int)fontSize;
- (void)setFontSize:(unsigned int)arg1;
- (unsigned int)maxLines;
- (void)setMaxLines:(unsigned int)arg1;
- (id)fontColorStr;
- (void)setFontColorStr:(id)arg1;
- (int)fontType;
- (void)setFontType:(int)arg1;
- (double)lineSpace;
- (void)setLineSpace:(double)arg1;
- (void).cxx_destruct;
@end
