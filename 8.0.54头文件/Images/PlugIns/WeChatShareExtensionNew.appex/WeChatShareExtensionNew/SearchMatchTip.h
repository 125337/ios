@interface SearchMatchTip : NSObject
{
    NSString * _key; // +0x8
    NSString * _searchText; // +0x10
    NSString * _showPrefix; // +0x18
    NSString * _showSuffix; // +0x20
    NSString * _showResult; // +0x28
    unsigned long long _location; // +0x30
    unsigned int _createTime; // +0x38
    int _matchType; // +0x3c
    int _matchSubType; // +0x40
    NSMutableArray * _arrKeywordMatchText; // +0x48
    NSString * _displayNameFullPY; // +0x50
}
- (id)init;
- (id)getShowResult;
- (id)getAttributeShowResult;
- (id)key;
- (void)setKey:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)showPrefix;
- (void)setShowPrefix:(id)arg1;
- (id)showSuffix;
- (void)setShowSuffix:(id)arg1;
- (int)matchType;
- (void)setMatchType:(int)arg1;
- (int)matchSubType;
- (void)setMatchSubType:(int)arg1;
- (void).cxx_destruct;
@end

