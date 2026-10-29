@interface CdnUploadWeappMediaInfo : NSObject
{
    BOOL _isStorageMode; // +0x8
    int _fileType; // +0xc
    int _appType; // +0x10
    int _bizid; // +0x14
    int _snsUploadVersion; // +0x18
    NSString * _fileKey; // +0x20
    NSString * _filePath; // +0x28
    NSString * _thumbFilePath; // +0x30
    NSData * _fileData; // +0x38
    NSData * _thumbFileData; // +0x40
}
- (int)fileType;
- (void)setFileType:(int)arg1;
- (int)appType;
- (void)setAppType:(int)arg1;
- (int)bizid;
- (void)setBizid:(int)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)thumbFilePath;
- (void)setThumbFilePath:(id)arg1;
- (id)fileData;
- (void)setFileData:(id)arg1;
- (id)thumbFileData;
- (void)setThumbFileData:(id)arg1;
- (BOOL)isStorageMode;
- (void)setIsStorageMode:(BOOL)arg1;
- (int)snsUploadVersion;
- (void)setSnsUploadVersion:(int)arg1;
- (void).cxx_destruct;
@end
