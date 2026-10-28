@interface WCPatternCacheMgr : NSObject
{
    NSMutableDictionary * m_cache; // +0x8
    BOOL m_needWriteBack; // +0x10
    BOOL m_needLoadData; // +0x11
}
- (id)pathForData;
- (void)tryLoadData;
- (void)trySaveData;
- (id)init;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (unsigned long long)onServiceCleanCache;
- (void)tryGetWCDataItemPattern:(id)arg1;
- (void).cxx_destruct;
@end
