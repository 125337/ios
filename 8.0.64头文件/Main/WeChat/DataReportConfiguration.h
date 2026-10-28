@interface DataReportConfiguration : NSObject
{
    unsigned long long _viewExposeMinTime; // +0x8
    double _viewExposeMinRate; // +0x10
    unsigned long long _clickReportInterval; // +0x18
    unsigned long long _pageReportPolicy; // +0x20
    unsigned long long _viewReportPolicy; // +0x28
    id <DataReportParamsFormatProtocol> _formatter; // +0x30
    id <DataReportDynamicPublicParamsProvider> _dynamicPublicParamsProvider; // +0x38
    NSMutableArray * _callbacks; // +0x40
}
+ (id)build:(id /* block */)arg1;
- (id)init;
- (unsigned long long)viewExposeMinTime;
- (void)setViewExposeMinTime:(unsigned long long)arg1;
- (double)viewExposeMinRate;
- (void)setViewExposeMinRate:(double)arg1;
- (unsigned long long)clickReportInterval;
- (void)setClickReportInterval:(unsigned long long)arg1;
- (unsigned long long)pageReportPolicy;
- (void)setPageReportPolicy:(unsigned long long)arg1;
- (unsigned long long)viewReportPolicy;
- (void)setViewReportPolicy:(unsigned long long)arg1;
- (id)formatter;
- (void)setFormatter:(id)arg1;
- (id)dynamicPublicParamsProvider;
- (void)setDynamicPublicParamsProvider:(id)arg1;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (void).cxx_destruct;
@end
