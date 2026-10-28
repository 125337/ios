@interface WCRedEnvelopesSpringFestivalActivtyEntryInfo : NSObject
{
    BOOL _is_show; // +0x8
    unsigned int _action_type; // +0xc
    NSString * _icon_url; // +0x10
    NSString * _wording; // +0x18
    NSString * _action_url; // +0x20
    NSString * _action_app_username; // +0x28
}
- (BOOL)is_show;
- (void)setIs_show:(BOOL)arg1;
- (id)icon_url;
- (void)setIcon_url:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned int)action_type;
- (void)setAction_type:(unsigned int)arg1;
- (id)action_url;
- (void)setAction_url:(id)arg1;
- (id)action_app_username;
- (void)setAction_app_username:(id)arg1;
- (void).cxx_destruct;
@end
