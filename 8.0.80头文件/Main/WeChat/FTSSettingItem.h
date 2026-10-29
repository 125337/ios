@interface FTSSettingItem : NSObject <_TtP6WeChat11FTSRowModel_>
{
    BOOL _visible; // +0x8
    NSString * _name; // +0x10
    NSString * _summary; // +0x18
    unsigned long long _type; // +0x20
    NSString * _itemKey; // +0x28
    NSString * _parentItemKey; // +0x30
    unsigned long long _matchType; // +0x38
    NSString * _path; // +0x40
    NSString * _iconName; // +0x48
    SettingSearchResult * _searchResult; // +0x50
}
- (id)diffIdentifier;
- (id)uniqueId;
- (id)userName;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)itemKey;
- (void)setItemKey:(id)arg1;
- (id)parentItemKey;
- (void)setParentItemKey:(id)arg1;
- (unsigned long long)matchType;
- (void)setMatchType:(unsigned long long)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)searchResult;
- (void)setSearchResult:(id)arg1;
- (void).cxx_destruct;
@end
