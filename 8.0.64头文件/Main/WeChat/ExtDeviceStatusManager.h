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
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
