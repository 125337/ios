@interface MJTemplateMovieSessionOperation_Recreate : MJTemplateMovieSessionOperation
{
    NSString * _templateID; // +0x8
    NSString * _musicID; // +0x10
    OMJMovieOptions * _options; // +0x18
    OMJMovieOutroInfo * _outroInfo; // +0x20
    id /* block */ _progressHandler; // +0x28
}
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 templateID:(id)arg3 musicID:(id)arg4 options:(id)arg5 outroInfo:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (void)start;
- (id)boundTemplateId;
- (BOOL)hasFinishedPreparing;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)_cancelPreviousRecreationWithCompletionHandler:(id /* block */)arg1;
- (void)_recreateWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)templateID;
- (id)musicID;
- (id)options;
- (id)outroInfo;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

