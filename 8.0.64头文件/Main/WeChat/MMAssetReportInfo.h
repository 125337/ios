@interface MMAssetReportInfo : MMObject
{
    BOOL _isVideo; // +0x8
    unsigned long long _fileSize; // +0x10
}
- (id)getReportDict;
- (BOOL)isVideo;
- (void)setIsVideo:(BOOL)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
@end
