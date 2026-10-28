@interface MMFinderLiveGiftAttackRewardRenderContext : NSObject
{
    MMWeEffectManager * _weeffectManager; // +0x8
    NSValue * _renderRegion; // +0x10
    NSValue * _startPos; // +0x18
    long long _renderScriptId; // +0x20
    GiftAttackRenderScriptObj * _renderScript; // +0x28
}
- (BOOL)isValid;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (id)renderRegion;
- (void)setRenderRegion:(id)arg1;
- (id)startPos;
- (void)setStartPos:(id)arg1;
- (long long)renderScriptId;
- (void)setRenderScriptId:(long long)arg1;
- (id)renderScript;
- (void)setRenderScript:(id)arg1;
- (void).cxx_destruct;
@end
