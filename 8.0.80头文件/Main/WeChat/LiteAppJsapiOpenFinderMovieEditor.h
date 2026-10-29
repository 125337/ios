@interface LiteAppJsapiOpenFinderMovieEditor : LiteAppJsApi <MJMovieComposingViewControllerDelegate, WCFinderPostViewControllerDelegate>
{
    MJPublisher * _mjPublisher; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)showMovieComposing:(id)arg1 disableDraft:(unsigned char)arg2 entryScene:(long long)arg3 mediaType:(long long)arg4;
- (void)showMovieComposingWithDraft:(id)arg1;
- (void)presentMJMovieComposingViewControllerWithFilePaths:(id)arg1 mediaType:(long long)arg2 configuration:(id)arg3 delegate:(id)arg4 mjPublisher:(id)arg5;
- (id)mjPublisher;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)postProcess:(id)arg1;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)successCallback:(id)arg1 edited:(BOOL)arg2 videoPath:(id)arg3 thumbImage:(id)arg4 duration:(double)arg5 videoSize:(unsigned int)arg6 sizeVideo:(CGSize)arg7;
- (id)createVideoLocalId:(id)arg1 videoSize:(unsigned int)arg2;
- (id)createImageLocalId:(id)arg1;
- (int)getVideoDuration:(id)arg1;
- (id)saveCachePath;
- (unsigned long long)currentTimeInMilliseconds;
- (void)setMjPublisher:(id)arg1;
- (void).cxx_destruct;
@end
