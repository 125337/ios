@interface WCPayBindCardListApplyNewCardInfo : NSObject <PBCoding>
{
    long long _menu_jump_type; // +0x8
    NSString * _menu_jump_url; // +0x10
    NSString * _menu_username; // +0x18
    NSString * _menu_path; // +0x20
    NSString * _menu_title; // +0x28
    NSString * _menu_icon_url; // +0x30
}
+ (void)PBArrayAdd_menu_jump_type;
+ (void)PBArrayAdd_menu_jump_url;
+ (void)PBArrayAdd_menu_username;
+ (void)PBArrayAdd_menu_path;
+ (void)PBArrayAdd_menu_title;
+ (void)PBArrayAdd_menu_icon_url;
+ (void)initialize;
+ (id)genFromDictionary:(id)arg1;
+ (void)saveFromDictionary:(id)arg1 withScene:(int)arg2;
+ (id)loadFromFileWithScene:(int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (long long)menu_jump_type;
- (void)setMenu_jump_type:(long long)arg1;
- (id)menu_jump_url;
- (void)setMenu_jump_url:(id)arg1;
- (id)menu_username;
- (void)setMenu_username:(id)arg1;
- (id)menu_path;
- (void)setMenu_path:(id)arg1;
- (id)menu_title;
- (void)setMenu_title:(id)arg1;
- (id)menu_icon_url;
- (void)setMenu_icon_url:(id)arg1;
- (void).cxx_destruct;
@end
