@interface BraceletRankCacheInfo : NSObject <PBCoding>
{
    BOOL _hasLike; // +0x8
    unsigned int _rankNum; // +0xc
    unsigned int _score; // +0x10
    unsigned int _likeNum; // +0x14
    NSString * _username; // +0x18
    SportRecord * _record; // +0x20
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_rankNum;
+ (void)PBArrayAdd_score;
+ (void)PBArrayAdd_likeNum;
+ (void)PBArrayAdd_hasLike;
+ (void)PBArrayAdd_record;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)rankNum;
- (void)setRankNum:(unsigned int)arg1;
- (unsigned int)score;
- (void)setScore:(unsigned int)arg1;
- (unsigned int)likeNum;
- (void)setLikeNum:(unsigned int)arg1;
- (BOOL)hasLike;
- (void)setHasLike:(BOOL)arg1;
- (id)record;
- (void)setRecord:(id)arg1;
- (void).cxx_destruct;
@end
