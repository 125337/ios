@interface WCPayBalanceMenuInfo : NSObject <PBCoding>
{
    BOOL _is_show_menu; // +0x8
    NSArray * _balance_menu_item; // +0x10
}
+ (void)PBArrayAdd_is_show_menu;
+ (void)PBArrayAdd_balance_menu_item;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (void)genFromDic:(id)arg1;
- (BOOL)is_show_menu;
- (void)setIs_show_menu:(BOOL)arg1;
- (id)balance_menu_item;
- (void)setBalance_menu_item:(id)arg1;
- (void).cxx_destruct;
@end
