@interface PayManageLabel : NSObject
{
    unsigned int _show_label; // +0x8
    unsigned int _jump_type; // +0xc
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _jump_h5_url; // +0x20
    NSString * _tinyapp_username; // +0x28
    NSString * _tinyapp_path; // +0x30
}
- (unsigned int)show_label;
- (void)setShow_label:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)jump_type;
- (void)setJump_type:(unsigned int)arg1;
- (id)jump_h5_url;
- (void)setJump_h5_url:(id)arg1;
- (id)tinyapp_username;
- (void)setTinyapp_username:(id)arg1;
- (id)tinyapp_path;
- (void)setTinyapp_path:(id)arg1;
- (void).cxx_destruct;
@end
