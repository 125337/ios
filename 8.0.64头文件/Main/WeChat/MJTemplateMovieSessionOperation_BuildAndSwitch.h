@interface MJTemplateMovieSessionOperation_BuildAndSwitch : MJTemplateMovieSessionOperation
{
    NSString * _templateID; // +0x8
    NSString * _musicID; // +0x10
    OMJMovieOptions * _options; // +0x18
    OMJMovieOutroInfo * _outroInfo; // +0x20
    id /* block */ _progressHandler; // +0x28
    OMJTemplateBuildResult * _buildResult; // +0x30
    id /* block */ _buildCompletionHandler; // +0x38
}
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 templateID:(id)arg3 musicID:(id)arg4 options:(id)arg5 outroInfo:(id)arg6 buildResult:(id)arg7 buildCompletionHandler:(id /* block */)arg8 progressHandler:(id /* block */)arg9 completionHandler:(id /* block */)arg10;
- (void)start;
- (id)boundTemplateId;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_buildWithProgressHandler:(id /* block */)arg1 buildCompletionHandler:(id /* block */)arg2;
- (void)_switchTemplateWithBuildResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)templateID;
- (id)musicID;
- (id)options;
- (id)outroInfo;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (id)buildResult;
- (void)setBuildResult:(id)arg1;
- (id /* block */)buildCompletionHandler;
- (void)setBuildCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
