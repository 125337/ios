@interface WxpayBufferedKitReportSink : NSObject
{
    NSObject * _lock; // +0x8
    NSMutableArray * _pending; // +0x10
    NSMutableDictionary * _sentAtByLogId; // +0x18
    id /* block */ _delivery; // +0x20
    id /* block */ _clock; // +0x28
    id /* block */ _startTicker; // +0x30
    BOOL _started; // +0x38
    unsigned long long _emptyTicks; // +0x40
    unsigned long long _dropped; // +0x48
}
- (id)initWithDelivery:(id /* block */)arg1;
- (id)initWithDelivery:(id /* block */)arg1 clock:(id /* block */)arg2 startTicker:(id /* block */)arg3;
- (void)reportLogId:(long long)arg1 value:(id)arg2;
- (void)reportLogId:(long long)arg1 value:(id)arg2 ignoreFreqLimit:(BOOL)arg3;
- (BOOL)drainOnce;
- (BOOL)reserveLogId:(long long)arg1 at:(long long)arg2;
- (void).cxx_destruct;
@end
