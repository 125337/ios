@interface HealthKitSampleSource : MMObject <PBCoding>
{
    BOOL _bIsAppleWatch; // +0x8
    BOOL _bIsLocalDevice; // +0x9
    BOOL _bIsInWhiteList; // +0xa
    unsigned int _uiStepCount; // +0xc
    NSString * _nsBundleId; // +0x10
    NSString * _nsAppName; // +0x18
}
+ (void)PBArrayAdd_nsBundleId;
+ (void)PBArrayAdd_nsAppName;
+ (void)PBArrayAdd_uiStepCount;
+ (void)PBArrayAdd_bIsAppleWatch;
+ (void)PBArrayAdd_bIsLocalDevice;
+ (void)PBArrayAdd_bIsInWhiteList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)nsBundleId;
- (void)setNsBundleId:(id)arg1;
- (id)nsAppName;
- (void)setNsAppName:(id)arg1;
- (unsigned int)uiStepCount;
- (void)setUiStepCount:(unsigned int)arg1;
- (BOOL)bIsAppleWatch;
- (void)setBIsAppleWatch:(BOOL)arg1;
- (BOOL)bIsLocalDevice;
- (void)setBIsLocalDevice:(BOOL)arg1;
- (BOOL)bIsInWhiteList;
- (void)setBIsInWhiteList:(BOOL)arg1;
- (void).cxx_destruct;
@end
