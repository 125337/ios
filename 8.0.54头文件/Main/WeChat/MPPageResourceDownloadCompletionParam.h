@interface MPPageResourceDownloadCompletionParam : NSObject
{
    BOOL _isPatch; // +0x8
    BOOL _hasPatchMD5; // +0x9
    BOOL _isZip; // +0xa
    unsigned int _downloadedSize; // +0xc
    NSString * _filePath; // +0x10
    NSError * _error; // +0x18
}
- (BOOL)isPatch;
- (void)setIsPatch:(BOOL)arg1;
- (BOOL)hasPatchMD5;
- (void)setHasPatchMD5:(BOOL)arg1;
- (BOOL)isZip;
- (void)setIsZip:(BOOL)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned int)downloadedSize;
- (void)setDownloadedSize:(unsigned int)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end

