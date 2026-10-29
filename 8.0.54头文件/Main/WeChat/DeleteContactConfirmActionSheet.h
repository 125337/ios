@interface DeleteContactConfirmActionSheet : MMAutoLayoutSheetView
{
    id /* block */ _confirmBlock; // +0x8
    CContact * _contact; // +0x10
    UIButton * _checkBox; // +0x18
}
- (id)initWithContact:(id)arg1;
- (void)initView;
- (void)onCheckBoxClicked:(id)arg1;
- (void)onConfirm;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)checkBox;
- (void)setCheckBox:(id)arg1;
- (void).cxx_destruct;
@end

