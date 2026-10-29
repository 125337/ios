@interface WCFinderAntiAddictSetting : NSObject <PBCoding>
{
    unsigned long long _antiAddictPassSeconds; // +0x8
    unsigned long long _antiAddictLastLiftCurfewTimeStamp; // +0x10
    unsigned long long _antiAddictPassUpdateTimeStamp; // +0x18
    unsigned long long _antiSceneTotalWatchSeconds; // +0x20
    unsigned long long _antiSceneTotalWatchUpdateTimeStamp; // +0x28
}
+ (void)PBArrayAdd_antiAddictPassSeconds;
+ (void)PBArrayAdd_antiAddictLastLiftCurfewTimeStamp;
+ (void)PBArrayAdd_antiAddictPassUpdateTimeStamp;
+ (void)PBArrayAdd_antiSceneTotalWatchSeconds;
+ (void)PBArrayAdd_antiSceneTotalWatchUpdateTimeStamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)antiAddictPassSeconds;
- (void)setAntiAddictPassSeconds:(unsigned long long)arg1;
- (unsigned long long)antiAddictLastLiftCurfewTimeStamp;
- (void)setAntiAddictLastLiftCurfewTimeStamp:(unsigned long long)arg1;
- (unsigned long long)antiAddictPassUpdateTimeStamp;
- (void)setAntiAddictPassUpdateTimeStamp:(unsigned long long)arg1;
- (unsigned long long)antiSceneTotalWatchSeconds;
- (void)setAntiSceneTotalWatchSeconds:(unsigned long long)arg1;
- (unsigned long long)antiSceneTotalWatchUpdateTimeStamp;
- (void)setAntiSceneTotalWatchUpdateTimeStamp:(unsigned long long)arg1;
@end
