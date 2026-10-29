@interface WCCanvasComponentScrollGroupInfo : MMObject <NSCoding>
{
    NSArray * _componentItemList; // +0x8
    NSString * _indicatorColor; // +0x10
    NSString * _currentIndicatorColor; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)componentItemList;
- (void)setComponentItemList:(id)arg1;
- (id)indicatorColor;
- (void)setIndicatorColor:(id)arg1;
- (id)currentIndicatorColor;
- (void)setCurrentIndicatorColor:(id)arg1;
- (void).cxx_destruct;
@end

