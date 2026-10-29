@interface FavCapacityInfo : NSObject
{
    BOOL _capacityEntryEnabled; // +0x8
    long long _usedCapacity; // +0x10
    long long _totalCapacity; // +0x18
    NSString * _usedCapacityStr; // +0x20
    NSString * _totalCapacityStr; // +0x28
}
+ (id)makeWithUsedCapacity:(long long)arg1 totalCapacity:(long long)arg2 usedCapacityStr:(id)arg3 totalCapacityStr:(id)arg4 capacityEntryEnabled:(BOOL)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)usedCapacity;
- (void)setUsedCapacity:(long long)arg1;
- (long long)totalCapacity;
- (void)setTotalCapacity:(long long)arg1;
- (id)usedCapacityStr;
- (void)setUsedCapacityStr:(id)arg1;
- (id)totalCapacityStr;
- (void)setTotalCapacityStr:(id)arg1;
- (BOOL)capacityEntryEnabled;
- (void)setCapacityEntryEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
