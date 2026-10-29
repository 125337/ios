@interface BizIamServiceProxy : NSObject <BizIamServiceProxyInterface>
{
    int _serviceProxyType; // +0x8
    IamBizPersonalCenterManager * _personalCenterManager; // +0x10
    IamBizPersonalCenterRedDotManager * _personalCenterRedDotManager; // +0x18
    IamBizProfileNativeToCppManager * _profileManager; // +0x20
}
- (id)initWithType:(int)arg1;
- (void)handleBizAppMsgRedDotNotifyData:(id)arg1;
- (int)serviceProxyType;
- (void)setServiceProxyType:(int)arg1;
- (id)personalCenterManager;
- (void)setPersonalCenterManager:(id)arg1;
- (id)personalCenterRedDotManager;
- (void)setPersonalCenterRedDotManager:(id)arg1;
- (id)profileManager;
- (void)setProfileManager:(id)arg1;
- (void).cxx_destruct;
@end
