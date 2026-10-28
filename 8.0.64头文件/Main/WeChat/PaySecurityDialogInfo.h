@interface PaySecurityDialogInfo : NSObject
{
    NSString * _title; // +0x8
    NSString * _logo; // +0x10
    NSString * _wording; // +0x18
    SecurityDialogButtonInfo * _left_btn; // +0x20
    SecurityDialogButtonInfo * _right_btn; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)logo;
- (void)setLogo:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)left_btn;
- (void)setLeft_btn:(id)arg1;
- (id)right_btn;
- (void)setRight_btn:(id)arg1;
- (void).cxx_destruct;
@end
