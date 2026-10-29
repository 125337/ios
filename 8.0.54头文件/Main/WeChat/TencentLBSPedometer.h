@interface TencentLBSPedometer : NSObject
{
    BOOL _isStart; // +0x8
    id _pedometer; // +0x10
    NSOperationQueue * _queue; // +0x18
    double _version; // +0x20
}
+ (BOOL)isStepCountingAvailable;
- (id)init;
- (void)startPedometerUpdatesFromDate:(id)arg1 withPedometerHandler:(id /* block */)arg2;
- (void)stopPedometerUpdates;
- (id)pedometer;
- (void)setPedometer:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (double)version;
- (void)setVersion:(double)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (void).cxx_destruct;
@end

