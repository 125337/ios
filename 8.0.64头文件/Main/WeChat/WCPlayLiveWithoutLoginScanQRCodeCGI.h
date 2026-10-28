@interface WCPlayLiveWithoutLoginScanQRCodeCGI : NSObject <PBMessageObserverDelegate>
{
    id <WCPlayLiveWithoutLoginScanQRCodeDelegate> _delegate; // +0x8
    NSObject<OS_dispatch_queue> * _workerThreadQueue; // +0x10
    NSMutableArray * _eventIdDic; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)sendRequest;
- (void)stopRequest;
- (void)internalStopRequest;
- (void)addRequestEventID:(unsigned int)arg1;
- (BOOL)isLatestRequestEventID:(unsigned int)arg1;
- (void)removeRequestEventID:(unsigned int)arg1;
- (void)handleResponse:(id)arg1 withRequest:(id)arg2 eventID:(unsigned int)arg3;
- (void)onCodeLoginFailOnMainThread;
- (void)onCodeLoginSuccessOnMainThread:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)workerThreadQueue;
- (void)setWorkerThreadQueue:(id)arg1;
- (id)eventIdDic;
- (void)setEventIdDic:(id)arg1;
- (void).cxx_destruct;
@end
