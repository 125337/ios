@interface WACgiProxy : NSObject <PBMessageObserverDelegate, IWACgiService>
{
    NSMapTable * _mapTable; // +0x8
    NSLock * _lock; // +0x10
}
+ (id)sharedInstance;
+ (unsigned int)sendCgi:(id)arg1 completion:(id /* block */)arg2;
+ (void)cancelCgiRequest:(unsigned int)arg1;
+ (void)invalidateAllRequest;
- (id)init;
- (void)dealloc;
- (id)mapTable;
- (void)_addRequest:(id)arg1 forEventId:(unsigned int)arg2;
- (void)_removeRequestForEventId:(unsigned int)arg1;
- (id)_removeAllRequest;
- (id)_requestForEventId:(unsigned int)arg1;
- (unsigned int)innerSendCgi:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)sendCgi:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelCgiRequest:(unsigned int)arg1;
- (void)invalidateAllRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportCostTimeWithWrap:(id)arg1 pbCGIWrap:(id)arg2;
- (id)convertWACgiProfileInfoFromProtobufCgiProFile:(id)arg1;
- (void)setMapTable:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

