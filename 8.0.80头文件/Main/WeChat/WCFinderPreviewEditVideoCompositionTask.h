@interface WCFinderPreviewEditVideoCompositionTask : WCSightVideoCompositeTask
{
    BOOL _shouldUseMAVCompositionLib; // +0x8
    BOOL _postEncodingPlanChangedAfterPrediction; // +0x9
    id /* block */ _doneBlock; // +0x10
    id /* block */ _videoProgressCallback; // +0x18
    MAVVideoComposition * _mavLibComposition; // +0x20
    NSArray * _mavLibOriginalVideoPathList; // +0x28
    NSArray * _selectedPreviewAssetInfoList; // +0x30
    AVAsset * _compositedPreviewVideoAsset; // +0x38
    VideoEncodeTask * _encodeTask; // +0x40
    id /* block */ _postEncodingPlanHandler; // +0x48
    unsigned long long _enterScene; // +0x50
    CGSize _previewThumbSize; // +0x58
    CGPoint _mavLibEmotionOffset; // +0x68
}
+ (id)generateFinderConstrainFromMergedImageFromImageList:(id)arg1 forSize:(CGSize)arg2;
- (id)initWithTaskId:(id)arg1 srcPHAsset:(id)arg2 editVideoAttr:(id)arg3 compositionAttr:(id)arg4 previewThumbImageSize:(CGSize)arg5;
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clearTaskData;
- (id)getPreparedAssetFileURL;
- (void)prepareTaskWithBlock:(id /* block */)arg1;
- (BOOL)removeLocalCache;
- (void)generatePreviewImageAtStartTime:(double)arg1 completion:(id /* block */)arg2;
- (CGSize)_getEditedAssetSize;
- (void)_prepareEditAttrWithResultBlock:(id /* block */)arg1;
- (id)taskId;
- (long long)taskType;
- (BOOL)isValid;
- (void)onTaskPending;
- (void)onTaskReady;
- (void)onTaskStarted;
- (void)onTaskStoppedWithResult:(id)arg1 session:(id)arg2;
- (void)onTaskInterrupted;
- (void)onTaskDetached;
- (id)getThumbImageForEditVideoFromPath:(id)arg1;
- (void)reportCompositionFailed;
- (id)generatePreviewImage;
- (id /* block */)doneBlock;
- (void)setDoneBlock:(id /* block */)arg1;
- (id /* block */)videoProgressCallback;
- (void)setVideoProgressCallback:(id /* block */)arg1;
- (CGSize)previewThumbSize;
- (void)setPreviewThumbSize:(CGSize)arg1;
- (BOOL)shouldUseMAVCompositionLib;
- (void)setShouldUseMAVCompositionLib:(BOOL)arg1;
- (id)mavLibComposition;
- (void)setMavLibComposition:(id)arg1;
- (id)mavLibOriginalVideoPathList;
- (void)setMavLibOriginalVideoPathList:(id)arg1;
- (CGPoint)mavLibEmotionOffset;
- (void)setMavLibEmotionOffset:(CGPoint)arg1;
- (id)selectedPreviewAssetInfoList;
- (void)setSelectedPreviewAssetInfoList:(id)arg1;
- (id)compositedPreviewVideoAsset;
- (void)setCompositedPreviewVideoAsset:(id)arg1;
- (id)encodeTask;
- (void)setEncodeTask:(id)arg1;
- (id /* block */)postEncodingPlanHandler;
- (void)setPostEncodingPlanHandler:(id /* block */)arg1;
- (BOOL)postEncodingPlanChangedAfterPrediction;
- (void)setPostEncodingPlanChangedAfterPrediction:(BOOL)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
