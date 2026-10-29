@interface WCPayLimitInfo : NSObject
{
    NSString * _icon_url; // +0x8
    NSString * _dark_icon_url; // +0x10
    NSString * _jump_info; // +0x18
}
- (id)icon_url;
- (void)setIcon_url:(id)arg1;
- (id)dark_icon_url;
- (void)setDark_icon_url:(id)arg1;
- (id)jump_info;
- (void)setJump_info:(id)arg1;
- (void).cxx_destruct;
@end
