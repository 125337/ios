@interface WCUserFileScanOperation : WCBackgroundTask
{
    BOOL _shouldQuickIgnoreScan; // +0x8
    BOOL _backgroundTaskEnabled; // +0x9
    BOOL _isCancelled; // +0xa
    unsigned int _slowdownCheckFileNum; // +0xc
    unsigned int _slowdownSleepMillisecond; // +0x10
    unsigned int _currentScanFileNum; // +0x14
    id /* block */ _customFileOperation; // +0x18
    id /* block */ _customPreFileCompetion; // +0x20
    id /* block */ _customAfterFileCompletion; // +0x28
    NSDictionary * _scanFolderConfig; // +0x30
    NSMutableArray * _scanFolderItemStack; // +0x38
}
- (id)initWithPreAction:(id /* block */)arg1 afterAction:(id /* block */)arg2 fileAction:(id /* block */)arg3;
- (void)start;
- (void)scanUserDiretory;
- (void)run;
- (void)scanFolderBeginWithParentPath:(id)arg1 scanType:(unsigned long long)arg2 depth:(unsigned long long)arg3;
- (void)push_scanFolderBeginWithParentPath:(id)arg1 scanType:(unsigned long long)arg2 depth:(unsigned long long)arg3;
- (BOOL)pop_scanFolderBegin;
- (void)cancel;
- (BOOL)shouldQuickIgnoreScan;
- (void)setShouldQuickIgnoreScan:(BOOL)arg1;
- (unsigned int)slowdownCheckFileNum;
- (void)setSlowdownCheckFileNum:(unsigned int)arg1;
- (unsigned int)slowdownSleepMillisecond;
- (void)setSlowdownSleepMillisecond:(unsigned int)arg1;
- (id /* block */)customFileOperation;
- (void)setCustomFileOperation:(id /* block */)arg1;
- (id /* block */)customPreFileCompetion;
- (void)setCustomPreFileCompetion:(id /* block */)arg1;
- (id /* block */)customAfterFileCompletion;
- (void)setCustomAfterFileCompletion:(id /* block */)arg1;
- (id)scanFolderConfig;
- (void)setScanFolderConfig:(id)arg1;
- (unsigned int)currentScanFileNum;
- (void)setCurrentScanFileNum:(unsigned int)arg1;
- (id)scanFolderItemStack;
- (void)setScanFolderItemStack:(id)arg1;
- (BOOL)backgroundTaskEnabled;
- (void)setBackgroundTaskEnabled:(BOOL)arg1;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end

