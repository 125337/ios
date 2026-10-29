@interface MMEasterEggEffect : NSObject <MMEasterEggEffect>
{
    NSString * _sessionId; // +0x8
    NSString * _sceneId; // +0x10
    id <MMEasterEggEffectDelegate> _delegate; // +0x18
    UIView * _backgroundView; // +0x20
}
- (BOOL)isRunning;
- (BOOL)startEffectWithExtInfo:(id)arg1;
- (void)continueEffectWithInteractiveUI:(id)arg1;
- (void)endEffectWithReason:(unsigned int)arg1;
- (void)setBackgroundView:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)sceneId;
- (void)setSceneId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void).cxx_destruct;
@end

