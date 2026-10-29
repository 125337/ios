@interface DataReportPageConfigModel : NSObject
{
    unsigned long long _pageId; // +0x8
    unsigned long long _bizGroupId; // +0x10
    NSString * _pageName; // +0x18
    unsigned long long _reportPolicy; // +0x20
    unsigned long long _routeRule; // +0x28
}
- (id)toString;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (unsigned long long)bizGroupId;
- (void)setBizGroupId:(unsigned long long)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (unsigned long long)reportPolicy;
- (void)setReportPolicy:(unsigned long long)arg1;
- (unsigned long long)routeRule;
- (void)setRouteRule:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

