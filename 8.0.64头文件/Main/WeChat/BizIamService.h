@interface BizIamService : MMUserService <BrandFansMsgSessionMgrExt, MMServiceProtocol>
{
    IamBizProfileNativeToCppManager * _profileManager; // +0x8
    IamBizPersonalCenterManager * _personalCenterManager; // +0x10
    IamBizPersonalCenterRedDotManager * _personalCenterRedDotManager; // +0x18
    IamBizInteractiveNativeToCppManager * _interactiveManager; // +0x20
    MMLRUCache * _notifyUUIDCache; // +0x28
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (id)profileManager;
- (id)personalCenterManager;
- (id)personalCenterRedDotManager;
- (id)interactiveManager;
- (void)handleBizAppMsgRedDotNotifyData:(id)arg1 uuid:(id)arg2;
- (void)onRedDotInfoUpdated:(id)arg1;
- (void)onBrandFansMsgUnreadCountUpdatedForBizuin:(id)arg1 count:(unsigned long long)arg2;
- (void)setProfileManager:(id)arg1;
- (void)setPersonalCenterManager:(id)arg1;
- (void)setPersonalCenterRedDotManager:(id)arg1;
- (void)setInteractiveManager:(id)arg1;
- (id)notifyUUIDCache;
- (void)setNotifyUUIDCache:(id)arg1;
- (void).cxx_destruct;
@end
