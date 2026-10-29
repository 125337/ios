@interface BraceletRankCacheList : NSObject <PBCoding>
{
    NSString * _championCoverUrl; // +0x8
    NSMutableArray * _cacheList; // +0x10
}
+ (void)PBArrayAdd_championCoverUrl;
+ (void)PBArrayAdd_cacheList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)championCoverUrl;
- (void)setChampionCoverUrl:(id)arg1;
- (id)cacheList;
- (void)setCacheList:(id)arg1;
- (void).cxx_destruct;
@end
