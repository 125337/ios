@interface MMFinderLiveStartLiveNoFinderPanel : MMPageSheetBaseView
{
    id /* block */ _dismissBlock; // +0x8
    id /* block */ _createBlock; // +0x10
    UIView * _backgroundView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIButton * _leaveBtn; // +0x28
    UIButton * _createBtn; // +0x30
}
- (id)initWithCreateBlock:(id /* block */)arg1 dismissBlock:(id /* block */)arg2;
- (void)setupPageSheetConfig;
- (void)showWithAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)backgroundView;
- (id)titleLabel;
- (id)leaveBtn;
- (id)createBtn;
- (void)onClickedLeave;
- (void)onClickedCreate;
- (void)pageSheetDidDismiss;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id /* block */)createBlock;
- (void)setCreateBlock:(id /* block */)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setLeaveBtn:(id)arg1;
- (void)setCreateBtn:(id)arg1;
- (void).cxx_destruct;
@end
