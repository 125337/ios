@interface MJTemplateMoviePlayerOperation_StartPlayback : MJTemplateMoviePlayerOperation
- (void)start;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void)_startUpPlaybackWithCompletionHandler:(id /* block */)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
@end

