@interface MagicPkgDownload : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _dicDownloadingItem; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
- (void)onServiceInit;
- (void)downloadMagicPkg:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)UpdateFinish:(id)arg1 pkgPath:(id)arg2 unzipPath:(id)arg3;
- (BOOL)unzipDownloadUpdates:(id)arg1 unzipPath:(id)arg2;
- (void).cxx_destruct;
@end

