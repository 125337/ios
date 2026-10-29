@interface WCAdCardBtnAnimationInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    unsigned long long _animTime; // +0x8
    unsigned long long _animDelayTime; // +0x10
    NSString * _btnColor; // +0x18
    NSString * _btnBgColor; // +0x20
    NSString * _btnDarkColor; // +0x28
    NSString * _btnBgDarkColor; // +0x30
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (unsigned long long)animTime;
- (void)setAnimTime:(unsigned long long)arg1;
- (unsigned long long)animDelayTime;
- (void)setAnimDelayTime:(unsigned long long)arg1;
- (id)btnColor;
- (void)setBtnColor:(id)arg1;
- (id)btnBgColor;
- (void)setBtnBgColor:(id)arg1;
- (id)btnDarkColor;
- (void)setBtnDarkColor:(id)arg1;
- (id)btnBgDarkColor;
- (void)setBtnBgDarkColor:(id)arg1;
- (void).cxx_destruct;
@end
