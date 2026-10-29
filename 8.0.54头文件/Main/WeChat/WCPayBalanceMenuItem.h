@interface WCPayBalanceMenuItem : NSObject <PBCoding>
{
    NSString * _title; // +0x8
    long long _jump_type; // +0x10
    NSString * _jump_h5_url; // +0x18
    NSString * _tinyapp_username; // +0x20
    NSString * _tinyapp_path; // +0x28
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_jump_type;
+ (void)PBArrayAdd_jump_h5_url;
+ (void)PBArrayAdd_tinyapp_username;
+ (void)PBArrayAdd_tinyapp_path;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (void)genFromDic:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)jump_type;
- (void)setJump_type:(long long)arg1;
- (id)jump_h5_url;
- (void)setJump_h5_url:(id)arg1;
- (id)tinyapp_username;
- (void)setTinyapp_username:(id)arg1;
- (id)tinyapp_path;
- (void)setTinyapp_path:(id)arg1;
- (void).cxx_destruct;
@end

