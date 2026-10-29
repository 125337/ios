@interface FavCdnInfo : NSObject
{
    unsigned int _fileType; // +0x8
    unsigned int _fileSize; // +0xc
    NSString * _cdnUrl; // +0x10
    NSString * _aesKey; // +0x18
}
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (unsigned int)fileType;
- (void)setFileType:(unsigned int)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end
