@interface MagicBrushFileSystemFactory : MMUserService <MMServiceProtocol>
{
    NSMapTable * _mBizFsMap; // +0x8
    NSMapTable * _mPublicServiceFsMap; // +0x10
    MemoryMappedKV * _mmkv; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)addBizFsMap:(id)arg1 bizFileSystem:(id)arg2;
- (void)removeBizFsMap:(id)arg1;
- (void)addPublicServiceFsMap:(id)arg1 bizFileSystem:(id)arg2;
- (void)removePublicServiceFsMap:(id)arg1;
- (id)getBizFileSystemWithCustom:(id)arg1 pkgPath:(id)arg2 customName:(id)arg3 prefix:(id)arg4;
- (id)publicServiceGetOrCreateBizFileSystem:(id)arg1;
- (id)getOrCreateBizFileSystem:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 externalFS:(id)arg5;
- (id)getOrCreatePublicServiceFileSystem:(id)arg1 pkgPath:(id)arg2 assetsFS:(id)arg3 bizNameSet:(id)arg4;
- (void)destroyBizPkgFileSystem:(id)arg1;
- (void)setFSLifeState:(id)arg1 state:(BOOL)arg2;
- (BOOL)getBizFsState:(id)arg1;
- (unsigned int)getBizFsOpenTime:(id)arg1;
- (id)getMBWxaFileSystem:(id)arg1 bizName:(id)arg2;
- (id)mBizFsMap;
- (void)setMBizFsMap:(id)arg1;
- (id)mPublicServiceFsMap;
- (void)setMPublicServiceFsMap:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end
