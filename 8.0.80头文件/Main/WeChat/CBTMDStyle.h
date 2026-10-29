@interface CBTMDStyle : NSObject <NSCopying>
{
    UIFont * _font; // +0x8
    UIColor * _fontColor; // +0x10
    double _lineSpacing; // +0x18
    double _paragraphSpacing; // +0x20
    UIEdgeInsets _padding; // +0x28
}
+ (id)styleWithFontSize:(double)arg1;
+ (id)styleWithFontSize:(double)arg1 weight:(double)arg2;
+ (id)styleWithFontSize:(double)arg1 weight:(double)arg2 lineHeightScale:(double)arg3;
+ (id)styleWithFont:(id)arg1;
+ (id)styleWithFont:(id)arg1 lineHeightScale:(double)arg2;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)updateFontSize:(double)arg1;
- (void)updateLineHeightScale:(double)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)fontColor;
- (void)setFontColor:(id)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (double)paragraphSpacing;
- (void)setParagraphSpacing:(double)arg1;
- (UIEdgeInsets)padding;
- (void)setPadding:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
