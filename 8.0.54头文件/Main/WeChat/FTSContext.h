@interface FTSContext : NSObject
{
    unsigned long long _searchScene; // +0x8
    unsigned long long _customerServiceType; // +0x10
}
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (unsigned long long)customerServiceType;
- (void)setCustomerServiceType:(unsigned long long)arg1;
@end

