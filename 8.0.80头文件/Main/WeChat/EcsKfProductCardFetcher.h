@interface EcsKfProductCardFetcher : NSObject <PBMessageObserverDelegate>
{
    EcsKfProductCardStorage * _storage; // +0x8
    EcsKfProductCardMemCache * _memCache; // +0x10
    NSMutableDictionary * _pending; // +0x18
}
- (id)initWithStorage:(id)arg1 memCache:(id)arg2;
- (void)fetchWithTalker:(id)arg1 msgSvrId:(long long)arg2 msgCreateTime:(long long)arg3 productIds:(id)arg4 reportExtraInfoJson:(id)arg5 completion:(id /* block */)arg6;
- (void)cancelCompletionForMsgSvrId:(long long)arg1;
- (void)cancelAll;
- (void)sendCgiWithContext:(id)arg1 reportExtraInfoJson:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)finishContext:(id)arg1 result:(id)arg2 error:(id)arg3;
- (id)storage;
- (void)setStorage:(id)arg1;
- (id)memCache;
- (void)setMemCache:(id)arg1;
- (id)pending;
- (void)setPending:(id)arg1;
- (void).cxx_destruct;
@end
