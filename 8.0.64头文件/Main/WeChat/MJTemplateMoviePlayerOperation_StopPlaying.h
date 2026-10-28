@interface MJTemplateMoviePlayerOperation_StopPlaying : MJTemplateMoviePlayerOperation
- (void)start;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
@end
