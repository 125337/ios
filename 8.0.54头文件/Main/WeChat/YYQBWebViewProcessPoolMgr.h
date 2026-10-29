@interface YYQBWebViewProcessPoolMgr : MMUserService <MMServiceProtocol, MMCleanCacheMgrExt>
{
    WKProcessPool * m_processPool; // +0x8
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)processPool;
- (void)removeProcessPool;
- (void)onCacheMgrCleanCacheWarning;
- (void).cxx_destruct;
@end

