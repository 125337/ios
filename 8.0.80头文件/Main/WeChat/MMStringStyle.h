@interface MMStringStyle : NSObject
{
    UIFont * _font; // +0x8
    UIColor * _textColor; // +0x10
    UIColor * _backgroundColor; // +0x18
    long long _underlineStyle; // +0x20
    UIColor * _underlineColor; // +0x28
    long long _strikethroughStyle; // +0x30
    UIColor * _strikethroughColor; // +0x38
    NSMutableDictionary * _attributes; // +0x40
}
- (id)init;
- (id)attributesDic;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setUnderlineStyle:(long long)arg1;
- (void)setUnderlineColor:(id)arg1;
- (void)setStrikethroughStyle:(long long)arg1;
- (void)setStrikethroughColor:(id)arg1;
- (id)font;
- (id)textColor;
- (id)backgroundColor;
- (long long)underlineStyle;
- (id)underlineColor;
- (long long)strikethroughStyle;
- (id)strikethroughColor;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (void).cxx_destruct;
@end
