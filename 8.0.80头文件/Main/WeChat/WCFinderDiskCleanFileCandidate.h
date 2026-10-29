@interface WCFinderDiskCleanFileCandidate : NSObject
{
    NSString * _filePath; // +0x8
    long long _fileSize; // +0x10
    long long _fileTimestamp; // +0x18
}
- (id)initWithFilePath:(id)arg1 fileSize:(long long)arg2 fileTimestamp:(long long)arg3;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (long long)fileTimestamp;
- (void)setFileTimestamp:(long long)arg1;
- (void).cxx_destruct;
@end
