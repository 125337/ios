@interface CBTAsstSelectedFile : NSObject
{
    NSString * _localPath; // +0x8
    NSString * _displayPath; // +0x10
    NSString * _fileName; // +0x18
    unsigned long long _fileSize; // +0x20
    NSString * _fileExt; // +0x28
    UIImage * _thumbImage; // +0x30
}
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)displayPath;
- (void)setDisplayPath:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (void).cxx_destruct;
@end
