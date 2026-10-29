@interface CgiService : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMapTable * _mapTable; // +0x8
    NSLock * _lock; // +0x10
}
+ (id)sharedService;
+ (void)handleResultWithExpacedClass:(Class)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)mapTable;
- (void)_addEvent:(id)arg1 forId:(unsigned int)arg2;
- (void)_removeEventForId:(unsigned int)arg1;
- (id)_removeAllRequest;
- (unsigned int)sendCgi:(unsigned int)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (unsigned int)sendCgi:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)sendCgi:(unsigned int)arg1 request:(id)arg2 expectedResponseClass:(Class)arg3 completion:(id /* block */)arg4;
- (void)cancelCgiEvent:(unsigned int)arg1;
- (void)invalidateAllEvent;
- (id)eventForId:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)setMapTable:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
