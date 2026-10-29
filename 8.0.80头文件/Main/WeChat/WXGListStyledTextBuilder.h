@interface WXGListStyledTextBuilder : NSObject
{
    float _offsetX; // +0x8
    float _offsetY; // +0xc
    float _maxWidth; // +0x10
    float _sepX; // +0x14
    int _maxLine; // +0x18
    NSString * _prefixText; // +0x20
    NSString * _content; // +0x28
    UIFont * _font; // +0x30
    UIColor * _color; // +0x38
}
- (id)init;
- (id)build;
- (id)prefixText;
- (void)setPrefixText:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (float)offsetX;
- (void)setOffsetX:(float)arg1;
- (float)offsetY;
- (void)setOffsetY:(float)arg1;
- (float)maxWidth;
- (void)setMaxWidth:(float)arg1;
- (float)sepX;
- (void)setSepX:(float)arg1;
- (int)maxLine;
- (void)setMaxLine:(int)arg1;
- (void).cxx_destruct;
@end
