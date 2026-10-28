@interface WebviewPageJumpReportInfo : NSObject
{
    NSString * _pageUrl; // +0x8
    unsigned long long _enterTimestamp; // +0x10
    unsigned long long _pageStayTime; // +0x18
    NSString * _pageTitle; // +0x20
}
- (id)description;
- (id)pageUrl;
- (void)setPageUrl:(id)arg1;
- (unsigned long long)enterTimestamp;
- (void)setEnterTimestamp:(unsigned long long)arg1;
- (unsigned long long)pageStayTime;
- (void)setPageStayTime:(unsigned long long)arg1;
- (id)pageTitle;
- (void)setPageTitle:(id)arg1;
- (void).cxx_destruct;
@end
