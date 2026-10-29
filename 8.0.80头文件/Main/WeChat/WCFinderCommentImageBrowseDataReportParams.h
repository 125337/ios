@interface WCFinderCommentImageBrowseDataReportParams : NSObject
{
    unsigned long long _pageId; // +0x8
    NSString * _pageName; // +0x10
    NSDictionary * _customReportDict; // +0x18
}
- (id)initWithPageId:(unsigned long long)arg1 pageName:(id)arg2 customReportDict:(id)arg3;
- (id)customReportDictWithCommentID:(unsigned long long)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)customReportDict;
- (void)setCustomReportDict:(id)arg1;
- (void).cxx_destruct;
@end
