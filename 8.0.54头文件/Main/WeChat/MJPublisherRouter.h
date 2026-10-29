@interface MJPublisherRouter : NSObject
+ (void)presentShootComposingVCWithPublisher:(id)arg1 fromVC:(id)arg2 delegate:(id)arg3;
+ (void)presentMovieComposingVCWithPublisher:(id)arg1 delegate:(id)arg2 assetInfos:(id)arg3 fromVC:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)presentFinderPostVCWithImage:(id)arg1 imageData:(id)arg2 frontCamera:(BOOL)arg3 editImageAttr:(id)arg4 composingVC:(id)arg5 publisher:(id)arg6 fromVC:(id)arg7 postDelegate:(id)arg8;
+ (void)presentFinderPostVCWithVideoFilePath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4 composingVC:(id)arg5 publisher:(id)arg6 fromVC:(id)arg7 postDelegate:(id)arg8;
+ (void)presentFinderPostVCWithVideoFileURL:(id)arg1 userInfo:(id)arg2 composingVC:(id)arg3 publisher:(id)arg4 fromVC:(id)arg5 postDelegate:(id)arg6;
+ (void)presentFinderPostVCWithActionFlow:(id)arg1 movieComposingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithSightDraft:(id)arg1 isAsyncComposite:(BOOL)arg2 composingVC:(id)arg3 publisher:(id)arg4 fromVC:(id)arg5 postDelegate:(id)arg6;
+ (void)presentFinderPostVCWithImageAttr:(id)arg1 composingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithActionFlow:(id)arg1 composingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithSightDraft:(id)arg1 composingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithPostSession:(id)arg1 composingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)_processWithSightDraft:(id)arg1 finderTask:(id)arg2 appliedMusicInfo:(id)arg3 publisher:(id)arg4 fromVC:(id)arg5 postDelegate:(id)arg6;
+ (void)_presentFinderPostViewControllerWithPostSession:(id)arg1 publisher:(id)arg2 fromVC:(id)arg3 postDelegate:(id)arg4;
+ (id)_getUsername;
+ (void)showMovieComposingDraftTipsIfExists:(id)arg1 publisherSessionMetrics:(id)arg2 fromVC:(id)arg3 didSkipDraftHandler:(id /* block */)arg4 didOpenDraftHandler:(id /* block */)arg5;
+ (void)checkMovieComposingDraftWithEntryScene:(long long)arg1 publisherContext:(id)arg2 publisherSessionMetrics:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)removeMovieComposingDraftWithEntryScene:(long long)arg1 publisherContext:(id)arg2;
+ (void)presentMovieTemplateWithAssetInfos:(id)arg1 publisher:(id)arg2 delegate:(id)arg3 fromAssetPicker:(id)arg4 showRegularGuideIfNeeded:(BOOL)arg5 startHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
+ (void)presentMovieTemplateWithAssetInfos:(id)arg1 publisher:(id)arg2 createSameTemplateId:(id)arg3 createSameMusicId:(id)arg4 delegate:(id)arg5 fromAssetPicker:(id)arg6 showRegularGuideIfNeeded:(BOOL)arg7 isJumpMJAppEnabled:(BOOL)arg8 templateScene:(unsigned long long)arg9 startHandler:(id /* block */)arg10 completionHandler:(id /* block */)arg11;
+ (void)_presentMovieTemplateWithAssetInfos:(id)arg1 publisher:(id)arg2 createSameTemplateId:(id)arg3 createSameMusicId:(id)arg4 delegate:(id)arg5 fromAssetPicker:(id)arg6 isJumpMJAppEnabled:(BOOL)arg7 templateScene:(unsigned long long)arg8 completionHandler:(id /* block */)arg9;
+ (void)enterMovieComposingInActionSheetWithFromVC:(id)arg1 mjPublisher:(id)arg2 composingDelegate:(id)arg3 showPickerCompletion:(id /* block */)arg4;
+ (void)fixWCTimelinePlaybackIssueIfNeededWithFromVC:(id)arg1;
+ (void)pauseCellIfNeeded:(id)arg1;
@end

