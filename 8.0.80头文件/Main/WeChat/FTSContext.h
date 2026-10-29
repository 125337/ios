@interface FTSContext : NSObject
{
    BOOL _autoStartGreenMic; // +0x8
    unsigned long long _searchScene; // +0x10
    unsigned long long _customerServiceType; // +0x18
    unsigned long long _searchEntryType; // +0x20
    unsigned long long _currentTab; // +0x28
}
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (unsigned long long)customerServiceType;
- (void)setCustomerServiceType:(unsigned long long)arg1;
- (unsigned long long)searchEntryType;
- (void)setSearchEntryType:(unsigned long long)arg1;
- (unsigned long long)currentTab;
- (void)setCurrentTab:(unsigned long long)arg1;
- (BOOL)autoStartGreenMic;
- (void)setAutoStartGreenMic:(BOOL)arg1;
@end
