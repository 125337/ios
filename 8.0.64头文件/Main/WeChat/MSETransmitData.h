@interface MSETransmitData : NSObject <PBCoding>
{
    NSString * _searchText; // +0x8
    long long _shareType; // +0x10
}
+ (void)PBArrayAdd_searchText;
+ (void)PBArrayAdd_shareType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (long long)shareType;
- (void)setShareType:(long long)arg1;
- (void).cxx_destruct;
@end
