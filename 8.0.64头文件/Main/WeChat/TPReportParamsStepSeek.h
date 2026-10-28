@interface TPReportParamsStepSeek : NSObject <ITPReportParams>
{
    long long _format; // +0x8
    long long _pstime; // +0x10
    long long _petime; // +0x18
    long long _lstime; // +0x20
    long long _letime; // +0x28
    NSString * _code; // +0x30
}
- (id)init;
- (void)setErrorCode:(id)arg1;
- (long long)format;
- (void)setFormat:(long long)arg1;
- (long long)pstime;
- (void)setPstime:(long long)arg1;
- (long long)petime;
- (void)setPetime:(long long)arg1;
- (long long)lstime;
- (void)setLstime:(long long)arg1;
- (long long)letime;
- (void)setLetime:(long long)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (void).cxx_destruct;
@end
