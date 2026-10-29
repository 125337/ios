@interface MagicBrushPublicServiceFileSystem : MagicBrushFileSystemBizRegistry
{
    id <IMBFileSystem> _mAssetsFS; // +0x8
    id <IMBFileSystem> _mWxaPkgFS; // +0x10
    NSMutableSet * _mBizNameList; // +0x18
}
- (id)initWithPara:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 bizNameList:(id)arg5;
- (void)dealloc;
- (id)precondition:(id)arg1;
- (id)findAppropriateFileSystem:(id)arg1;
- (id)findOtherBizName:(id)arg1;
- (void)provideFileSystemList:(id)arg1;
- (id)getNonFlattenFileSystem:(id)arg1 prefix:(id)arg2;
- (id)getFlattenFileSystem:(id)arg1 prefix:(id)arg2;
- (id)getPkgFileSystem:(id)arg1 bizName:(id)arg2;
- (void)addPkgFS:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 externalFS:(id)arg5;
- (id)mAssetsFS;
- (void)setMAssetsFS:(id)arg1;
- (id)mWxaPkgFS;
- (void)setMWxaPkgFS:(id)arg1;
- (id)mBizNameList;
- (void)setMBizNameList:(id)arg1;
- (void).cxx_destruct;
@end
