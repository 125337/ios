@interface MJTemplateMovieSessionOperation_BuildAndSwitchAI : MJTemplateMovieSessionOperation
{
    unsigned long long _scene; // +0x8
    NSString * _templateID; // +0x10
    NSString * _musicID; // +0x18
    NSString * _AIModelType; // +0x20
    MJAIAssetProcessor * _AIAssetProcessor; // +0x28
    OMJMovieOptions * _options; // +0x30
    OMJMovieOutroInfo * _outroInfo; // +0x38
    id /* block */ _progressHandler; // +0x40
    double _AIAssetProcessorProgress; // +0x48
    double _templateSwitchingProgress; // +0x50
    OMJTemplateBuildResult * _buildResult; // +0x58
    id /* block */ _buildCompletionHandler; // +0x60
    MJAITemplateReporter * _AITemplateReporter; // +0x68
}
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 scene:(unsigned long long)arg3 templateID:(id)arg4 musicID:(id)arg5 AIModelType:(id)arg6 AIAssetProcessor:(id)arg7 options:(id)arg8 outroInfo:(id)arg9 buildResult:(id)arg10 buildCompletionHandler:(id /* block */)arg11 progressHandler:(id /* block */)arg12 completionHandler:(id /* block */)arg13;
- (void)start;
- (id)boundTemplateId;
- (double)progress;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_observeAIAssetProcessorWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)_buildWithProgressHandler:(id /* block */)arg1 buildCompletionHandler:(id /* block */)arg2;
- (void)_switchTemplateWithBuildResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)scene;
- (id)templateID;
- (id)musicID;
- (id)AIModelType;
- (id)AIAssetProcessor;
- (id)options;
- (id)outroInfo;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (double)AIAssetProcessorProgress;
- (void)setAIAssetProcessorProgress:(double)arg1;
- (double)templateSwitchingProgress;
- (void)setTemplateSwitchingProgress:(double)arg1;
- (id)buildResult;
- (void)setBuildResult:(id)arg1;
- (id /* block */)buildCompletionHandler;
- (void)setBuildCompletionHandler:(id /* block */)arg1;
- (id)AITemplateReporter;
- (void)setAITemplateReporter:(id)arg1;
- (void).cxx_destruct;
@end
