@interface WXImageObject : NSObject
{
    NSData * imageData; // +0x8
    NSString * _imgDataHash; // +0x10
    NSString * _miniprogramAppid; // +0x18
    NSString * _miniprogramPath; // +0x20
}
+ (id)object;
- (id)init;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)imgDataHash;
- (void)setImgDataHash:(id)arg1;
- (id)miniprogramAppid;
- (void)setMiniprogramAppid:(id)arg1;
- (id)miniprogramPath;
- (void)setMiniprogramPath:(id)arg1;
- (void).cxx_destruct;
@end

