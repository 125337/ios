@interface WCCanvasComponentPureImageInfo : MMObject <NSCoding>
{
    BOOL _enableQRScan; // +0x8
    BOOL _needUpdateQrUrl; // +0x9
    NSString * _pureImageUrl; // +0x10
    double _pureImageWidth; // +0x18
    double _pureImageHeight; // +0x20
    NSString * _bgColor; // +0x28
    double _bgColorAlpha; // +0x30
    double _cornerRadius; // +0x38
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pureImageUrl;
- (void)setPureImageUrl:(id)arg1;
- (double)pureImageWidth;
- (void)setPureImageWidth:(double)arg1;
- (double)pureImageHeight;
- (void)setPureImageHeight:(double)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (double)bgColorAlpha;
- (void)setBgColorAlpha:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (BOOL)enableQRScan;
- (void)setEnableQRScan:(BOOL)arg1;
- (BOOL)needUpdateQrUrl;
- (void)setNeedUpdateQrUrl:(BOOL)arg1;
- (void).cxx_destruct;
@end

