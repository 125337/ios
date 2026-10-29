@interface MJTTSAsyncTask : MJSpeechAsyncTask
{
    BOOL _isCloneTimbre; // +0x8
    NSString * _text; // +0x10
    NSString * _roleID; // +0x18
    MJAudioFileManager * _audioFileManager; // +0x20
}
- (id)initWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3 audioFileManager:(id)arg4 statusDidUpdateSignal:(id)arg5;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (long long)taskTimeoutMillis;
- (long long)submitAsyncRequestImplWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)queryAsyncRequestImplWithCompletionHandler:(id /* block */)arg1;
- (void)processWithResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleTaskFailImplWithError:(id)arg1 completionHandlers:(id)arg2;
- (void)handleTaskSuccessImplWithResult:(id)arg1 completionHandlers:(id)arg2;
- (id)statusDidUpdateParams;
- (id)description;
- (id)text;
- (id)roleID;
- (id)audioFileManager;
- (BOOL)isCloneTimbre;
- (void).cxx_destruct;
@end
