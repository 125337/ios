@interface MMOrderCenterLandingPageTabCountItem : NSObject
{
    long long _tabType; // +0x8
    long long _orderCount; // +0x10
}
+ (id)tabCountItemWithDtoObject:(id)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (long long)orderCount;
- (void)setOrderCount:(long long)arg1;
@end

