@interface MJMaterialSlot : NSObject <PBCoding, NSCopying>
{
    unsigned long long _slotIndex; // +0x8
    unsigned long long _startTimeMs; // +0x10
    unsigned long long _endTimeMs; // +0x18
}
+ (void)PBArrayAdd_slotIndex;
+ (void)PBArrayAdd_startTimeMs;
+ (void)PBArrayAdd_endTimeMs;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithMaterialSlot:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)slotIndex;
- (void)setSlotIndex:(unsigned long long)arg1;
- (unsigned long long)startTimeMs;
- (void)setStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)endTimeMs;
- (void)setEndTimeMs:(unsigned long long)arg1;
@end
