@interface FTSResultActionItem : NSObject
{
    NSString * _keyword; // +0x8
    unsigned long long _actionType; // +0x10
    unsigned long long _searchType; // +0x18
    NSDictionary * _displayInfo; // +0x20
}
- (BOOL)hasDisplayForSection:(unsigned int)arg1;
- (unsigned int)displayCountForSection:(unsigned int)arg1;
- (id)genStatString;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)searchType;
- (void)setSearchType:(unsigned long long)arg1;
- (id)displayInfo;
- (void)setDisplayInfo:(id)arg1;
- (void).cxx_destruct;
@end

