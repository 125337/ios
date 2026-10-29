@interface MJTemplateVersionInfo : NSObject <PBCoding, NSCopying>
{
    unsigned long long _iOSSDKVersionMin; // +0x8
    unsigned long long _iOSSDKVersionMax; // +0x10
    unsigned long long _AndroidSDKVersionMin; // +0x18
    unsigned long long _AndroidSDKVersionMax; // +0x20
    unsigned long long _harmonySDKVersionMin; // +0x28
    unsigned long long _harmonySDKVersionMax; // +0x30
}
+ (void)PBArrayAdd_iOSSDKVersionMin;
+ (void)PBArrayAdd_iOSSDKVersionMax;
+ (void)PBArrayAdd_AndroidSDKVersionMin;
+ (void)PBArrayAdd_AndroidSDKVersionMax;
+ (void)PBArrayAdd_harmonySDKVersionMin;
+ (void)PBArrayAdd_harmonySDKVersionMax;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithVersionInfo:(id)arg1;
- (id)convertToVideoTemplateVersionInfo;
- (id)convertToFinderTemplateCreationVersionInfo;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)iOSSDKVersionMin;
- (void)setIOSSDKVersionMin:(unsigned long long)arg1;
- (unsigned long long)iOSSDKVersionMax;
- (void)setIOSSDKVersionMax:(unsigned long long)arg1;
- (unsigned long long)AndroidSDKVersionMin;
- (void)setAndroidSDKVersionMin:(unsigned long long)arg1;
- (unsigned long long)AndroidSDKVersionMax;
- (void)setAndroidSDKVersionMax:(unsigned long long)arg1;
- (unsigned long long)harmonySDKVersionMin;
- (void)setHarmonySDKVersionMin:(unsigned long long)arg1;
- (unsigned long long)harmonySDKVersionMax;
- (void)setHarmonySDKVersionMax:(unsigned long long)arg1;
@end
