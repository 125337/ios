@interface WCMusicSearchWorker : NSObject <PBMessageObserverDelegate>
{
    NSMutableDictionary * _completionDictionary; // +0x8
}
- (unsigned int)searchWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)generateRequestWithContext:(id)arg1;
- (unsigned int)sendCgiWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelRequestWithEventId:(unsigned int)arg1;
- (unsigned int)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2 completion:(id)arg3;
- (unsigned int)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2 bLongPolling:(BOOL)arg3 userData:(id)arg4;
- (void)handleCgiReturn:(id)arg1 eventId:(unsigned int)arg2 error:(id)arg3;
- (BOOL)checkCGIBaseRespSuccess:(id)arg1 error:(id *)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)completionDictionary;
- (void)setCompletionDictionary:(id)arg1;
- (void).cxx_destruct;
@end

