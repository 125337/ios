@interface SecurityDialogButtonInfo : NSObject
{
    int _jump_type; // +0x8
    NSString * _button_wording; // +0x10
    NSString * _jump_h5_url; // +0x18
    NSString * _tinyapp_username; // +0x20
    NSString * _tinyapp_path; // +0x28
}
- (id)button_wording;
- (void)setButton_wording:(id)arg1;
- (int)jump_type;
- (void)setJump_type:(int)arg1;
- (id)jump_h5_url;
- (void)setJump_h5_url:(id)arg1;
- (id)tinyapp_username;
- (void)setTinyapp_username:(id)arg1;
- (id)tinyapp_path;
- (void)setTinyapp_path:(id)arg1;
- (void).cxx_destruct;
@end

