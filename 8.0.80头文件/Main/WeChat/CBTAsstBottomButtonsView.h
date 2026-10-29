@interface CBTAsstBottomButtonsView : UIView
{
    BOOL _locateHidden; // +0x8
    ImageBrowseButton * _shareBtn; // +0x10
    ImageBrowseButton * _saveBtn; // +0x18
    ImageBrowseButton * _locateBtn; // +0x20
    ImageBrowseButton * _moreBtn; // +0x28
    id /* block */ _onShare; // +0x30
    id /* block */ _onSave; // +0x38
    id /* block */ _onLocate; // +0x40
    id /* block */ _onMore; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)shareBtn;
- (id)saveBtn;
- (id)locateBtn;
- (id)moreBtn;
- (id)makeBtnWithSvgName:(id)arg1 accessibilityLabel:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setLocateHidden:(BOOL)arg1;
- (void)showWithAutoHide;
- (void)doHide;
- (void)onBtnTap:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setSaveBtn:(id)arg1;
- (void)setLocateBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (id /* block */)onShare;
- (void)setOnShare:(id /* block */)arg1;
- (id /* block */)onSave;
- (void)setOnSave:(id /* block */)arg1;
- (id /* block */)onLocate;
- (void)setOnLocate:(id /* block */)arg1;
- (id /* block */)onMore;
- (void)setOnMore:(id /* block */)arg1;
- (BOOL)locateHidden;
- (void).cxx_destruct;
@end
