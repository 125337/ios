@interface BrandCGIReportService : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSMapTable * _mapTable; // +0x8
    NSLock * _lock; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)sendCgiRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelCgiRequest:(unsigned int)arg1;
- (void)cancelAllRequest;
- (id)mapTable;
- (void)_addRequest:(id)arg1 forEventID:(unsigned int)arg2;
- (void)_removeRequestForEventID:(unsigned int)arg1;
- (id)_removeAllRequest;
- (id)_requestForEventID:(unsigned int)arg1;
- (void)setMapTable:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
