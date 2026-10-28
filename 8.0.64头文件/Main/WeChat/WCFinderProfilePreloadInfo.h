@interface WCFinderProfilePreloadInfo : NSObject
{
    WCFinderProfilePreloadCGIInfo * _header; // +0x8
    WCFinderProfilePreloadCGIInfo * _userpage; // +0x10
    WCFinderProfilePreloadCGIInfo * _homepage; // +0x18
}
- (id)toReportJson;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)userpage;
- (void)setUserpage:(id)arg1;
- (id)homepage;
- (void)setHomepage:(id)arg1;
- (void).cxx_destruct;
@end
