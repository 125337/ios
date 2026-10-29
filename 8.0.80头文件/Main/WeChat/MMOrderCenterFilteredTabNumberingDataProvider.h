@interface MMOrderCenterFilteredTabNumberingDataProvider : NSObject <MMOrderCenterTabNumberingDataProvider>
{
    NSString * _filteringAppId; // +0x8
}
- (id)initWithFilteringAppId:(id)arg1;
- (void)landingPageTabCountItemsWithForce:(BOOL)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (id)filteringAppId;
- (void)setFilteringAppId:(id)arg1;
- (void).cxx_destruct;
@end
