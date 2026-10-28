@interface WCMomentsContactTagSearchBottomBar : UIView
{
    id /* block */ _multiSelectBlock; // +0x8
    id /* block */ _cancelBlock; // +0x10
    id /* block */ _doneBlock; // +0x18
    MMUIButton * _multiSelectButton; // +0x20
    MMUIButton * _cancelMultiSelectButton; // +0x28
    MMUIButton * _doneButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)updateWithSelectCount:(long long)arg1;
- (void)setBottomBarState:(BOOL)arg1;
- (void)setSingleSelectState;
- (void)setMultiSelectState;
- (void)onClickMultiSelectButton:(id)arg1;
- (void)onClickCancelButton:(id)arg1;
- (void)onClickDoneButton:(id)arg1;
- (id /* block */)multiSelectBlock;
- (void)setMultiSelectBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)doneBlock;
- (void)setDoneBlock:(id /* block */)arg1;
- (id)multiSelectButton;
- (void)setMultiSelectButton:(id)arg1;
- (id)cancelMultiSelectButton;
- (void)setCancelMultiSelectButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end
