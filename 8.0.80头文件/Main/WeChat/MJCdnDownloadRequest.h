@interface MJCdnDownloadRequest : NSObject
{
    short _appType; // +0x8
    int _fileType; // +0xc
    NSString * _taskKey; // +0x10
    NSString * _fileCdnURL; // +0x18
    NSString * _filePath; // +0x20
}
- (id)initWithTaskKey:(id)arg1 fileCdnURL:(id)arg2;
- (id)taskKey;
- (id)fileCdnURL;
- (short)appType;
- (void)setAppType:(short)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (int)fileType;
- (void)setFileType:(int)arg1;
- (void).cxx_destruct;
@end
