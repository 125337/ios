@interface WxpayKitReportFault : NSObject
{
    BOOL _preLimited; // +0x8
    NSString * _layer; // +0x10
    long long _spanId; // +0x18
    NSString * _subject; // +0x20
    NSString * _code; // +0x28
    long long _costMs; // +0x30
    NSString * _msg; // +0x38
    NSString * _stack; // +0x40
    long long _rawCount; // +0x48
    long long _tMs; // +0x50
    long long _attempt; // +0x58
    long long _causeSpanId; // +0x60
}
- (id)init;
- (id)layer;
- (void)setLayer:(id)arg1;
- (long long)spanId;
- (void)setSpanId:(long long)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (long long)costMs;
- (void)setCostMs:(long long)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (long long)rawCount;
- (void)setRawCount:(long long)arg1;
- (long long)tMs;
- (void)setTMs:(long long)arg1;
- (BOOL)preLimited;
- (void)setPreLimited:(BOOL)arg1;
- (long long)attempt;
- (void)setAttempt:(long long)arg1;
- (long long)causeSpanId;
- (void)setCauseSpanId:(long long)arg1;
- (void).cxx_destruct;
@end
