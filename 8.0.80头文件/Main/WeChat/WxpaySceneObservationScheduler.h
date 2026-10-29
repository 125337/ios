@interface WxpaySceneObservationScheduler : NSObject
{
    double _delay; // +0x8
    id /* block */ _scheduleAfter; // +0x10
    id /* block */ _observe; // +0x18
    unsigned long long _lastTicket; // +0x20
    unsigned long long _windowTicket; // +0x28
    unsigned long long _inFlightTicket; // +0x30
    BOOL _dirty; // +0x38
}
- (id)initWithWindowDelay:(double)arg1 scheduleAfter:(id /* block */)arg2 observe:(id /* block */)arg3;
- (BOOL)observing;
- (BOOL)windowOpen;
- (void)onPresentedFrame;
- (void)requestObservation;
- (BOOL)completeObservation:(unsigned long long)arg1;
- (void)cancel;
- (void).cxx_destruct;
@end
