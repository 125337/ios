@interface DeleteChatBotMsgConfirmActionSheet : MMAutoLayoutSheetView
{
    id /* block */ _confirmBlock; // +0x8
    id /* block */ _cancelBlock; // +0x10
    id /* block */ _delSvrMsgUpdate; // +0x18
    CContact * _contact; // +0x20
    UIButton * _checkBox; // +0x28
}
- (id)initWithContact:(id)arg1;
- (void)initView;
- (void)onCheckBoxClicked:(id)arg1;
- (void)onConfirm;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)delSvrMsgUpdate;
- (void)setDelSvrMsgUpdate:(id /* block */)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)checkBox;
- (void)setCheckBox:(id)arg1;
- (void).cxx_destruct;
@end
