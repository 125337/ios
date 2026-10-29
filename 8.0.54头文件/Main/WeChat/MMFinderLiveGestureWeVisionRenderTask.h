@interface MMFinderLiveGestureWeVisionRenderTask : NSObject
{
    BOOL _started; // +0x8
    long long _renderScriptId; // +0x10
    long long _animationResourceId; // +0x18
    MMFinderLiveGestureWeVisionRenderParams * _parameters; // +0x20
}
- (long long)renderScriptId;
- (void)setRenderScriptId:(long long)arg1;
- (long long)animationResourceId;
- (void)setAnimationResourceId:(long long)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (void).cxx_destruct;
@end

