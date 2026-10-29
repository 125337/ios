@interface MJSTTAsyncTask : MJSpeechAsyncTask
{
    NSString * _audioID; // +0x8
}
- (id)initWithAudioID:(id)arg1 statusDidUpdateSignal:(id)arg2;
- (void)startWithAudioData:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)taskTimeoutMillis;
- (long long)submitAsyncRequestImplWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)queryAsyncRequestImplWithCompletionHandler:(id /* block */)arg1;
- (void)processWithResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleTaskFailImplWithError:(id)arg1 completionHandlers:(id)arg2;
- (void)handleTaskSuccessImplWithResult:(id)arg1 completionHandlers:(id)arg2;
- (id)statusDidUpdateParams;
- (id)description;
- (id)audioID;
- (void).cxx_destruct;
@end

