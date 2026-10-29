@interface WCLanDeviceKissFileMsg : MMObject
{
    BOOL _isContainDetail; // +0x8
    NSString * _fileName; // +0x10
    NSString * _filePath; // +0x18
    NSString * _fileMD5; // +0x20
    unsigned long long _fileSize; // +0x28
    NSString * _fileExt; // +0x30
}
- (BOOL)isContainDetail;
- (void)setIsContainDetail:(BOOL)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (void).cxx_destruct;
@end

