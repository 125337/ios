@interface EcsSecretPresentInfo : MMObject <NSCopying>
{
    BOOL _isSecretPresent; // +0x8
    BOOL _isRevealed; // +0x9
    NSString * _secretImg; // +0x10
    NSString * _secretImgWithBow; // +0x18
    NSString * _orignialImg; // +0x20
    NSString * _secretTitle; // +0x28
    NSString * _secretSkuDescription; // +0x30
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)secretImg;
- (void)setSecretImg:(id)arg1;
- (id)secretImgWithBow;
- (void)setSecretImgWithBow:(id)arg1;
- (id)orignialImg;
- (void)setOrignialImg:(id)arg1;
- (id)secretTitle;
- (void)setSecretTitle:(id)arg1;
- (id)secretSkuDescription;
- (void)setSecretSkuDescription:(id)arg1;
- (BOOL)isSecretPresent;
- (void)setIsSecretPresent:(BOOL)arg1;
- (BOOL)isRevealed;
- (void)setIsRevealed:(BOOL)arg1;
- (void).cxx_destruct;
@end
