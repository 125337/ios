@interface MMLiveEnergyWeEffectUtilities : NSObject
+ (long long)faceAlignmentSettingsLevelFromSettings:(const void *)arg1;
+ (BOOL)adjustSettings:(void *)arg1 toLevel:(long long)arg2;
+ (BOOL)isFaceAlignmentEqualWithSettings1:(const void *)arg1 settings2:(const void *)arg2;
+ (long long)faceAlignmentItemLevelFromConfig:(int)arg1;
+ (int)faceAlignmentConfigFromItemLevel:(long long)arg1 defaultConfig:(int)arg2;
+ (long long)occlusionSegmentItemLevelFromConfig:(int)arg1;
+ (int)occlusionSegmentConfigFromItemLevel:(long long)arg1 defaultConfig:(int)arg2;
@end
