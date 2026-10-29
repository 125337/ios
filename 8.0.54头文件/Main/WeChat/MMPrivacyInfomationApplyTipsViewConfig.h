@interface MMPrivacyInfomationApplyTipsViewConfig : NSObject
{
    UIImage * _bussinessIcon; // +0x8
    NSString * _bussinessName; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSString * _descHint; // +0x28
    id /* block */ _allowAction; // +0x30
    id /* block */ _disallowAction; // +0x38
}
- (id)bussinessIcon;
- (void)setBussinessIcon:(id)arg1;
- (id)bussinessName;
- (void)setBussinessName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)descHint;
- (void)setDescHint:(id)arg1;
- (id /* block */)allowAction;
- (void)setAllowAction:(id /* block */)arg1;
- (id /* block */)disallowAction;
- (void)setDisallowAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

