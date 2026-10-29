@interface WebSearchGuideData : MMObject <PBCoding>
{
    BOOL _isPreloadData; // +0x8
    unsigned long long _expiredTime; // +0x10
    NSString * _json; // +0x18
    NSString * _searchID; // +0x20
}
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_json;
+ (void)PBArrayAdd_searchID;
+ (void)PBArrayAdd_isPreloadData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isValid;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (id)json;
- (void)setJson:(id)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (BOOL)isPreloadData;
- (void)setIsPreloadData:(BOOL)arg1;
- (void).cxx_destruct;
@end

