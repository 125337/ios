@interface TPReportParamsStepLoadSubTitle : TPReportParamsStep
{
    long long _bufferduration; // +0x20
    NSString * _url; // +0x28
    long long _vt; // +0x30
    long long _urlindex; // +0x38
}
- (id)init;
- (long long)bufferduration;
- (void)setBufferduration:(long long)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)vt;
- (void)setVt:(long long)arg1;
- (long long)urlindex;
- (void)setUrlindex:(long long)arg1;
- (void).cxx_destruct;
@end
