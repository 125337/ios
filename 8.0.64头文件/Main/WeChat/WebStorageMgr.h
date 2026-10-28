@interface WebStorageMgr : MMUserService <MMServiceProtocol>
{
    WebStorageDb * _storageDb; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (long long)getAllMaxSize;
- (long long)getMaxSize:(id)arg1;
- (BOOL)checkIfSizeExceed:(id)arg1 NeedSize:(unsigned long long)arg2;
- (id)getStorage:(id)arg1 Key:(id)arg2;
- (BOOL)clearAllStorage:(id)arg1;
- (BOOL)clearStorage:(id)arg1 Key:(id)arg2;
- (BOOL)setStorage:(id)arg1 Key:(id)arg2 Value:(id)arg3 WeightStr:(id)arg4 ExpireTime:(long long)arg5;
- (void)kickOutStrategy:(id)arg1;
- (void)tryKickOutExpireFile;
- (void)tryKickOut:(id)arg1;
- (void)tryKickOutForAllAppId;
- (BOOL)cleanDirAndConfig:(id)arg1 DirPath:(id)arg2;
- (BOOL)cleanFileAndConfig:(id)arg1 Key:(id)arg2 FilePath:(id)arg3;
- (id)getAllConfig;
- (id)getAllGlobalConfig;
- (id)getAllFile:(id)arg1;
- (id)storageDb;
- (void)setStorageDb:(id)arg1;
- (void).cxx_destruct;
@end
