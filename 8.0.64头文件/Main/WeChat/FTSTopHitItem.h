@interface FTSTopHitItem : NSObject <PBCoding>
{
    NSString * _searchText; // +0x8
    NSMutableArray * _arrTopHitValue; // +0x10
}
+ (void)PBArrayAdd_searchText;
+ (void)PBArrayAdd_arrTopHitValue;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)arrTopHitValue;
- (void)setArrTopHitValue:(id)arg1;
- (void).cxx_destruct;
@end
