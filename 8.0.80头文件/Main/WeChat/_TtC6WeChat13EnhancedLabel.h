@interface _TtC6WeChat13EnhancedLabel : NSObject
{
     storage; // +0x8
     primitiveStyle; // +0x20
     replaceModifiers; // +0x50
     styleModifiers; // +0x58
     drawModifiers; // +0x60
}
- (id)strokeWithColor:(id)arg1 width:(double)arg2;
- (id)placeholderArguments:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)foregroundColor;
- (void)setForegroundColor:(id)arg1;
- (long long)lineBreakMode;
- (void)setLineBreakMode:(long long)arg1;
- (long long)lineLimit;
- (void)setLineLimit:(long long)arg1;
- (id)parseEmoticon;
- (id)parsePlaceholderImage;
- (id)initWithString:(id)arg1;
- (id)resolve;
- (id)init;
- (void).cxx_destruct;
@end
