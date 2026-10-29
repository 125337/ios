@interface MJTemplateMoviePlayerOperation_StartPlaying : MJTemplateMoviePlayerOperation
- (void)start;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void)_startPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
@end

