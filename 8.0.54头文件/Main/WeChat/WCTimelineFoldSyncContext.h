@interface WCTimelineFoldSyncContext : NSObject
{
    unsigned int _foldSectionSize; // +0x8
    unsigned long long _nearbyFoldId; // +0x10
    unsigned long long _minIndexId; // +0x18
}
- (id)description;
- (unsigned long long)nearbyFoldId;
- (void)setNearbyFoldId:(unsigned long long)arg1;
- (unsigned long long)minIndexId;
- (void)setMinIndexId:(unsigned long long)arg1;
- (unsigned int)foldSectionSize;
- (void)setFoldSectionSize:(unsigned int)arg1;
@end

