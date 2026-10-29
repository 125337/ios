@interface MagicBrushFileSystem : MagicBrushFileSystemBizRegistry
{
    id <IMBFileSystem> _mAssetsFS; // +0x8
    id <IMBFileSystem> _mWxaPkgFS; // +0x10
    id <IMBFileSystem> _mFlattenFS; // +0x18
    NSArray * _mExternalList; // +0x20
}
- (id)initWithPara:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 externalFS:(id)arg5;
- (void)dealloc;
- (id)addNonFlattenFileSystem;
- (void)addExternalFileSystem:(id)arg1;
- (id)getFlattenFileSystem;
- (id)getPkgFileSystem:(id)arg1 bizName:(id)arg2 prefix:(id)arg3;
- (void)addPkgFS:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 externalFS:(id)arg5;
- (void)addCustomPkgFS:(id)arg1 customName:(id)arg2 prefix:(id)arg3;
- (id)mAssetsFS;
- (void)setMAssetsFS:(id)arg1;
- (id)mWxaPkgFS;
- (void)setMWxaPkgFS:(id)arg1;
- (id)mFlattenFS;
- (void)setMFlattenFS:(id)arg1;
- (id)mExternalList;
- (void)setMExternalList:(id)arg1;
- (void).cxx_destruct;
@end

