@interface FavoritesLivePhoto : NSObject
{
    int _fileType; // +0x8
    unsigned int _duration; // +0xc
    unsigned long long _size; // +0x10
    NSString * _md5; // +0x18
    NSString * _fileid; // +0x20
    NSString * _aeskey; // +0x28
    NSString * _sourcePath; // +0x30
    FavoritesLivePhoto * _middle; // +0x38
}
- (int)fileType;
- (void)setFileType:(int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)fileid;
- (void)setFileid:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)sourcePath;
- (void)setSourcePath:(id)arg1;
- (id)middle;
- (void)setMiddle:(id)arg1;
- (void).cxx_destruct;
@end
