@interface ForwardToYuanBaoSheetView : MMAutoLayoutSheetView <ILinkEventExt, MMPageSheetBottomViewDelegate>
{
    BOOL _hadClickConfirm; // +0x8
    ForwardToYuanBaoSheetViewDelegate * _delegate; // +0x10
    NSArray * _selectMsg; // +0x18
    NSArray * _objects; // +0x20
    id /* block */ _confirmAction; // +0x28
    UILabel * _sheetViewTitle; // +0x30
    UIView * _appView; // +0x38
    UIView * _msgView; // +0x40
    UILabel * _totalMsgCountLabel; // +0x48
    UIButton * _detailButton; // +0x50
    UIView * _lineView; // +0x58
    RichTextView * _tipsBeforeConfirm; // +0x60
}
- (id)init;
- (void)initConfigs;
- (void)initView;
- (void)initTitleView;
- (void)initAppView;
- (void)initMsgView;
- (void)layoutMsgView;
- (void)layoutSubviews;
- (void)onClickDetailButton:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectMsg;
- (void)setSelectMsg:(id)arg1;
- (id)objects;
- (void)setObjects:(id)arg1;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (id)sheetViewTitle;
- (void)setSheetViewTitle:(id)arg1;
- (id)appView;
- (void)setAppView:(id)arg1;
- (id)msgView;
- (void)setMsgView:(id)arg1;
- (id)totalMsgCountLabel;
- (void)setTotalMsgCountLabel:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)tipsBeforeConfirm;
- (void)setTipsBeforeConfirm:(id)arg1;
- (BOOL)hadClickConfirm;
- (void)setHadClickConfirm:(BOOL)arg1;
- (void).cxx_destruct;
@end
