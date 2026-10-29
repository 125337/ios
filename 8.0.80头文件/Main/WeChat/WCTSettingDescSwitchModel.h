@interface WCTSettingDescSwitchModel : WCTBaseSettingModel
{
    BOOL _on; // +0x8
    NSString * _desc; // +0x10
    id /* block */ _switchAction; // +0x18
}
+ (id)createWithTitle:(id)arg1 on:(BOOL)arg2;
- (BOOL)on;
- (void)setOn:(BOOL)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id /* block */)switchAction;
- (void)setSwitchAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
