@interface MJTemplateMovieSessionOperation_Update : MJTemplateMovieSessionOperation
{
    OMJMovieOptions * _movieOptions; // +0x8
}
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)start;
- (id)boundTemplateId;
- (void)_updateMovieOptions:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)movieOptions;
- (void)setMovieOptions:(id)arg1;
- (void).cxx_destruct;
@end

