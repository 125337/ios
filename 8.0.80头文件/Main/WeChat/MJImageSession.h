@interface MJImageSession : MJTemplateSession
{
    OMJImageSession * _imageSession; // +0x8
    OMJMaasSessionHolder * _sessionHolder; // +0x10
}
+ (id)createRenderView;
+ (id)materialManager;
- (BOOL)createMaasSession;
- (BOOL)_createCoverImageSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_clearImageSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_clearPlaybackSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_clearSessionHolderWithCompletionHandler:(id /* block */)arg1;
- (id)imageSession;
- (void)setImageSession:(id)arg1;
- (id)sessionHolder;
- (void)setSessionHolder:(id)arg1;
- (void).cxx_destruct;
@end
