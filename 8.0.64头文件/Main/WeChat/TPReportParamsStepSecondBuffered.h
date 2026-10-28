@interface TPReportParamsStepSecondBuffered : TPReportParamsStep
{
    unsigned long long _scene; // +0x20
    unsigned long long _levent; // +0x28
    long long _reason; // +0x30
    long long _format; // +0x38
    long long _ptime; // +0x40
    NSString * _url; // +0x48
}
- (id)init;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)levent;
- (void)setLevent:(unsigned long long)arg1;
- (long long)reason;
- (void)setReason:(long long)arg1;
- (long long)format;
- (void)setFormat:(long long)arg1;
- (long long)ptime;
- (void)setPtime:(long long)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
