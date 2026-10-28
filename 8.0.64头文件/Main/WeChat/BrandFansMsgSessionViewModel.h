@interface BrandFansMsgSessionViewModel : NSObject <BrandFansMsgSessionMgrExt>
{
    BOOL _notifyEnable; // +0x8
    unsigned int _systemNotificationCount; // +0xc
    id <BrandFansMsgSessionViewModelDelegate> _delegate; // +0x10
    BrandFansMsgSessionStorage * _sessionStorage; // +0x18
    BrandMsgNotification * _systemNotification; // +0x20
}
- (id)initWithSessionStorage:(id)arg1 systemNotification:(id)arg2 notifyEnable:(BOOL)arg3;
- (void)dealloc;
- (void)setup;
- (void)setupRedDotObservation;
- (id)brandSystemSessionData;
- (unsigned long long)msgSessionCount;
- (id)msgSessionCellViewModelAtIndex:(long long)arg1;
- (void)deleteMsgSession:(id)arg1;
- (void)didSelectFansMsgSessionAtIndex:(long long)arg1;
- (void)didClickSettingItem;
- (void)onRedDotUpdatedWithData:(id)arg1;
- (void)onBrandFansMsgSessionUpdatedForBizuin:(id)arg1;
- (void)onBrandMsgNotificationUpdatedForBizuin:(id)arg1 notification:(id)arg2;
- (void)onBrandFansMsgNotifyEnableUpdatedForBizuin:(id)arg1 enable:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (id)systemNotification;
- (void)setSystemNotification:(id)arg1;
- (unsigned int)systemNotificationCount;
- (void)setSystemNotificationCount:(unsigned int)arg1;
- (BOOL)notifyEnable;
- (void)setNotifyEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
