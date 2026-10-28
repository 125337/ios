@interface KSUPnPDiscoveryConfiguration : NSObject
{
    NSString * _searchTarget; // +0x8
    double _discoverTimeInterval; // +0x10
}
- (id)init;
- (void)setDiscoverTimeInterval:(double)arg1;
- (id)searchTarget;
- (void)setSearchTarget:(id)arg1;
- (double)discoverTimeInterval;
- (void).cxx_destruct;
@end
