@interface MJSTSAsyncTask : MJSpeechAsyncTask
{
    NSString * _audioID; // +0x8
    NSString * _roleID; // +0x10
    MJAudioFileManager * _audioFileManager; // +0x18
}
- (id)initWithAudioID:(id)arg1 roleID:(id)arg2 audioFileManager:(id)arg3 statusDidUpdateSignal:(id)arg4;
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
- (id)roleID;
- (id)audioFileManager;
- (void).cxx_destruct;
@end
