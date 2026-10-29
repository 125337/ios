@interface RoamManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<affroam::RoamManagerCppCover> cpp_cover; // +0x80
    weak_ptr<affroam::RoamManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<affroam::RoamManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (int)initialize:(id)arg1 userId:(id)arg2 phoneId:(id)arg3 isWebdevice:(BOOL)arg4;
- (BOOL)debugEncrypt256;
- (void)unInit;
- (void)scanDevices;
- (void)networkChanged:(id)arg1;
- (void)setOuterAutoTestMode:(BOOL)arg1;
- (void)appForegroundStateChanged:(BOOL)arg1;
- (void)appBackupUIStateChanged:(BOOL)arg1;
- (void)subscribeDeviceDiscoveredEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDeviceDiscoveredEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDeviceDiscoveredEvent:(id)arg1;
- (void)subscribeAutoBackupEventEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeAutoBackupEventEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeAutoBackupEventEvent:(id)arg1;
- (void)subscribeDeleteBackupDataProgressEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDeleteBackupDataProgressEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDeleteBackupDataProgressEvent:(id)arg1;
- (void)subscribeResumeQuitedTaskEventEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeResumeQuitedTaskEventEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeResumeQuitedTaskEventEvent:(id)arg1;
- (void)subscribeDeviceStartConnectEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDeviceStartConnectEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDeviceStartConnectEvent:(id)arg1;
- (id)checkIncompleteTask;
- (id)getReportData:(unsigned long long)arg1;
- (id)getBackupRecord:(unsigned long long)arg1;
- (id)getStandAlonePackageInfo:(unsigned long long)arg1;
- (void)setPauseAutoBackupForTimes:(unsigned long long)arg1 pauseTime:(unsigned long long)arg2;
- (void)setAutoBackupLastSuccessTime:(unsigned long long)arg1 lastSuccessTime:(unsigned long long)arg2;
- (id)getAllStandAlonePackageInfo;
- (id)getDebugInfo;
- (BOOL)doDebugCmd:(unsigned long long)arg1 cmdArgs:(id)arg2;
- (void)triggerAutoBackupCheck;
- (void)setScheduleLevel:(int)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
