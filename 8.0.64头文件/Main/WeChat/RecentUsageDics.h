@interface RecentUsageDics : MMObject <PBCoding>
{
    NSMutableDictionary * _uinqueIdAndlastUsedTimeWeApp; // +0x8
    NSMutableDictionary * _uinqueIdAndlastUsedTimeApp; // +0x10
    NSMutableDictionary * _uinqueIdAndlastUsedTimeDevice; // +0x18
}
+ (void)PBArrayAdd_uinqueIdAndlastUsedTimeWeApp;
+ (void)PBArrayAdd_uinqueIdAndlastUsedTimeApp;
+ (void)PBArrayAdd_uinqueIdAndlastUsedTimeDevice;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)uinqueIdAndlastUsedTimeWeApp;
- (void)setUinqueIdAndlastUsedTimeWeApp:(id)arg1;
- (id)uinqueIdAndlastUsedTimeApp;
- (void)setUinqueIdAndlastUsedTimeApp:(id)arg1;
- (id)uinqueIdAndlastUsedTimeDevice;
- (void)setUinqueIdAndlastUsedTimeDevice:(id)arg1;
- (void).cxx_destruct;
@end
