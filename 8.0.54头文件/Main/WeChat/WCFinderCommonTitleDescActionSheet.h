@interface WCFinderCommonTitleDescActionSheet : WCActionSheet
{
    id <WCFinderCommonTitleDescActionSheetDelegate> _businessDelegate; // +0x8
    UIView * _tipsView; // +0x10
    UIButton * _closeBtn; // +0x18
    RichTextView * _titleTextView; // +0x20
    RichTextView * _descTextView; // +0x28
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)onClickCloseBtn;
- (id)getTitleDescActionSheetConfig;
- (id)businessDelegate;
- (void)setBusinessDelegate:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (void).cxx_destruct;
@end

