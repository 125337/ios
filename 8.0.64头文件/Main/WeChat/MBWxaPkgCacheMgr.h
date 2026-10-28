@interface MBWxaPkgCacheMgr : NSObject
{
    MBWxaPkgCacheLogic * pkgInfoCacheLogic; // +0x8
}
- (id)initWithPkgPath:(id)arg1 bizName:(id)arg2;
- (void)dealloc;
- (BOOL)loadPkg:(id)arg1 bizName:(id)arg2;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (stat)statWithFullUrl:(id)arg1 error:(id *)arg2;
- (BOOL)hasLocalCacheDataWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4 prefix:(id)arg5 suffix:(id)arg6;
- (void).cxx_destruct;
@end
