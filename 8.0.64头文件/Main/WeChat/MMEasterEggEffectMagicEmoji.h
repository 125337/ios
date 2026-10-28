@interface MMEasterEggEffectMagicEmoji : MMEasterEggEffect <_TtP6WeChat30IMEEasterEggAnimationExtension_>
{
    BOOL _running; // +0x8
    NSString * _magicEmojiEffectId; // +0x10
    MMTimer * _timeoutTimer; // +0x18
}
- (BOOL)startEffectWithExtInfo:(id)arg1;
- (BOOL)joinEffectWithExtInfo:(id)arg1;
- (void)continueEffectWithInteractiveUI:(id)arg1;
- (void)endEffectWithReason:(unsigned int)arg1;
- (void)setBackgroundView:(id)arg1;
- (BOOL)checkMatchForId:(id)arg1 sessionId:(id)arg2;
- (void)privateEndEffect;
- (void)timeout;
- (id)description;
- (void)onEasterEggAnimationStart:(id)arg1 eggKey:(id)arg2;
- (void)onEasterEggAnimationClick:(id)arg1 eggKey:(id)arg2;
- (void)onEasterEggAnimationEnd:(id)arg1 eggKey:(id)arg2;
- (id)magicEmojiEffectId;
- (void)setMagicEmojiEffectId:(id)arg1;
- (BOOL)isRunning;
- (void)setRunning:(BOOL)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end
