@interface WCPayExposureInfo : NSObject
{
    unsigned int _is_show_btn; // +0x8
    NSString * _icon; // +0x10
    NSString * _name; // +0x18
    NSString * _wording; // +0x20
    NSString * _btn_wording; // +0x28
    WCPayJumpInfo * _jump_info; // +0x30
}
+ (id)genFromUnion:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned int)is_show_btn;
- (void)setIs_show_btn:(unsigned int)arg1;
- (id)btn_wording;
- (void)setBtn_wording:(id)arg1;
- (id)jump_info;
- (void)setJump_info:(id)arg1;
- (void).cxx_destruct;
@end

