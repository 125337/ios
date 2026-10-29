@interface TPReportParamsStepVideoPrepared : TPReportParamsStep
{
    NSString * _url; // +0x20
    long long _urlindex; // +0x28
    long long _fileopenedtime; // +0x30
    long long _firstpacketreadtime; // +0x38
}
- (id)init;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)urlindex;
- (void)setUrlindex:(long long)arg1;
- (long long)fileopenedtime;
- (void)setFileopenedtime:(long long)arg1;
- (long long)firstpacketreadtime;
- (void)setFirstpacketreadtime:(long long)arg1;
- (void).cxx_destruct;
@end

