@interface MJCdnUploadRequest : NSObject
{
    int _appType; // +0x8
    int _fileType; // +0xc
    NSString * _taskKey; // +0x10
    NSString * _filePath; // +0x18
}
- (id)initWithTaskKey:(id)arg1;
- (id)taskKey;
- (int)appType;
- (void)setAppType:(int)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (int)fileType;
- (void)setFileType:(int)arg1;
- (void).cxx_destruct;
@end
