@interface WCFinderGroupLiveChatSaveToLocalFileHandler : WCFinderGroupLiveChatSaveToLocalBaseHandler
{
    unsigned int _lastCRC32; // +0x8
    NSString * _filePath; // +0x10
}
- (BOOL)save:(id)arg1 filePath:(id)arg2;
- (BOOL)checkFreeTmpSpaceWriteSize:(unsigned long long)arg1;
- (id)loadWithFilePath:(id)arg1;
- (void)clear;
- (BOOL)finishSaveAndUpdateTag:(id)arg1;
- (BOOL)finishSaveAndUpdateTag:(id)arg1 tag:(unsigned long long)arg2;
- (void)setupFilePath:(id)arg1;
- (unsigned int)lastCRC32;
- (void)setLastCRC32:(unsigned int)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
@end

