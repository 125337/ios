@interface TPReportParamsStepPlayComplete : NSObject <ITPReportParams>
{
    unsigned long long _reason; // +0x8
    long long _etime; // +0x10
    double _playduration; // +0x18
    NSString * _code; // +0x20
    long long _scount; // +0x28
    long long _tbcount; // +0x30
    long long _tbduration; // +0x38
    long long _bcount; // +0x40
    long long _tduration; // +0x48
}
- (id)init;
- (void)setErrorCode:(id)arg1;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;
- (long long)etime;
- (void)setEtime:(long long)arg1;
- (double)playduration;
- (void)setPlayduration:(double)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (long long)scount;
- (void)setScount:(long long)arg1;
- (long long)tbcount;
- (void)setTbcount:(long long)arg1;
- (long long)tbduration;
- (void)setTbduration:(long long)arg1;
- (long long)bcount;
- (void)setBcount:(long long)arg1;
- (long long)tduration;
- (void)setTduration:(long long)arg1;
- (void).cxx_destruct;
@end

