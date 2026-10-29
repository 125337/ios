@interface WCCanvasComponentHalfRandomCardRotateAnimInfo : MMObject <NSCoding>
{
    NSString * _animationImg; // +0x8
    double _imgWidth; // +0x10
    double _imgHeight; // +0x18
    NSString * _animationColor; // +0x20
    double _animationColorAlpha; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)animationImg;
- (void)setAnimationImg:(id)arg1;
- (double)imgWidth;
- (void)setImgWidth:(double)arg1;
- (double)imgHeight;
- (void)setImgHeight:(double)arg1;
- (id)animationColor;
- (void)setAnimationColor:(id)arg1;
- (double)animationColorAlpha;
- (void)setAnimationColorAlpha:(double)arg1;
- (void).cxx_destruct;
@end
