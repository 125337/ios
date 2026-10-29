@interface MMFinderLiveBatchRewardAnimationWeVisionRenderer : NSObject <MMFinderLiveGiftResourceMgrExt>
{
    id <MMFinderLiveBatchRewardAnimationRenderingDelegate> _delegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    NSMutableArray * _renderTaskQueue; // +0x18
    NSMutableArray * _waitingTaskQueue; // +0x20
    MMFinderLiveBatchRewardWeVisionRenderTask * _currentRenderTask; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)addBatchRewardAnimationWithGift:(id)arg1 comboId:(id)arg2 animationImgNum:(unsigned int)arg3;
- (void)tryNextRenderTask;
- (BOOL)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)onCurrentTaskAnimationEnd;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (void)initActualResDir;
- (id)getTemplateResourcePath;
- (id)getActualTemplateResourcePath;
- (id)getActualLuaScriptFolderPath;
- (id)getActualLuaScriptFilePath;
- (id)liveTask;
- (void)startRenderingOfTask:(id)arg1;
- (void)completeCurrentTaskRenderingOfAnimationWithCompleteBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)renderTaskQueue;
- (void)setRenderTaskQueue:(id)arg1;
- (id)waitingTaskQueue;
- (void)setWaitingTaskQueue:(id)arg1;
- (id)currentRenderTask;
- (void)setCurrentRenderTask:(id)arg1;
- (void).cxx_destruct;
@end
