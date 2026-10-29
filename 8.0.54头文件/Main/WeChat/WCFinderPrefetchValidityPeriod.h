@interface WCFinderPrefetchValidityPeriod : NSObject
{
    unsigned long long _validityPeriodOfFollowTab; // +0x8
    unsigned long long _validityPeriodOfFriendTab; // +0x10
    unsigned long long _validityPeriodOfMachineTab; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)init;
- (unsigned long long)validityPeriodOfFollowTab;
- (void)setValidityPeriodOfFollowTab:(unsigned long long)arg1;
- (unsigned long long)validityPeriodOfFriendTab;
- (void)setValidityPeriodOfFriendTab:(unsigned long long)arg1;
- (unsigned long long)validityPeriodOfMachineTab;
- (void)setValidityPeriodOfMachineTab:(unsigned long long)arg1;
@end

