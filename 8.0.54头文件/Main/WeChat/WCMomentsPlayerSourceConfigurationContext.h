@interface WCMomentsPlayerSourceConfigurationContext : NSObject
{
    BOOL _Values_switchSourceEnabled; // +0x8
    BOOL _Values_previewsLDForWSFeeds; // +0x9
    BOOL _Values_canPlayHDRVideos; // +0xa
    BOOL _Results_canSwitchSource; // +0xb
    long long _Values_previewSourceMode; // +0x10
    long long _Values_previewMediaSourceForKaraFallback; // +0x18
    long long _Results_previewSourceMode; // +0x20
}
- (BOOL)Values_switchSourceEnabled;
- (void)setValues_switchSourceEnabled:(BOOL)arg1;
- (long long)Values_previewSourceMode;
- (void)setValues_previewSourceMode:(long long)arg1;
- (BOOL)Values_previewsLDForWSFeeds;
- (void)setValues_previewsLDForWSFeeds:(BOOL)arg1;
- (long long)Values_previewMediaSourceForKaraFallback;
- (void)setValues_previewMediaSourceForKaraFallback:(long long)arg1;
- (BOOL)Values_canPlayHDRVideos;
- (void)setValues_canPlayHDRVideos:(BOOL)arg1;
- (BOOL)Results_canSwitchSource;
- (void)setResults_canSwitchSource:(BOOL)arg1;
- (long long)Results_previewSourceMode;
- (void)setResults_previewSourceMode:(long long)arg1;
@end

