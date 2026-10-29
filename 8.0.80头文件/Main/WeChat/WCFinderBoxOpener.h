@interface WCFinderBoxOpener : NSObject
{
    MMUIViewController<BrandTLViewControllerProtocol> * _cacheTLVC; // +0x8
    MMTimer * _cacheCleanTimer; // +0x10
}
+ (BOOL)enableFinderBox;
- (id)init;
- (void)openFinderBoxFromVC:(id)arg1 source:(unsigned long long)arg2 sessionInfo:(id)arg3 rowIndexPath:(long long)arg4 completion:(id /* block */)arg5;
- (void)checkReleaseBrandTLWithNewExptConfig:(id)arg1;
- (void)setCacheTLVC:(id)arg1;
- (void)removeCacheVC;
- (void)resetCacheTLVCCleanTimer;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (id)cacheTLVC;
- (id)cacheCleanTimer;
- (void)setCacheCleanTimer:(id)arg1;
- (void).cxx_destruct;
@end
