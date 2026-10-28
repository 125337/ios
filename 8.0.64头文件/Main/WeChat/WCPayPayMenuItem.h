@interface WCPayPayMenuItem : NSObject <PBCoding>
{
    int _paymenu_jump_type; // +0x8
    NSString * _paymenu_jump_url; // +0x10
    NSString * _paymenu_username; // +0x18
    NSString * _paymenu_path; // +0x20
    NSString * _paymenu_title; // +0x28
}
+ (void)PBArrayAdd_paymenu_jump_type;
+ (void)PBArrayAdd_paymenu_jump_url;
+ (void)PBArrayAdd_paymenu_username;
+ (void)PBArrayAdd_paymenu_path;
+ (void)PBArrayAdd_paymenu_title;
+ (void)initialize;
+ (id)genFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (id)initFromDictionary:(id)arg1;
- (void)reportClick;
- (int)paymenu_jump_type;
- (void)setPaymenu_jump_type:(int)arg1;
- (id)paymenu_jump_url;
- (void)setPaymenu_jump_url:(id)arg1;
- (id)paymenu_username;
- (void)setPaymenu_username:(id)arg1;
- (id)paymenu_path;
- (void)setPaymenu_path:(id)arg1;
- (id)paymenu_title;
- (void)setPaymenu_title:(id)arg1;
- (void).cxx_destruct;
@end
