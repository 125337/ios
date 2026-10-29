@interface TPDownloadProxyFactory : NSObject
{
    NSMutableDictionary * _tpDownloadProxyDic; // +0x8
    NSLock * _proxyMapLock; // +0x10
}
+ (id)sharedInstance;
- (id)getTPDownloadProxy:(int)arg1;
- (id)init;
- (id)tpDownloadProxyDic;
- (void)setTpDownloadProxyDic:(id)arg1;
- (id)proxyMapLock;
- (void)setProxyMapLock:(id)arg1;
- (void).cxx_destruct;
@end
