@interface RoamBackupPackageManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<affroam::RoamBackupPackageManagerCppCover> cpp_cover; // +0x80
    weak_ptr<affroam::RoamBackupPackageManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<affroam::RoamBackupPackageManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)createPackagesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)createPackagesAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)createPackagesCrossPlatformAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)createPackagesCrossPlatformAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getAllPackagesAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)getAllPackagesAsync:(BOOL)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getAllPackagesCrossPlatformAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)getAllPackagesCrossPlatformAsync:(BOOL)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)getPackageById:(unsigned long long)arg1;
- (void)updatePackagesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePackagesAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)updatePackagesCrossPlatformAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePackagesCrossPlatformAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)deletePackagesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)deletePackagesAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)deletePackagesCrossPlatformAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)deletePackagesCrossPlatformAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (int)resetManager;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
