@interface MJTemplateMovieSessionOperation : MJTemplateSessionOperation
{
    OMJMovieSession * _maasSession; // +0x8
}
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)maasSession;
- (void).cxx_destruct;
@end

