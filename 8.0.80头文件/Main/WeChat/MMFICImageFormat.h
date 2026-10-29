@interface MMFICImageFormat : NSObject <NSCopying>
{
    NSString * _name; // +0x8
    NSString * _family; // +0x10
    CGSize _imageSize; // +0x18
    CGSize _pixelSize; // +0x28
    unsigned int _maxImgCount; // +0x38
    unsigned int _cpuzSize; // +0x3c
    unsigned int _pageSize; // +0x40
    unsigned int _version; // +0x44
}
+ (id)formatWithName:(id)arg1 family:(id)arg2 imageSize:(CGSize)arg3 maxImgCount:(unsigned int)arg4 version:(unsigned int)arg5;
- (id)init;
- (void)setImageSize:(CGSize)arg1;
- (unsigned int)bitmapInfo;
- (unsigned int)bytesPerPixel;
- (unsigned int)bitsPerComponent;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)family;
- (void)setFamily:(id)arg1;
- (CGSize)imageSize;
- (CGSize)pixelSize;
- (unsigned int)maxImgCount;
- (void)setMaxImgCount:(unsigned int)arg1;
- (unsigned int)cpuzSize;
- (void)setCpuzSize:(unsigned int)arg1;
- (unsigned int)pageSize;
- (void)setPageSize:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
