@interface PickerToolBar : MMUIView
{
    BOOL _autoExpandWithText; // +0x8
    UIButton * _cancelButton; // +0x10
    UIButton * _confirmButton; // +0x18
    UILabel * _tipsLabel; // +0x20
}
- (id)init;
- (void)createViews;
- (id)cancelButton;
- (id)confirmButton;
- (id)tipsLabel;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)setCancelButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (BOOL)autoExpandWithText;
- (void)setAutoExpandWithText:(BOOL)arg1;
- (void).cxx_destruct;
@end

