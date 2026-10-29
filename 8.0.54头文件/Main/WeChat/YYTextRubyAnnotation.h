@interface YYTextRubyAnnotation : NSObject <NSCopying, NSCoding>
{
    unsigned char _alignment; // +0x8
    unsigned char _overhang; // +0x9
    double _sizeFactor; // +0x10
    NSString * _textBefore; // +0x18
    NSString * _textAfter; // +0x20
    NSString * _textInterCharacter; // +0x28
    NSString * _textInline; // +0x30
}
+ (id)rubyWithCTRubyRef:(__CTRubyAnnotation *)arg1;
- (id)init;
- (__CTRubyAnnotation *)CTRubyAnnotation;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned char)alignment;
- (void)setAlignment:(unsigned char)arg1;
- (unsigned char)overhang;
- (void)setOverhang:(unsigned char)arg1;
- (double)sizeFactor;
- (void)setSizeFactor:(double)arg1;
- (id)textBefore;
- (void)setTextBefore:(id)arg1;
- (id)textAfter;
- (void)setTextAfter:(id)arg1;
- (id)textInterCharacter;
- (void)setTextInterCharacter:(id)arg1;
- (id)textInline;
- (void)setTextInline:(id)arg1;
- (void).cxx_destruct;
@end

