@interface WxpayKitReportEvent : NSObject
{
    NSString * _phase; // +0x8
    long long _spanId; // +0x10
    NSString * _subject; // +0x18
    long long _durMs; // +0x20
    NSString * _code; // +0x28
    long long _presentedCount; // +0x30
    long long _droppedCount; // +0x38
    long long _retainedHitCount; // +0x40
    NSString * _detail; // +0x48
    long long _rawCount; // +0x50
    long long _tMs; // +0x58
    long long _attempt; // +0x60
    long long _causeSpanId; // +0x68
}
- (id)init;
- (id)phase;
- (void)setPhase:(id)arg1;
- (long long)spanId;
- (void)setSpanId:(long long)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (long long)durMs;
- (void)setDurMs:(long long)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (long long)presentedCount;
- (void)setPresentedCount:(long long)arg1;
- (long long)droppedCount;
- (void)setDroppedCount:(long long)arg1;
- (long long)retainedHitCount;
- (void)setRetainedHitCount:(long long)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (long long)rawCount;
- (void)setRawCount:(long long)arg1;
- (long long)tMs;
- (void)setTMs:(long long)arg1;
- (long long)attempt;
- (void)setAttempt:(long long)arg1;
- (long long)causeSpanId;
- (void)setCauseSpanId:(long long)arg1;
- (void).cxx_destruct;
@end
