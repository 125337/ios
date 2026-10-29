@interface MJOSTAnalyzer : MJContentAnalyzer
{
    MJMovieComposingASRProcessor * _asrProcessor; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)analyzeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)asrProcessor;
- (void)setAsrProcessor:(id)arg1;
- (void).cxx_destruct;
@end

