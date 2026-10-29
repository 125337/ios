@interface CBTCoopV3ForwardService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleOpenHistory:(id)arg1;
- (BOOL)tryOpenLocalHistoryWithForwardMsgId:(id)arg1 title:(id)arg2 desc:(id)arg3 historyXml:(id)arg4 inViewController:(id)arg5;
- (void).cxx_destruct;
@end
