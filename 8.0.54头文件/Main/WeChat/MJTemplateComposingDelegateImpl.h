@interface MJTemplateComposingDelegateImpl : NSObject
- (void)handleFinishActionWithProducerVC:(id)arg1 sightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3 publisher:(id)arg4 succeedHandler:(id /* block */)arg5 failedHandler:(id /* block */)arg6;
- (void)handleCancelActionWithProducerVC:(id)arg1 isCleanUpSuccessful:(BOOL)arg2 publisher:(id)arg3;
- (void)openMovieComposingInDirectlyWithDelegate:(id)arg1 producerVC:(id)arg2 contextVC:(id)arg3 sightDraft:(id)arg4 isAsyncComposite:(BOOL)arg5 publisher:(id)arg6 failedHandler:(id /* block */)arg7;
- (void)_openMovieComposingInDirectlyWithDelegate:(id)arg1 contextVC:(id)arg2 sightDraft:(id)arg3 originalAssets:(id)arg4 publisher:(id)arg5 failedHandler:(id /* block */)arg6;
- (id)phAssetsWithAssetInfos:(id)arg1;
@end

