@interface MJServerAITemplateComposingSession : MJTemplateSession
{
    BOOL _preparingPreviewInfrastructure; // +0x8
    BOOL _assetClipSkimmingPreparing; // +0x9
    OMCComposingSession * _composingSession; // +0x10
    OMJRenderView * _renderView; // +0x18
    OMCExportSession * _exportSession; // +0x20
    MJMovieComposingSession * _hiddenMovieComposingSession; // +0x28
    MJPlaybackViewModel * _playbackViewModel; // +0x30
    NSMutableArray * _pendingPreviewInfrastructureCompletionHandlers; // +0x38
    OMJID * _assetClipSkimmingSegmentID; // +0x40
    unsigned long long _assetClipSkimmingGeneration; // +0x48
    NSValue * _pendingAssetClipSkimTime; // +0x50
    NSValue * _pendingAssetClipFinishStartTime; // +0x58
    id /* block */ _pendingAssetClipFinishCompletionHandler; // +0x60
}
- (id)init;
- (BOOL)createMaasSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isPlaying;
- (double)videoAspectRatio;
- (struct)duration;
- (void)preparePreviewInfrastructureWithCompletionHandler:(id /* block */)arg1;
- (void)invalidateWithCompletionHandler:(id /* block */)arg1;
- (void)_completePreparePreviewInfrastructureWithError:(id)arg1;
- (id)_createRenderViewIfNeeded;
- (void)updateComposingSession:(id)arg1;
- (id)allStoryClipSegments;
- (id)allStoryClipSegmentsForAssetClipper;
- (id)allStoryClipSegmentsForOptimizedAssetClipper;
- (BOOL)applyStoryClipSegmentOrderWithSegmentIDs:(id)arg1;
- (BOOL)applyOptimizedStoryClipSegmentOrderWithSegmentIDs:(id)arg1;
- (BOOL)applyStoryClipSegmentOrderWithSegmentIDs:(id)arg1 usesOptimizedClipSegments:(BOOL)arg2;
- (id)storyClipSegmentsForAssetClipperUsingOptimizedSegments:(BOOL)arg1;
- (void)commitAssetReorderTimelineMutationWithCompletionHandler:(id /* block */)arg1;
- (void)beginAssetClipSkimmingWithSegmentID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)skimAssetClipWithSegmentID:(id)arg1 toTimeInMedia:(struct)arg2;
- (void)finishAssetClipSkimmingWithSegmentID:(id)arg1 startTimeInMedia:(struct)arg2 completionHandler:(id /* block */)arg3;
- (void)restoreAssetClipTimeRangesForSegmentIDs:(id)arg1 timeRanges:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)assetClipSegmentWithID:(id)arg1;
- (BOOL)isCurrentAssetClipSkimmingSegmentID:(id)arg1 generation:(unsigned long long)arg2;
- (void)finishPreparingAssetClipSkimmingWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performFinishAssetClipSkimmingWithSegmentID:(id)arg1 startTimeInMedia:(struct)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)isClipSegment:(id)arg1 matchingTimeRange:(struct)arg2;
- (BOOL)clipSegments:(id)arg1 matchTimeRanges:(id)arg2;
- (BOOL)restoreClipSegments:(id)arg1 timeRanges:(id)arg2;
- (void)rollbackClipSegments:(id)arg1 timeRanges:(id)arg2 previewTime:(struct)arg3 logName:(id)arg4 originalError:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)clearAssetClipSkimmingStateWithError:(id)arg1;
- (void)resetAssetClipSkimmingState;
- (void)applyMusicStatusWithBGMEnabled:(BOOL)arg1 OSTEnabled:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (id)applyBGMEnabled:(BOOL)arg1 toTimeline:(id)arg2;
- (void)commitTimelineMutationWithPreviewTime:(struct)arg1 shouldForceUpdatePreview:(BOOL)arg2 isFullUpdate:(BOOL)arg3 logName:(id)arg4 completionHandler:(id /* block */)arg5;
- (BOOL)isStoryClipSegmentIDList:(id)arg1 matchesClipSegments:(id)arg2;
- (unsigned long long)indexOfStoryClipSegmentWithID:(id)arg1 inClipSegments:(id)arg2;
- (void)startPlayingWithLoopCount:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)startPlayingWithTimeRange:(struct)arg1 loopCount:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)discardPendingStartPlayingOperations;
- (void)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)performStartPlayingWithLoopCount:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)performStartPlayingWithTimeRange:(struct)arg1 loopCount:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)performStopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)_preparePlaybackViewModelIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)_teardownPlaybackViewModel;
- (void)cancelCurrentOperationIfNeeded;
- (void)startExportingWithSettings:(id)arg1 exportPath:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)composingSession;
- (void)setComposingSession:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (id)exportSession;
- (void)setExportSession:(id)arg1;
- (id)hiddenMovieComposingSession;
- (void)setHiddenMovieComposingSession:(id)arg1;
- (id)playbackViewModel;
- (void)setPlaybackViewModel:(id)arg1;
- (id)pendingPreviewInfrastructureCompletionHandlers;
- (void)setPendingPreviewInfrastructureCompletionHandlers:(id)arg1;
- (BOOL)preparingPreviewInfrastructure;
- (void)setPreparingPreviewInfrastructure:(BOOL)arg1;
- (id)assetClipSkimmingSegmentID;
- (void)setAssetClipSkimmingSegmentID:(id)arg1;
- (unsigned long long)assetClipSkimmingGeneration;
- (void)setAssetClipSkimmingGeneration:(unsigned long long)arg1;
- (BOOL)assetClipSkimmingPreparing;
- (void)setAssetClipSkimmingPreparing:(BOOL)arg1;
- (id)pendingAssetClipSkimTime;
- (void)setPendingAssetClipSkimTime:(id)arg1;
- (id)pendingAssetClipFinishStartTime;
- (void)setPendingAssetClipFinishStartTime:(id)arg1;
- (id /* block */)pendingAssetClipFinishCompletionHandler;
- (void)setPendingAssetClipFinishCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
