@interface MJEmoticonPickerItem : NSObject
{
    BOOL _isWxAM; // +0x8
    NSString * _filePath; // +0x10
    unsigned long long _type; // +0x18
    NSData * _data; // +0x20
    NSString * _md5; // +0x28
    CGSize _imageSize; // +0x30
}
- (id)initWithEmoticonMd5:(id)arg1;
- (void)saveEmoticon:(id /* block */)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (BOOL)isWxAM;
- (void)setIsWxAM:(BOOL)arg1;
- (CGSize)imageSize;
- (void)setImageSize:(CGSize)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (void).cxx_destruct;
@end

