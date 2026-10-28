@interface TPReportParamsStep : NSObject <ITPReportParams>
{
    long long _stime; // +0x8
    long long _etime; // +0x10
    NSString * _code; // +0x18
}
- (id)init;
- (void)setErrorCode:(id)arg1;
- (long long)stime;
- (void)setStime:(long long)arg1;
- (long long)etime;
- (void)setEtime:(long long)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (void).cxx_destruct;
@end
