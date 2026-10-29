@interface WCFinderReportQueryParams : NSObject
{
    NSMutableDictionary * _queryDict; // +0x8
}
- (id)init;
- (void)_setupDefaultReportQuery;
- (void)setupFeedReportWithFeedID:(id)arg1 commentScene:(int)arg2 adAID:(unsigned long long)arg3;
- (void)setupUserReportWithUsername:(id)arg1 commentScene:(int)arg2 refID:(id)arg3;
- (id)genQueryString;
- (void)setQueryKey:(id)arg1 value:(id)arg2;
- (id)queryDict;
- (void)setQueryDict:(id)arg1;
- (void).cxx_destruct;
@end

