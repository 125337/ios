@interface MMFinderLivePaymentSettingInputView : MMPageSheetBaseView <UITextFieldDelegate>
{
    BOOL _forceDarkMode; // +0x8
    UIView * _contentView; // +0x10
    UIView * _wecoinIconTextFieldBackgroundView; // +0x18
    UIImageView * _wecoinIconView; // +0x20
    MMUITextField * _wecoinIconTextField; // +0x28
    MMUIButton * _backButton; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUIButton * _doneButton; // +0x40
    double _contentViewHeight; // +0x48
    id <MMFinderLivePaymentSettingInputViewDelegate> _operationDelegate; // +0x50
}
- (id)initWithContentViewHeight:(double)arg1 forceDarkMode:(BOOL)arg2;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutWecoinIconTextField;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)pageSheetWillDisappear;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)arg1;
- (void)onContentViewTapped;
- (void)backAction;
- (void)onDoneButtonClicked:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)wecoinIconTextFieldBackgroundView;
- (void)setWecoinIconTextFieldBackgroundView:(id)arg1;
- (id)wecoinIconView;
- (void)setWecoinIconView:(id)arg1;
- (id)wecoinIconTextField;
- (void)setWecoinIconTextField:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (double)contentViewHeight;
- (void)setContentViewHeight:(double)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
