@interface WAPlateLabel : MMUILabel
{
    UIView * _inputView; // +0x8
    unsigned long long _inputViewType; // +0x10
    id <WAPlateLabelDelegate> _delegate; // +0x18
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)setInputView:(id)arg1;
- (void)layoutSubviews;
- (BOOL)exitSpecialCharText;
- (void)done;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewForDarkmode;
- (void)setInputViewWidth:(double)arg1;
- (void)setInputViewType:(unsigned long long)arg1;
- (id)createInputViewWithType:(unsigned long long)arg1 inputViewWidth:(double)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)provinceArr;
- (id)letterArr;
- (id)specialArr;
- (id)numberLetterArr;
- (id)defaultArr;
- (id)configButtonColor:(id)arg1;
- (id)genereateKeyboardViewDefault:(id)arg1 inputViewWidth:(double)arg2;
- (id)genereateKeyboardViewProvince:(id)arg1 inputViewWidth:(double)arg2;
- (void)charButtonClicked:(id)arg1;
- (void)deleteButtonAction:(id)arg1;
- (id)inputView;
- (unsigned long long)inputViewType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
