@interface WCAdTouchParticleInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _basicRemWidth; // +0x8
    int _basicRootFontSize; // +0xc
    NSString * _imgUrl; // +0x10
    double _imgWidth; // +0x18
    double _imgHeight; // +0x20
    long long _birthRateType; // +0x28
    double _scale; // +0x30
    double _scaleRange; // +0x38
    double _scaleSpeed; // +0x40
    double _alphaRange; // +0x48
    double _lifetime; // +0x50
    double _velocity; // +0x58
    double _velocityRange; // +0x60
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)lifetime;
- (BOOL)isValid;
- (int)basicRemWidth;
- (void)setBasicRemWidth:(int)arg1;
- (int)basicRootFontSize;
- (void)setBasicRootFontSize:(int)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (double)imgWidth;
- (void)setImgWidth:(double)arg1;
- (double)imgHeight;
- (void)setImgHeight:(double)arg1;
- (long long)birthRateType;
- (void)setBirthRateType:(long long)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (double)scaleRange;
- (void)setScaleRange:(double)arg1;
- (double)scaleSpeed;
- (void)setScaleSpeed:(double)arg1;
- (double)alphaRange;
- (void)setAlphaRange:(double)arg1;
- (void)setLifetime:(double)arg1;
- (double)velocity;
- (void)setVelocity:(double)arg1;
- (double)velocityRange;
- (void)setVelocityRange:(double)arg1;
- (void).cxx_destruct;
@end
