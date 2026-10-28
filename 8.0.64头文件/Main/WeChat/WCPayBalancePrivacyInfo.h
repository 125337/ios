@interface WCPayBalancePrivacyInfo : NSObject
{
    unsigned int _switch_state; // +0x8
    NSString * _icon; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSString * _switch_state_info; // +0x28
}
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)switch_state;
- (void)setSwitch_state:(unsigned int)arg1;
- (id)switch_state_info;
- (void)setSwitch_state_info:(id)arg1;
- (void).cxx_destruct;
@end
