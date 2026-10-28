@interface WCUserFileScanOperation : WCSilentTask
{
    BOOL _shouldQuickIgnoreScan; // +0x8
    BOOL _silentTaskEnabled; // +0x9
    BOOL _isCancelled; // +0xa
    id /* block */ _customFileOperation; // +0x10
    id /* block */ _customPreFileCompetion; // +0x18
    id /* block */ _customAfterFileCompletion; // +0x20
    NSDictionary * _scanFolderConfig; // +0x28
    NSMutableArray * _scanFolderItemStack; // +0x30
}
- (id)initWithPreAction:(id /* block */)arg1 afterAction:(id /* block */)arg2 fileAction:(id /* block */)arg3;
- (void)start;
- (void)scanUserDirectory;
- (void)runLoop;
- (void)scanFolderBeginWithParentPath:(id)arg1 scanType:(unsigned long long)arg2 depth:(unsigned long long)arg3;
- (void)push_scanFolderBeginWithParentPath:(id)arg1 scanType:(unsigned long long)arg2 depth:(unsigned long long)arg3;
- (BOOL)pop_scanFolderBegin;
- (void)cancel;
- (BOOL)shouldQuickIgnoreScan;
- (void)setShouldQuickIgnoreScan:(BOOL)arg1;
- (id /* block */)customFileOperation;
- (void)setCustomFileOperation:(id /* block */)arg1;
- (id /* block */)customPreFileCompetion;
- (void)setCustomPreFileCompetion:(id /* block */)arg1;
- (id /* block */)customAfterFileCompletion;
- (void)setCustomAfterFileCompletion:(id /* block */)arg1;
- (id)scanFolderConfig;
- (void)setScanFolderConfig:(id)arg1;
- (id)scanFolderItemStack;
- (void)setScanFolderItemStack:(id)arg1;
- (BOOL)silentTaskEnabled;
- (void)setSilentTaskEnabled:(BOOL)arg1;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
