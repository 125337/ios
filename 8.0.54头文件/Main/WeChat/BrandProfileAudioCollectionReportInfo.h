@interface BrandProfileAudioCollectionReportInfo : NSObject
{
    unsigned long long _proto; // +0x8
    NSString * _viewId; // +0x10
    id /* block */ _viewReportParamsBlock; // +0x18
    long long _pageId; // +0x20
    NSString * _pageName; // +0x28
    NSDictionary * _pageReportParams; // +0x30
}
- (SDKReportInfo)toSDKReportInfo;
- (unsigned long long)proto;
- (void)setProto:(unsigned long long)arg1;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (id /* block */)viewReportParamsBlock;
- (void)setViewReportParamsBlock:(id /* block */)arg1;
- (long long)pageId;
- (void)setPageId:(long long)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)pageReportParams;
- (void)setPageReportParams:(id)arg1;
- (void).cxx_destruct;
@end

