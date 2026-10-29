@interface BrandTimelineNotifyLogic : MMObject <BrandTimelineMsgMgrExt>
{
    unsigned int _notifyCount; // +0x8
    id <BrandTimelineNotifyLogicDelegate> _delegate; // +0x10
    CMessageWrap * _latestMsgWrap; // +0x18
    long long _creationCenterNotifyCount; // +0x20
}
- (id)init;
- (void)innerUpdate;
- (void)notifyToSimulatedNativeCreationCenter:(long long)arg1 buffer:(id)arg2;
- (void)onNotificationUnreadCountChange;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)notifyCount;
- (id)latestMsgWrap;
- (long long)creationCenterNotifyCount;
- (void).cxx_destruct;
@end

