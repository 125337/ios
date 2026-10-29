@interface FileDetailMinimizeKeeperMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * _lock; // +0x8
    OrderedDictionary * _fileVcDic; // +0x10
}
- (id)getMinimizeViewControllerWithKey:(id)arg1;
- (void)addMinimizeViewController:(id)arg1 forKey:(id)arg2;
- (void)removeMinimizeViewControllerWithKey:(id)arg1;
- (BOOL)hasAudioPlayingTask;
- (BOOL)disablePDFView;
- (void)onServiceInit;
- (void)onMemoryWarning:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)fileVcDic;
- (void)setFileVcDic:(id)arg1;
- (void).cxx_destruct;
@end

