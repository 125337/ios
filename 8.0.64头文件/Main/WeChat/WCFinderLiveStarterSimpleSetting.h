@interface WCFinderLiveStarterSimpleSetting : NSObject <PBCoding>
{
    NSDate * _lastDisplayDate; // +0x8
    long long _showCount; // +0x10
}
+ (void)PBArrayAdd_lastDisplayDate;
+ (void)PBArrayAdd_showCount;
+ (void)initialize;
+ (id)getSimpleSetting;
- (id)getPBPropertyTable;
- (id)description;
- (void)saveSimpleSettings;
- (BOOL)shouldDisplay;
- (id)lastDisplayDate;
- (void)setLastDisplayDate:(id)arg1;
- (long long)showCount;
- (void)setShowCount:(long long)arg1;
- (void).cxx_destruct;
@end
