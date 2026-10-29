@interface CBTAsstRecordTranscriptRenameSheet : UIView <CBTRenameGrowTextViewDelegate>
{
    NSString * _originalName; // +0x8
    id /* block */ _onConfirm; // +0x10
    id /* block */ _onCancel; // +0x18
    UIView * _dimmingView; // +0x20
    UIView * _sheetContainer; // +0x28
    UIView * _navbar; // +0x30
    UILabel * _titleLabel; // +0x38
    UIButton * _cancelButton; // +0x40
    UIButton * _doneButton; // +0x48
    CBTRenameGrowTextView * _inputView; // +0x50
    double _keyboardHeight; // +0x58
}
+ (id)presentWithOriginalName:(id)arg1 onConfirm:(id /* block */)arg2 onCancel:(id /* block */)arg3;
- (id)initWithFrame:(CGRect)arg1 originalName:(id)arg2;
- (void)dealloc;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updatePlaceholderForWidth:(double)arg1;
- (void)show;
- (void)dismiss;
- (void)onCancelTap;
- (void)onDoneTap;
- (void)setDoneEnabled:(BOOL)arg1;
- (void)TextViewDidChanged:(id)arg1;
- (void)TextViewWithExtrasHeightDidChanged:(id)arg1;
- (void)CBTRenameGrowTextViewOnTapClearButton:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)originalName;
- (void)setOriginalName:(id)arg1;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id)dimmingView;
- (void)setDimmingView:(id)arg1;
- (id)sheetContainer;
- (void)setSheetContainer:(id)arg1;
- (id)navbar;
- (void)setNavbar:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
