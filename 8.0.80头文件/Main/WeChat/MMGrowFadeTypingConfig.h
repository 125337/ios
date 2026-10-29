@interface MMGrowFadeTypingConfig : NSObject
{
    double _fadeInDuration; // +0x8
    double _holdDuration; // +0x10
    double _fadeOutDuration; // +0x18
    double _endAlpha; // +0x20
    double _charStagger; // +0x28
}
+ (id)sharedConfig;
+ (BOOL)preferDarkTheme;
+ (id)baseColor;
+ (void)setDebugThemeOverride:(long long)arg1;
+ (long long)debugThemeOverride;
- (id)init;
- (void)resetToDefaults;
- (void)load;
- (void)save;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)arg1;
- (double)holdDuration;
- (void)setHoldDuration:(double)arg1;
- (double)fadeOutDuration;
- (void)setFadeOutDuration:(double)arg1;
- (double)endAlpha;
- (void)setEndAlpha:(double)arg1;
- (double)charStagger;
- (void)setCharStagger:(double)arg1;
@end
