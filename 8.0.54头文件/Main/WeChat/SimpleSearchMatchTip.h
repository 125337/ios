@interface SimpleSearchMatchTip : NSObject
{
    NSString * _searchText; // +0x8
    unsigned long long _matchType; // +0x10
    NSString * _matchWord; // +0x18
    NSString * _matchWordTip; // +0x20
}
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (unsigned long long)matchType;
- (void)setMatchType:(unsigned long long)arg1;
- (id)matchWord;
- (void)setMatchWord:(id)arg1;
- (id)matchWordTip;
- (void)setMatchWordTip:(id)arg1;
- (void).cxx_destruct;
@end

