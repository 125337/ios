@interface WCFinderSearchReportModel : NSObject
{
    BOOL _isClick; // +0x8
    int _commentScene; // +0xc
    unsigned long long _searchScene; // +0x10
    NSString * _searchSessionId; // +0x18
    NSString * _keyword; // +0x20
    NSArray * _autoKeywords; // +0x28
    NSDictionary * _selectedAutoKeywords; // +0x30
}
- (void)log;
- (id)tagStringFromDictonary:(id)arg1;
- (id)objectToString:(id)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)autoKeywords;
- (void)setAutoKeywords:(id)arg1;
- (id)selectedAutoKeywords;
- (void)setSelectedAutoKeywords:(id)arg1;
- (BOOL)isClick;
- (void)setIsClick:(BOOL)arg1;
- (void).cxx_destruct;
@end

