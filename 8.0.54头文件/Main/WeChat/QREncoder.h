@interface QREncoder : NSObject
{
    UIImage * _image; // +0x8
}
+ (shared_ptr<unsigned char>)imageDataFromImage:(id)arg1;
+ (unsigned int)getCoverColorWithCurrentIndex:(int)arg1 baseSize:(CGSize)arg2 baseColor:(unsigned int)arg3 coverRect:(CGRect)arg4 coverImageData:(shared_ptr<unsigned char>)arg5;
- (void)dealloc;
- (id)AESEncryptString:(id)arg1 withPassphrase:(id)arg2;
- (id)encodeCStringWithECLevel:(int)arg1 version:(int)arg2 cstring:(const char *)arg3;
- (id)encodeWithECLevel:(int)arg1 version:(int)arg2 string:(id)arg3 AESPassphrase:(id)arg4;
- (id)encodeWithECLevel:(int)arg1 version:(int)arg2 string:(id)arg3;
- (id)renderDataMatrix:(id)arg1 imageDimension:(int)arg2 coverImage:(id)arg3;
- (id)renderDataMatrix:(id)arg1 imageDimension:(int)arg2;
- (int)getApproximatePadding:(id)arg1 imageDimension:(int)arg2;
- (id)image;
- (void)setImage:(id)arg1;
@end

