@interface MJTemplateMovieSessionOperation_StopAssetClipping : MJTemplateMovieSessionOperation
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)start;
- (id)boundTemplateId;
- (void)_stopAssetClippingWithCompletionHandler:(id /* block */)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
@end

