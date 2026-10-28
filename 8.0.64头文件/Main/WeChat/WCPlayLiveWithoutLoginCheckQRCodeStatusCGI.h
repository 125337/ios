@interface WCPlayLiveWithoutLoginCheckQRCodeStatusCGI : NSObject <PBMessageObserverDelegate>
{
    id <WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate> _delegate; // +0x8
    NSString * _token; // +0x10
    NSObject<OS_dispatch_queue> * _workerThreadQueue; // +0x18
    NSMutableSet * _eventIdDic; // +0x20
}
- (id)init;
- (void)sendRequest;
- (void)stopRequest;
- (void)internalStopRequest;
- (void)addRequestEventID:(unsigned int)arg1;
- (BOOL)isLatestRequestEventID:(unsigned int)arg1;
- (void)removeRequestEventID:(unsigned int)arg1;
- (void)handleResponse:(id)arg1 withRequest:(id)arg2 eventID:(unsigned int)arg3;
- (void)onCodeLoginFailOnMainThread;
- (void)onCodeLoginSuccessOnMainThread:(double)arg1 liveContact:(id)arg2 liveInfo:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)workerThreadQueue;
- (void)setWorkerThreadQueue:(id)arg1;
- (id)eventIdDic;
- (void)setEventIdDic:(id)arg1;
- (void).cxx_destruct;
@end
