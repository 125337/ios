@interface MAVEffectManager : NSObject
{
    NSMutableArray * _effectArray; // +0x8
}
+ (id)createEffect:(long long)arg1;
- (id)init;
- (id)createEffect:(long long)arg1;
- (id)createEffect:(long long)arg1 path:(id)arg2;
- (unsigned long long)addEffect:(id)arg1;
- (id)addBlurEffect;
- (id)addGradientBlurEffect;
- (void)removeEffect:(id)arg1;
- (void)removeEffectOfType:(long long)arg1;
- (void)clearEffects;
- (void)clearStickers;
- (void)setEffectParams:(long long)arg1 params:(id)arg2;
- (void)setEffectRangeParams:(long long)arg1 params:(id)arg2;
- (BOOL)bringToFront:(long long)arg1;
- (int)getVLogEffectReplacementImages:(long long)arg1;
- (CGSize)getVLogEffectSize:(long long)arg1;
- (long long)getVLogEffectDuration:(long long)arg1;
- (void)reset;
- (BOOL)isEffectArrayEmpty;
- (id)effectArray;
- (void)setEffectArray:(id)arg1;
- (void).cxx_destruct;
@end

