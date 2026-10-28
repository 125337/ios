@interface AmoebaStayInfo : NSObject
{
    BOOL _isReportOut; // +0x8
    unsigned long long _inTime; // +0x10
    unsigned long long _stayTime; // +0x18
    AmoebaSubstitutePage * _page; // +0x20
}
- (id)toString;
- (unsigned long long)inTime;
- (void)setInTime:(unsigned long long)arg1;
- (unsigned long long)stayTime;
- (void)setStayTime:(unsigned long long)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (BOOL)isReportOut;
- (void)setIsReportOut:(BOOL)arg1;
- (void).cxx_destruct;
@end
