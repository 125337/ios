@interface MMFPSMeter : MMRootService <MMServiceProtocol>
{
    NSObject<OS_dispatch_source> * _timer; // +0x8
    RingBuffer<SampleRecord, 16UL> _history; // +0x10
    SlotArray<3UL> _slots; // +0x120
    double _timerInterval; // +0x158
    NSObject<OS_dispatch_queue> * _queue; // +0x160
}
- (void)onServiceInit;
- (id)queue;
- (void)onServiceClearData;
- (void)start:(long long)arg1;
- (void)stop:(long long)arg1;
- (void)stopAll;
- (void)_add:(long long)arg1;
- (void)_remove:(long long)arg1;
- (void)_reset;
- (void)_update;
- (void)_schedule:(double)arg1;
- (void)_cancel;
- (void)_sample;
- (int)_averageFPS:(int)arg1;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
