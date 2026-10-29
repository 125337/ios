@interface MJTemplateMoviePlayerOperation_ShutDownPlayback : MJTemplateMoviePlayerOperation
- (void)start;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void)_shutDownPlaybackWithCompletionHandler:(id /* block */)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
@end

