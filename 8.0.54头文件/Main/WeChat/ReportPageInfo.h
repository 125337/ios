@interface ReportPageInfo : NSObject
{
    NSNumber * _pageId; // +0x8
    NSString * _pageName; // +0x10
    NSDictionary * _pageParams; // +0x18
}
+ (id)makeWithPageId:(id)arg1 pageName:(id)arg2 pageParams:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)pageParams;
- (void)setPageParams:(id)arg1;
- (void).cxx_destruct;
@end

