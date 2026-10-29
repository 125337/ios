@interface TextStateLikeData : NSObject <PBCoding>
{
    NSMutableDictionary * _idToTypeDict; // +0x8
    NSMutableDictionary * _idToExpireTimeDict; // +0x10
}
+ (void)PBArrayAdd_idToTypeDict;
+ (void)PBArrayAdd_idToExpireTimeDict;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)setLikeType:(long long)arg1 forTextStateWithId:(id)arg2 expireTime:(unsigned int)arg3;
- (void)removeLikeForTextStateId:(id)arg1;
- (void)batchRemoveExpiredLike;
- (id)idToTypeDict;
- (void)setIdToTypeDict:(id)arg1;
- (id)idToExpireTimeDict;
- (void)setIdToExpireTimeDict:(id)arg1;
- (void).cxx_destruct;
@end

