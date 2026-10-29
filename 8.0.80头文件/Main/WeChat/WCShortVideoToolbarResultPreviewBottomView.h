@interface WCShortVideoToolbarResultPreviewBottomView : MMUIView
{
    MMUIButton * _cancalBtn; // +0x8
    MMUIButton * _confirmBtn; // +0x10
    MMUIButton * _editBtn; // +0x18
    id /* block */ _confirmBlock; // +0x20
    id /* block */ _cancelBlock; // +0x28
    id /* block */ _editBlock; // +0x30
}
+ (double)defaultHeight;
+ (id)genBtn;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
- (void)setupView;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)setEditBtnHidden:(BOOL)arg1;
- (void)onClickConfirmBtn;
- (void)onClickCancelBtn;
- (void)onClickEditBtn;
- (id)cancalBtn;
- (void)setCancalBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)editBtn;
- (void)setEditBtn:(id)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)editBlock;
- (void)setEditBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
