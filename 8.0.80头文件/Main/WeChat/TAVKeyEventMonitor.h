@interface TAVKeyEventMonitor : NSObject
{
    BOOL _enableAutoReport; // +0x8
    id <TAVKeyEventMonitorObserver> _observer; // +0x10
}
+ (id)shared;
- (id)init;
- (BOOL)enableAutoReport;
- (void)setEnableAutoReport:(BOOL)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void).cxx_destruct;
@end
