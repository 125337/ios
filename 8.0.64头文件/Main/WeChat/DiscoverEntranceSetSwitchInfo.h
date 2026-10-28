@interface DiscoverEntranceSetSwitchInfo : NSObject
{
    BOOL _isOn; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    unsigned long long _type; // +0x20
    UISwitch * _uiSwitch; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)isOn;
- (void)setIsOn:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)uiSwitch;
- (void)setUiSwitch:(id)arg1;
- (void).cxx_destruct;
@end
