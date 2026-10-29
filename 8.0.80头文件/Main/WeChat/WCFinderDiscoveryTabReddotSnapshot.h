@interface WCFinderDiscoveryTabReddotSnapshot : NSObject
{
    BOOL _hasSnsReddot; // +0x8
    unsigned long long _currentDiscoveryBusinessMask; // +0x10
    NSMutableArray * _items; // +0x18
}
- (id)init;
- (BOOL)hasSnsReddot;
- (void)setHasSnsReddot:(BOOL)arg1;
- (unsigned long long)currentDiscoveryBusinessMask;
- (void)setCurrentDiscoveryBusinessMask:(unsigned long long)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
