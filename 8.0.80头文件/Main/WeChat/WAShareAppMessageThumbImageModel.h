@interface WAShareAppMessageThumbImageModel : NSObject
{
    BOOL _shouldCrop; // +0x8
    BOOL _useOriginImageForSignature; // +0x9
    unsigned long long _type; // +0x10
    NSData * _localImageData; // +0x18
    NSData * _originImageData; // +0x20
    NSString * _webImageURLString; // +0x28
    CGSize _cropSize; // +0x30
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)localImageData;
- (void)setLocalImageData:(id)arg1;
- (id)originImageData;
- (void)setOriginImageData:(id)arg1;
- (id)webImageURLString;
- (void)setWebImageURLString:(id)arg1;
- (BOOL)shouldCrop;
- (void)setShouldCrop:(BOOL)arg1;
- (CGSize)cropSize;
- (void)setCropSize:(CGSize)arg1;
- (BOOL)useOriginImageForSignature;
- (void)setUseOriginImageForSignature:(BOOL)arg1;
- (void).cxx_destruct;
@end
