@interface TingEmojiRainAnimator : NSObject
{
    NSMutableArray * _particleViews; // +0x8
    NSMutableArray * _speeds; // +0x10
    CADisplayLink * _displayLink; // +0x18
    UIView * _overlay; // +0x20
    long long _spawnedCount; // +0x28
    double _nextSpawnTime; // +0x30
    id /* block */ _completion; // +0x38
    NSString * _sessionId; // +0x40
}
+ (BOOL)playInContainerView:(id)arg1 particleText:(id)arg2 completion:(id /* block */)arg3;
+ (BOOL)playInContainerView:(id)arg1 particleText:(id)arg2 sessionId:(id)arg3 completion:(id /* block */)arg4;
+ (void)cancelSession:(id)arg1;
+ (void)cancelAll;
- (id)loadParticleImage:(id)arg1;
- (void)onFrameUpdate:(id)arg1;
- (void)finishAndCallCompletion:(BOOL)arg1;
- (id)particleViews;
- (void)setParticleViews:(id)arg1;
- (id)speeds;
- (void)setSpeeds:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)overlay;
- (void)setOverlay:(id)arg1;
- (long long)spawnedCount;
- (void)setSpawnedCount:(long long)arg1;
- (double)nextSpawnTime;
- (void)setNextSpawnTime:(double)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
