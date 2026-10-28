@interface WCPayJumpRemindInfo : NSObject
{
    BOOL _is_pop_up_windows; // +0x8
    long long _jump_type; // +0x10
    NSString * _wording; // +0x18
    NSString * _title; // +0x20
    NSString * _left_button_wording; // +0x28
    NSString * _right_button_wording; // +0x30
    WCPayRedirectUrlInfo * _url; // +0x38
}
+ (id)GenFromDictionary:(id)arg1;
+ (id)genFromJumpRemindInfo:(id)arg1;
- (void)genFromDic:(id)arg1;
- (long long)jump_type;
- (void)setJump_type:(long long)arg1;
- (BOOL)is_pop_up_windows;
- (void)setIs_pop_up_windows:(BOOL)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)left_button_wording;
- (void)setLeft_button_wording:(id)arg1;
- (id)right_button_wording;
- (void)setRight_button_wording:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
