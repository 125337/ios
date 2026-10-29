@interface WCPayOfflinePayPageJumpInfo : NSObject <PBCoding>
{
    int _jump_type; // +0x8
    NSString * _icon_url; // +0x10
    NSString * _title; // +0x18
    NSString * _tiny_app_username; // +0x20
    NSString * _tiny_app_path; // +0x28
    NSString * _h5_url; // +0x30
}
+ (void)PBArrayAdd_icon_url;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_tiny_app_username;
+ (void)PBArrayAdd_tiny_app_path;
+ (void)PBArrayAdd_h5_url;
+ (void)PBArrayAdd_jump_type;
+ (void)initialize;
+ (id)getJumpInfoCacheData;
+ (BOOL)saveJumpInfoCacheData:(id)arg1;
+ (void)clearJumpInfoCacheData;
- (id)getPBPropertyTable;
- (id)icon_url;
- (void)setIcon_url:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)tiny_app_username;
- (void)setTiny_app_username:(id)arg1;
- (id)tiny_app_path;
- (void)setTiny_app_path:(id)arg1;
- (id)h5_url;
- (void)setH5_url:(id)arg1;
- (int)jump_type;
- (void)setJump_type:(int)arg1;
- (void).cxx_destruct;
@end

