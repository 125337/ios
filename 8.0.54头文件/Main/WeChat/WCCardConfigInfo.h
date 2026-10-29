@interface WCCardConfigInfo : MMObject <PBCoding>
{
    BOOL _isShowShoppingMall; // +0x8
    NSString * _emptyTips; // +0x10
    NSString * _shoppingMallTitle; // +0x18
    NSString * _shoppingMallUrl; // +0x20
}
+ (void)PBArrayAdd_emptyTips;
+ (void)PBArrayAdd_shoppingMallTitle;
+ (void)PBArrayAdd_shoppingMallUrl;
+ (void)PBArrayAdd_isShowShoppingMall;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)parseFromJSONStr:(id)arg1;
- (id)emptyTips;
- (void)setEmptyTips:(id)arg1;
- (id)shoppingMallTitle;
- (void)setShoppingMallTitle:(id)arg1;
- (id)shoppingMallUrl;
- (void)setShoppingMallUrl:(id)arg1;
- (BOOL)isShowShoppingMall;
- (void)setIsShowShoppingMall:(BOOL)arg1;
- (void).cxx_destruct;
@end

