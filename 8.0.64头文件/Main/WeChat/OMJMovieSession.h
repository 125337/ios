@interface OMJMovieSession : NSObject
{
    struct _dataSourceFlags; // +0x8
    XSigConnHelper _sigConnHelper; // +0x10
    id <OMJMovieSessionDelegate> _delegate; // +0x28
    id <OMJMovieSessionDataSource> _dataSource; // +0x30
    id <OMJMovieSessionComposingDelegate> _composingDelegate; // +0x38
    SharedPtr<XMJMovieSessionV3> _backingSession; // +0x40
    shared_ptr<XMJRenderView> _backingRenderView; // +0x48
}
- (void)dealloc;
- (id)initWithBackingSession:(const void *)arg1;
- (unsigned long long)state;
- (BOOL)connectToRenderView:(const void *)arg1 error:(id *)arg2;
- (void)setupPlaybackTimeDidChangeCallback;
- (struct)currentPlaybackTime;
- (struct)playbackDuration;
- (id)renderView;
- (id)startMovieCreationWithTemplateID:(id)arg1 musicID:(id)arg2 assetInfos:(id)arg3 movieOptions:(id)arg4 recommendOptions:(id)arg5 movieOutroInfo:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8 preprocCompletionHandler:(id /* block */)arg9;
- (id)startMovieCreationWithTemplateID:(id)arg1 musicIDs:(id)arg2 assetInfos:(id)arg3 movieOptions:(id)arg4 recommendOptions:(id)arg5 movieOutroInfo:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8 preprocCompletionHandler:(id /* block */)arg9;
- (id)startMovieCreationAutoRecommendTemplateWithAssetInfos:(id)arg1 movieOptions:(id)arg2 recommendOptions:(id)arg3 movieOutroInfo:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)startMovieCreationUsingBlankTemplateWithAssetInfos:(id)arg1 musicID:(id)arg2 movieOptions:(id)arg3 recommendOptions:(id)arg4 progressHandler:(id /* block */)arg5 movieCompletionHandler:(id /* block */)arg6 preprocCompletionHandler:(id /* block */)arg7;
- (id)startMovieCreationWithComposingDesc:(id)arg1 templateID:(id)arg2 movieOptions:(id)arg3 recommendOptions:(id)arg4 progressHandler:(id /* block */)arg5 movieCompletionHandler:(id /* block */)arg6 preprocCompletionHandler:(id /* block */)arg7;
- (id)setAssetsWithAIModelType:(id)arg1 assetInfos:(id)arg2;
- (id)cancelMovieCreationWithCompletionHandler:(id /* block */)arg1;
- (id)teardownWithCompletionHandler:(id /* block */)arg1;
- (id)startPlayingWithTimeRange:(struct)arg1 startTime:(struct)arg2 loopCount:(int)arg3 isAudioEnabled:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (id)startPlayingWithSegmentID:(id)arg1 timeRangeInClip:(struct)arg2 loopCount:(int)arg3 isAudioEnabled:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (id)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (id)skimTo:(struct)arg1;
- (id)skimToSegmentWithID:(id)arg1 atTimeInClip:(struct)arg2;
- (id)startExportingWithTimeRange:(struct)arg1 outputFilePath:(id)arg2 exportSettings:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)cancelExportingWithCompletionHandler:(id /* block */)arg1;
- (id)recreateWithTemplateID:(id)arg1 musicID:(id)arg2 movieOptions:(id)arg3 movieOutroInfo:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)recreateWithMusicID:(id)arg1 movieOptions:(id)arg2 movieOutroInfo:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)recreateUsingBlankTemplateWithMusicID:(id)arg1 movieOptions:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)cancelRecreationWithCompletionHandler:(id /* block */)arg1;
- (id)updateWithMovieOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)buildTemplateWithTemplateID:(id)arg1 musicID:(id)arg2 movieOptions:(id)arg3 movieOutroInfo:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)buildTemplateWithMusicID:(id)arg1 movieOptions:(id)arg2 movieOutroInfo:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)buildBlankTemplateWithMusicID:(id)arg1 movieOptions:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)cancelBuildTemplateWithCompletionHandler:(id /* block */)arg1;
- (id)switchTemplateWithBuildResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getCurrentTemplateInfoWithError:(id *)arg1;
- (id)getCurrentMusicInfoWithError:(id *)arg1;
- (id)getCurrentMusicOptionsWithError:(id *)arg1;
- (id)getCurrentTemplateMusicInfosWithError:(id *)arg1;
- (id)getCurrentTemplateBuiltinMusicInfosWithError:(id *)arg1;
- (id)getRecommendedMusicInfosWithError:(id *)arg1;
- (id)getCurrentMovieOptionsWithError:(id *)arg1;
- (id)getCurrentLyricInfosWithError:(id *)arg1;
- (double)videoAspectRatio;
- (void)setDataSource:(id)arg1;
- (void)syncDataSourceToBackingSession;
- (long long)requestTemplateRecommendWithPagingContext:(id)arg1 shouldRecommendBGM:(BOOL)arg2 recommendCompletionHandler:(id /* block */)arg3;
- (long long)requestTemplateRecommendWithPagingContext:(id)arg1 shouldRecommendBGM:(BOOL)arg2 additionTemplateIDs:(id)arg3 recommendCompletionHandler:(id /* block */)arg4;
- (void)cancelTemplateRecommend:(long long)arg1;
- (long long)requestMusicRecommendWithTemplateID:(id)arg1 clientRequestID:(unsigned long long)arg2 recommendCompletionHandler:(id /* block */)arg3;
- (void)cancelMusicRecommend:(long long)arg1;
- (void)showHandleBoxForSegment:(id)arg1 withBorderStyle:(id)arg2;
- (void)showHandleBoxForSegment:(id)arg1 withItems:(id)arg2 edgeInsets:(UIEdgeInsets)arg3 borderStyle:(id)arg4 guideLineStyle:(id)arg5;
- (void)removeHandleBox;
- (void)notifyDidSelectSegment:(const void *)arg1 withHints:(const void *)arg2;
- (void)notifyDidEndDisplayingHandleBoxForSegment:(const void *)arg1;
- (void)notifyDidRemoveSegment:(const void *)arg1;
- (void)notifyWillUpdatePositionForSegment:(const void *)arg1;
- (void)notifyDidEndUpdatingPositionForSegment:(const void *)arg1;
- (void)notifyDidUpdatePosition:(const void *)arg1 forSegment:(const void *)arg2;
- (id)addStickerSegmentWithFileAtPath:(id)arg1 shouldCommit:(BOOL)arg2 error:(id *)arg3;
- (id)addTextSegmentWithText:(id)arg1 spatialInfo:(id)arg2 textStyles:(id)arg3 layerStyles:(id)arg4 normalizedMaximumWidth:(float)arg5 shouldCommit:(BOOL)arg6 error:(id *)arg7;
- (BOOL)removeSegmentWithID:(id)arg1 shouldCommit:(BOOL)arg2 error:(id *)arg3;
- (id)storylineClipSegments;
- (id)textSegmentWithID:(id)arg1 error:(id *)arg2;
- (id)stickerSegmentWithID:(id)arg1 error:(id *)arg2;
- (void)beginClippingWithCompletionHandler:(id /* block */)arg1;
- (void)endClippingWithCompletionHandler:(id /* block */)arg1;
- (CGPoint)convertViewPointToCanvasPoint:(CGPoint)arg1 inViewBounds:(CGRect)arg2 error:(id *)arg3;
- (CGPoint)convertCanvasPointToViewPoint:(CGPoint)arg1 inViewBounds:(CGRect)arg2 error:(id *)arg3;
- (BOOL)enterFocusModeWithSegmentID:(id)arg1 error:(id *)arg2;
- (BOOL)leaveFocusModeWithError:(id *)arg1;
- (id)commitChangesAndNotifyRenderUpdateWithIsFullUpdate:(BOOL)arg1;
- (id)commitChangesAndNotifyRenderUpdateWithPreviewTime:(struct)arg1 isFullUpdate:(BOOL)arg2;
- (id)templateAnalysisPbData;
- (void)exportClipBundleWithCompletionHandler:(id /* block */)arg1;
- (id)makeCoverAndExportClipbundleWithCompletionHandler:(id /* block */)arg1;
- (id)makeCoverAndExportClipbundleWithSnapshotOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (id)composingDelegate;
- (void)setComposingDelegate:(id)arg1;
- (SharedPtr<XMJMovieSessionV3>)backingSession;
- (void)setBackingSession:(SharedPtr<XMJMovieSessionV3>)arg1;
- (shared_ptr<XMJRenderView>)backingRenderView;
- (void)setBackingRenderView:(shared_ptr<XMJRenderView>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
