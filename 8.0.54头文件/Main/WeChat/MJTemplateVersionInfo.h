@interface MJTemplateVersionInfo : NSObject <PBCoding, NSCopying>
{
    unsigned long long _iOSSDKVersionMin; // +0x8
    unsigned long long _iOSSDKVersionMax; // +0x10
    unsigned long long _AndroidSDKVersionMin; // +0x18
    unsigned long long _AndroidSDKVersionMax; // +0x20
}
+ (void)PBArrayAdd_iOSSDKVersionMin;
+ (void)PBArrayAdd_iOSSDKVersionMax;
+ (void)PBArrayAdd_AndroidSDKVersionMin;
+ (void)PBArrayAdd_AndroidSDKVersionMax;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithVersionInfo:(id)arg1;
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
@end

