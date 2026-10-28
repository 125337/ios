@interface WCFinderSearchMetaData : NSObject
{
    int _searchScene; // +0x8
    int _reportCommentScene; // +0xc
    NSString * _searchSessionId; // +0x10
    unsigned long long _searchSourceType; // +0x18
    unsigned long long _reportSearchScene; // +0x20
    long long _tabId; // +0x28
}
- (id)init;
- (id)description;
- (int)searchScene;
- (void)setSearchScene:(int)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (int)reportCommentScene;
- (void)setReportCommentScene:(int)arg1;
- (unsigned long long)searchSourceType;
- (void)setSearchSourceType:(unsigned long long)arg1;
- (unsigned long long)reportSearchScene;
- (void)setReportSearchScene:(unsigned long long)arg1;
- (long long)tabId;
- (void)setTabId:(long long)arg1;
- (void).cxx_destruct;
@end
