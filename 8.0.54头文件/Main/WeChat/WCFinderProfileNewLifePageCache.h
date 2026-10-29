@interface WCFinderProfileNewLifePageCache : NSObject <PBCoding>
{
    long long _likeCount; // +0x8
    long long _globalFavoriteCount; // +0x10
    long long _heartLikeCount; // +0x18
    long long _shareCount; // +0x20
    NSArray * _feedIds; // +0x28
}
+ (void)PBArrayAdd_feedIds;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_globalFavoriteCount;
+ (void)PBArrayAdd_heartLikeCount;
+ (void)PBArrayAdd_shareCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (long long)globalFavoriteCount;
- (void)setGlobalFavoriteCount:(long long)arg1;
- (long long)heartLikeCount;
- (void)setHeartLikeCount:(long long)arg1;
- (long long)shareCount;
- (void)setShareCount:(long long)arg1;
- (id)feedIds;
- (void)setFeedIds:(id)arg1;
- (void).cxx_destruct;
@end

