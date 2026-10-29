@interface MJMovieComposingSession : MJTemplateSession
{
    OMJMovieComposingSession * _movieComposingSession; // +0x8
}
+ (id)createRenderView;
+ (id)getOrCreateMaterialManager;
+ (id)getOrCreateCamResourceManager;
+ (id)getOrCreateSpeechManager;
+ (id)getOrCreateProjectManager;
+ (void)destroyCamResourceManager;
- (BOOL)createMaasSession;
- (BOOL)_createMovieComposingSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_tearDownMovieComposingSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_destroyMovieComposingSessionWithCompletionHandler:(id /* block */)arg1;
- (id)movieComposingSession;
- (void)setMovieComposingSession:(id)arg1;
- (void).cxx_destruct;
@end

