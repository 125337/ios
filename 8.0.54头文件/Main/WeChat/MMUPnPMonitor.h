@interface MMUPnPMonitor : MMUserService <KSUPnPDeviceDescriptionEvents, KSUPnPActionEvents, MMServiceProtocol>
- (id)init;
- (void)initMonitor;
- (void)reportEvent:(long long)arg1 withDevice:(id)arg2 action:(id)arg3 record:(id)arg4;
- (void)UPnPDevice:(id)arg1 didCompleteRequestingDescriptionWithRecord:(id)arg2;
- (void)UPnPAction:(id)arg1 didCompleteTakingActionWithRecord:(id)arg2;
@end

