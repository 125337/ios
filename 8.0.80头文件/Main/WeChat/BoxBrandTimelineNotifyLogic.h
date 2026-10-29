@interface BoxBrandTimelineNotifyLogic : MMObject <BoxBrandTimelineMsgMgrExt>
{
    unsigned int _notifyCount; // +0x8
    id <BoxBrandTimelineNotifyLogicDelegate> _delegate; // +0x10
    CMessageWrap * _latestMsgWrap; // +0x18
    long long _creationCenterNotifyCount; // +0x20
}
- (id)init;
- (void)innerUpdate;
- (void)notifyToSimulatedNativeCreationCenter:(long long)arg1 buffer:(id)arg2;
- (void)onBoxNotificationUnreadCountChange;
- (void)onBoxDelBrandTimelineMsgBySession:(id)arg1;
- (void)onBoxAddNotification:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)notifyCount;
- (id)latestMsgWrap;
- (long long)creationCenterNotifyCount;
- (void).cxx_destruct;
@end
