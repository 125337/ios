@interface TextStateLikeLogic : NSObject
{
    BOOL _useAffDB; // +0x8
    id <TextStateLikeLogicDelegate> _delegate; // +0x10
    WCCgiBlockHelper * _cgiBlockHelper; // +0x18
    TextStateLikeData * _cachedLikeData; // +0x20
    NSMutableDictionary * _idToLikeTypeDictForAff; // +0x28
}
+ (id)generateClientIdForTextState:(id)arg1 isLike:(BOOL)arg2;
- (id)init;
- (void)initData;
- (void)saveData;
- (void)performLikeForTextState:(id)arg1 source:(unsigned int)arg2;
- (void)performUnlikeForTextState:(id)arg1 source:(unsigned int)arg2;
- (BOOL)isLikeForTextStateWithId:(id)arg1;
- (void)putLikeTypeCache:(id)arg1 likeType:(long long)arg2;
- (void)addLikeWithTextStateId:(id)arg1 expireTime:(unsigned int)arg2;
- (void)removeLikeWithTextStateId:(id)arg1;
- (void)requestLikeForTextState:(id)arg1 isDelete:(BOOL)arg2 source:(unsigned int)arg3 completion:(id /* block */)arg4;
- (id)getCacheLikeData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cgiBlockHelper;
- (void)setCgiBlockHelper:(id)arg1;
- (id)cachedLikeData;
- (void)setCachedLikeData:(id)arg1;
- (BOOL)useAffDB;
- (void)setUseAffDB:(BOOL)arg1;
- (id)idToLikeTypeDictForAff;
- (void)setIdToLikeTypeDictForAff:(id)arg1;
- (void).cxx_destruct;
@end
