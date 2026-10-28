@interface FTSCommonLogItem : NSObject
{
    unsigned int _row; // +0x8
    NSString * _query; // +0x10
    unsigned long long _searchScene; // +0x18
    unsigned long long _clickType; // +0x20
    unsigned long long _matchType; // +0x28
}
- (id)initWithParams:(id)arg1;
- (void)parse:(id)arg1;
- (void)report;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (unsigned long long)clickType;
- (void)setClickType:(unsigned long long)arg1;
- (unsigned int)row;
- (void)setRow:(unsigned int)arg1;
- (unsigned long long)matchType;
- (void)setMatchType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
