@interface ExtDeviceStatusManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<ext_device::ExtDeviceStatusManagerCppCover> cpp_cover; // +0x80
    weak_ptr<ext_device::ExtDeviceStatusManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<ext_device::ExtDeviceStatusManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onNewSyncOnlineStatus:(int)arg1 version:(int)arg2 language:(id)arg3;
- (id)getOnlineDeviceList;
- (void)subscribeOnlineDeviceInfoChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeOnlineDeviceInfoChangeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeOnlineDeviceInfoChangeEvent:(id)arg1;
- (void)onOnlineDeviceBannerInfoChange;
- (void)subscribeOnlineDeviceBannerInfoChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeOnlineDeviceBannerInfoChangeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeOnlineDeviceBannerInfoChangeEvent:(id)arg1;
- (id)getDeviceBannerIconName;
- (id)getFirstOnlineDeviceServerWording;
- (void)handleNewXML:(id)arg1 content:(id)arg2;
- (void)syncRecordAsync:(id)arg1 initiateTime:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)syncRecordAsync:(id)arg1 initiateTime:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)cleanSyncTask:(BOOL)arg1 uuid:(id)arg2 onlyInvalid:(BOOL)arg3;
- (int)getSyncRecordStatus:(id)arg1;
- (void)subscribeSyncStatusChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeSyncStatusChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeSyncStatusChangedEvent:(id)arg1;
- (void)subscribeOverallSyncStatusChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeOverallSyncStatusChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeOverallSyncStatusChangedEvent:(id)arg1;
- (int)getDayOfSync:(id)arg1;
- (BOOL)getSyncRecordTrigger:(unsigned long long)arg1 iconType:(int)arg2;
- (void)fetchSyncRecordTriggerAsync:(unsigned long long)arg1 iconType:(int)arg2 completion:(id /* block */)arg3;
- (void)fetchSyncRecordTriggerAsync:(unsigned long long)arg1 iconType:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
