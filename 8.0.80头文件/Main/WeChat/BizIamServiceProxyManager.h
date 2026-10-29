@interface BizIamServiceProxyManager : MMUserService <BrandFansMsgSessionMgrExt, MMServiceProtocol>
{
    id <BizIamServiceProxyInterface> _brandServiceProxy; // +0x8
    id <BizIamServiceProxyInterface> _photoServiceProxy; // +0x10
    IamBizInteractiveNativeToCppManager * _interactiveManager; // +0x18
    IamBizNativeToCppManager * _nativeToCppManager; // +0x20
    MMLRUCache * _notifyUUIDCache; // +0x28
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (id)serviceProxyForType:(int)arg1;
- (id)serviceProxyForTypeValue:(unsigned int)arg1;
- (void)handleBizAppMsgRedDotNotifyData:(id)arg1 uuid:(id)arg2;
- (void)onBrandFansMsgUnreadCountUpdatedForBizuin:(id)arg1 serviceType:(int)arg2 count:(unsigned long long)arg3 incrementUpdated:(BOOL)arg4;
- (id)brandServiceProxy;
- (void)setBrandServiceProxy:(id)arg1;
- (id)photoServiceProxy;
- (void)setPhotoServiceProxy:(id)arg1;
- (id)interactiveManager;
- (void)setInteractiveManager:(id)arg1;
- (id)nativeToCppManager;
- (void)setNativeToCppManager:(id)arg1;
- (id)notifyUUIDCache;
- (void)setNotifyUUIDCache:(id)arg1;
- (void).cxx_destruct;
@end
