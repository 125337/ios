@interface SearchTextItem : NSObject
{
    NSString * _searchText; // +0x8
    NSMutableArray * _arrKeywordItem; // +0x10
    BOOL _bSpaceSeperated; // +0x18
}
- (id)init;
- (BOOL)isMultiKeyword;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)arrKeywordItem;
- (void)setArrKeywordItem:(id)arg1;
- (BOOL)bSpaceSeperated;
- (void)setBSpaceSeperated:(BOOL)arg1;
- (void).cxx_destruct;
@end
