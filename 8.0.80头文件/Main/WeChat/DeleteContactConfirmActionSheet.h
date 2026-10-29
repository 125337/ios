@interface DeleteContactConfirmActionSheet : MMAutoLayoutSheetView
{
    BOOL _allowTapBgToClose; // +0x8
    BOOL _showCheckBox; // +0x9
    id /* block */ _confirmBlock; // +0x10
    CContact * _contact; // +0x18
    UIButton * _checkBox; // +0x20
    UIImageView * _checkBoxImageView; // +0x28
    NSString * _customTitle; // +0x30
    NSString * _customDesc; // +0x38
    NSString * _customConfirmBtnTitle; // +0x40
    NSString * _customCheckBoxTitle; // +0x48
}
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 customTitle:(id)arg2 customDesc:(id)arg3 customConfirmBtnTitle:(id)arg4 customCheckBoxTitle:(id)arg5;
- (id)initWithContact:(id)arg1 customTitle:(id)arg2 customDesc:(id)arg3 customConfirmBtnTitle:(id)arg4 customCheckBoxTitle:(id)arg5 showCheckBox:(BOOL)arg6;
- (id)initWithContact:(id)arg1 customTitle:(id)arg2 customDesc:(id)arg3 customConfirmBtnTitle:(id)arg4 customCheckBoxTitle:(id)arg5 showCheckBox:(BOOL)arg6 allowTapBgToClose:(BOOL)arg7;
- (void)initView;
- (id)getHeadingTitle;
- (id)getDescTitle;
- (id)getConfirmButtonTitle;
- (id)getClearAllMessageTitle;
- (id)genCheckBox;
- (id)genButtonStack;
- (void)onCheckBoxClicked:(id)arg1;
- (void)onConfirm;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (BOOL)allowTapBgToClose;
- (void)setAllowTapBgToClose:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)checkBox;
- (void)setCheckBox:(id)arg1;
- (id)checkBoxImageView;
- (void)setCheckBoxImageView:(id)arg1;
- (id)customTitle;
- (void)setCustomTitle:(id)arg1;
- (id)customDesc;
- (void)setCustomDesc:(id)arg1;
- (id)customConfirmBtnTitle;
- (void)setCustomConfirmBtnTitle:(id)arg1;
- (id)customCheckBoxTitle;
- (void)setCustomCheckBoxTitle:(id)arg1;
- (BOOL)showCheckBox;
- (void)setShowCheckBox:(BOOL)arg1;
- (void).cxx_destruct;
@end
