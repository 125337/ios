@interface RoamBackupper : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    RoamBackupperCppCover cpp_cover; // +0x80
    weak_ptr<affroam::RoamBackupperDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<affroam::RoamBackupperDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (int)initialize:(unsigned long long)arg1;
- (id)getPackage;
- (id)newBackupTask:(id)arg1;
- (id)newRestoreTask:(id)arg1;
- (void)getBackedUpConversationListAsync:(unsigned long long)arg1 toTime:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)getBackedUpConversationListAsync:(unsigned long long)arg1 toTime:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteBackupDataAsync:(id)arg1 deleteAll:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)deleteBackupDataAsync:(id)arg1 deleteAll:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)setupAutoBackupEvent:(id)arg1;
- (void)stopAutoBackupTimer;
- (void)getMediaIdListAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getMediaIdListAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)loadMediaAsync:(id)arg1 msgSvrId:(unsigned long long)arg2 msgCreateTime:(unsigned long long)arg3 mediaId:(id)arg4 completion:(id /* block */)arg5;
- (void)loadMediaAsync:(id)arg1 msgSvrId:(unsigned long long)arg2 msgCreateTime:(unsigned long long)arg3 mediaId:(id)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)mediaLoaded:(unsigned long long)arg1 error:(int)arg2;
- (id)getPackageFlags;
- (int)setPackageFlags:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

