@interface WCFinderBusinessTabModel : NSObject <PBCoding>
{
    long long _findRedDotExposeCount; // +0x8
    long long _findRedDotClickCount; // +0x10
    long long _lastUpdateTimeStamp; // +0x18
}
+ (void)PBArrayAdd_findRedDotExposeCount;
+ (void)PBArrayAdd_findRedDotClickCount;
+ (void)PBArrayAdd_lastUpdateTimeStamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)cleanCount;
- (long long)lastUpdateTimeStamp;
- (long long)findRedDotExposeCount;
- (void)setFindRedDotExposeCount:(long long)arg1;
- (long long)findRedDotClickCount;
- (void)setFindRedDotClickCount:(long long)arg1;
- (void)setLastUpdateTimeStamp:(long long)arg1;
@end
