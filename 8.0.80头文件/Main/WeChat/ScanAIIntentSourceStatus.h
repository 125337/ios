@interface ScanAIIntentSourceStatus : NSObject
{
    long long _source; // +0x8
    long long _state; // +0x10
    NSString * _reasonCode; // +0x18
    double _costMS; // +0x20
}
+ (id)statusWithSource:(long long)arg1 state:(long long)arg2 reasonCode:(id)arg3 costMS:(double)arg4;
- (long long)source;
- (void)setSource:(long long)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)reasonCode;
- (void)setReasonCode:(id)arg1;
- (double)costMS;
- (void)setCostMS:(double)arg1;
- (void).cxx_destruct;
@end
