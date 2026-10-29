@interface MMLiveFaceLogic : NSObject
{
    BOOL _isFaceDetectionStarted; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0x18
    double _lastRefreshTime; // +0x20
    id /* block */ _completeBlock; // +0x28
}
+ (id)baseResourceDir;
- (id)initWithTaskId:(id)arg1;
- (BOOL)startFaceDetectionWithCompleteBlock:(id /* block */)arg1;
- (void)onWeEffectProcessedRenderFrameRefresh:(id)arg1;
- (void)onWeEffectManagerDestroyed:(id)arg1;
- (BOOL)applyLiveFaceDetectMaterial;
- (void)startWeEffectManagerIfNeed;
- (void)stopWeEffectManagerIfNeed;
- (id)getTemplateResourcePath;
- (id)getActualResourcePath;
- (id)weeffectManager;
- (id)finderLiveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (BOOL)isFaceDetectionStarted;
- (void)setIsFaceDetectionStarted:(BOOL)arg1;
- (double)lastRefreshTime;
- (void)setLastRefreshTime:(double)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
