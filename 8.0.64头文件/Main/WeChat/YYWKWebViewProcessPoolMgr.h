@interface YYWKWebViewProcessPoolMgr : MMUserService <MMServiceProtocol, MMCleanCacheMgrExt>
{
    WKProcessPool * m_processPool; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)processPool;
- (void)onCacheMgrCleanCacheWarning;
- (void).cxx_destruct;
@end
