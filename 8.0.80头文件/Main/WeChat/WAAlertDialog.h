@interface WAAlertDialog : MMObject <UITextViewDelegate>
{
    WABackgroundRootButton * _backgroundRoot; // +0x8
    UIView * _contentView; // +0x10
    UIImageView * _contentBg; // +0x18
    MMUILabel * _tipsTitleLabel; // +0x20
    UITextView * _tipsContentLabel; // +0x28
    UITextView * _tipsPlaceHolderLabel; // +0x30
    BOOL _editable; // +0x38
    BOOL _isUpper; // +0x39
    id <WAAlertDialogDelegate> _delegate; // +0x40
    NSString * _curInputText; // +0x48
    long long _dialogId; // +0x50
    NSString * _contentText; // +0x58
    NSString * _titleText; // +0x60
    NSString * _placeHolderText; // +0x68
    NSString * _confirmText; // +0x70
    NSString * _cancelText; // +0x78
    UIColor * _confirmColor; // +0x80
    UIColor * _cancelColor; // +0x88
    UIView * _view; // +0x90
    UIView * _alignView; // +0x98
    UIButton * _cancelBtn; // +0xa0
    UIButton * _confirmBtn; // +0xa8
}
- (id)initWithWebView:(id)arg1;
- (id)initWithWebView:(id)arg1 alignView:(id)arg2;
- (void)dealloc;
- (void)buildDialog;
- (id)bulidNSAttributedStringText:(id)arg1 onlyTitle:(BOOL)arg2 onlyContent:(BOOL)arg3;
- (void)updateSubViewsFrame;
- (void)orientationDidChange;
- (void)onTapBackground;
- (void)onClickBtn:(id)arg1;
- (void)hide;
- (void)fadeIn:(double)arg1;
- (void)bringToFront;
- (id)getInputText;
- (id)getTitleText;
- (id)getContentText;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundRoot;
- (id)curInputText;
- (void)setCurInputText:(id)arg1;
- (long long)dialogId;
- (void)setDialogId:(long long)arg1;
- (id)contentText;
- (void)setContentText:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)placeHolderText;
- (void)setPlaceHolderText:(id)arg1;
- (id)confirmText;
- (void)setConfirmText:(id)arg1;
- (id)cancelText;
- (void)setCancelText:(id)arg1;
- (BOOL)editable;
- (void)setEditable:(BOOL)arg1;
- (BOOL)isUpper;
- (void)setIsUpper:(BOOL)arg1;
- (id)confirmColor;
- (void)setConfirmColor:(id)arg1;
- (id)cancelColor;
- (void)setCancelColor:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)alignView;
- (void)setAlignView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (void).cxx_destruct;
@end
