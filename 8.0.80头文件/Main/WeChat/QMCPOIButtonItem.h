@interface QMCPOIButtonItem : NSObject
{
    NSString * _title; // +0x8
    UIImage * _icon; // +0x10
    NSString * _scheme; // +0x18
    NSString * _schemeType; // +0x20
    NSDictionary * _jump; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)scheme;
- (void)setScheme:(id)arg1;
- (id)schemeType;
- (void)setSchemeType:(id)arg1;
- (id)jump;
- (void)setJump:(id)arg1;
- (void).cxx_destruct;
@end
