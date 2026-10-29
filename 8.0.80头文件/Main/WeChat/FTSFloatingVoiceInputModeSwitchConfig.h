@interface FTSFloatingVoiceInputModeSwitchConfig : FTSFloatingVoiceInputViewConfig
{
    long long _defaultMode; // +0x8
    long long _styleType; // +0x10
    long long _backgroundType; // +0x18
}
- (long long)defaultMode;
- (void)setDefaultMode:(long long)arg1;
- (long long)styleType;
- (void)setStyleType:(long long)arg1;
- (long long)backgroundType;
- (void)setBackgroundType:(long long)arg1;
@end
