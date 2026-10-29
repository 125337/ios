@interface WCCanvasComponentSidebarInfo : MMObject <NSCoding>
{
    NSString * _textColor; // +0x8
    double _cornerRadius; // +0x10
    NSString * _bgColor; // +0x18
    double _bgColorAlpha; // +0x20
    NSArray * _layoutItems; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (double)bgColorAlpha;
- (void)setBgColorAlpha:(double)arg1;
- (id)layoutItems;
- (void)setLayoutItems:(id)arg1;
- (void).cxx_destruct;
@end

