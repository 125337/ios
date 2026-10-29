@interface MJMusicAnalyzer : MJContentAnalyzer
{
    long long _queryCount; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)analyzeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeWithClassifyHelper:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processAnalysisResultWithClassifyHelper:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)queryCount;
- (void)setQueryCount:(long long)arg1;
@end

