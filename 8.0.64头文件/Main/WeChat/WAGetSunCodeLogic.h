@interface WAGetSunCodeLogic : NSObject
{
    BOOL _isRunning; // +0x8
    BOOL _isFetching; // +0x9
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    MMLRUCache * _cache; // +0x20
}
- (id)init;
- (id)cacheKeyForPath:(id)arg1;
- (void)getSunCodeWithAppId:(id)arg1 scene:(unsigned int)arg2 path:(id)arg3 success:(id /* block */)arg4 fail:(id /* block */)arg5;
- (BOOL)isFetchingSunCode;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (void).cxx_destruct;
@end
