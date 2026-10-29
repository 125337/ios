@interface MJContentAnalyzer : NSObject
- (void)analyzeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleSuccessWithResult:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)handleFailWithCompletionHandler:(id /* block */)arg1;
@end

