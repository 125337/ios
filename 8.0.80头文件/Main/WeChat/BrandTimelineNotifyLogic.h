@interface BrandTimelineNotifyLogic : MMObject <BrandTimelineMsgMgrExt>
{
    unsigned int _notifyCount; // +0x8
    id <BrandTimelineNotifyLogicDelegate> _delegate; // +0x10
    CMessageWrap * _latestMsgWrap; // +0x18
    long long _creationCenterNotifyCount; // +0x20
    long long _serviceType; // +0x28
}
- (id)init;
- (id)initWithServiceType:(long long)arg1;
- (void)innerUpdate;
- (void)notifyToSimulatedNativeCreationCenter:(long long)arg1 buffer:(id)arg2;
- (void)onNotificationUnreadCountChange;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onAddNotification:(id)arg1;
- (void)onUpdateNotification:(id)arg1 serviceType:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)notifyCount;
- (id)latestMsgWrap;
- (long long)creationCenterNotifyCount;
- (long long)serviceType;
- (void)setServiceType:(long long)arg1;
- (void).cxx_destruct;
@end
