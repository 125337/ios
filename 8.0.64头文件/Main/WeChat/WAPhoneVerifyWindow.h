@interface WAPhoneVerifyWindow : UIView <WARichTextViewHelperDelegate, WACustomKeyboardDelegate, UITextFieldDelegate>
{
    UIView * _contentView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descriptionLabel; // +0x18
    UILabel * _countDown; // +0x20
    UIButton * _closeButton; // +0x28
    NSMutableArray * _numLabels; // +0x30
    NSMutableString * _input; // +0x38
    int _secCount; // +0x40
    id <WAPhoneVerifyWindowDelegate> _verifyWindowDelegate; // +0x48
    long long _inputCount; // +0x50
    NSString * _phoneNum; // +0x58
    id <IWARichTextViewHelper> _richTextHelper; // +0x60
    WAHiddenTextField * _confirmCodeTF; // +0x68
}
+ (id)setupWindow:(id)arg1 phone:(id)arg2 inputCount:(long long)arg3;
- (void)closeWindow;
- (void)initView;
- (void)countDown;
- (void)onClose:(id)arg1;
- (void)onLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (void)layoutSubviews;
- (CGRect)contentViewFrame;
- (void)onChar:(id)arg1;
- (void)onDelete;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChangeSelection:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (id)verifyWindowDelegate;
- (void)setVerifyWindowDelegate:(id)arg1;
- (long long)inputCount;
- (void)setInputCount:(long long)arg1;
- (id)phoneNum;
- (void)setPhoneNum:(id)arg1;
- (id)richTextHelper;
- (void)setRichTextHelper:(id)arg1;
- (id)confirmCodeTF;
- (void)setConfirmCodeTF:(id)arg1;
- (void).cxx_destruct;
@end
