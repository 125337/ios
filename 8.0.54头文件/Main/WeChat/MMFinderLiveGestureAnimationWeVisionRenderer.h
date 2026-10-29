@interface MMFinderLiveGestureAnimationWeVisionRenderer : NSObject <MMFinderLiveGestureAnimationExternalRendering>
{
    id <MMFinderLiveGestureAnimationExternalRenderingDelegate> _delegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    NSMutableDictionary * _renderScriptIdToRenderTaskMap; // +0x18
    NSMutableDictionary * _animationResourceIdToRenderTaskMap; // +0x20
    NSMutableSet * _gestureDeduplicateSet; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)addGestureAnimationForCurrentUserWithGestureId:(id)arg1 instanceId:(id)arg2 translationX:(double)arg3 translationY:(double)arg4 rotation:(double)arg5 scale:(double)arg6;
- (void)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (id)liveTask;
- (void)startRenderingOfTask:(id)arg1;
- (void)completeRenderingOfAnimationWithResourceId:(long long)arg1 instanceId:(int)arg2;
- (void)playSoundEffectForGestureWithId:(id)arg1;
- (void)reportAnimationPlayingWithRenderTask:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)renderScriptIdToRenderTaskMap;
- (void)setRenderScriptIdToRenderTaskMap:(id)arg1;
- (id)animationResourceIdToRenderTaskMap;
- (void)setAnimationResourceIdToRenderTaskMap:(id)arg1;
- (id)gestureDeduplicateSet;
- (void)setGestureDeduplicateSet:(id)arg1;
- (void).cxx_destruct;
@end

