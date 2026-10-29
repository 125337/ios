@interface WCFinderTitleDescButtonActionSheet : WCActionSheet <ILinkEventExt>
{
    id <WCFinderTitleDescButtonActionSheetDelegate> _businessDelegate; // +0x8
    UIView * _tipsView; // +0x10
    RichTextView * _titleTextView; // +0x18
    RichTextView * _ruleTextView; // +0x20
    MMUIButton * _acceptBtn; // +0x28
    MMUIButton * _cancelBtn; // +0x30
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTitleDescButtonActionSheetConfig;
- (id)getTipsActionSheetView;
- (void)onClickAcceptBtn;
- (void)onClickCancelBtn;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)businessDelegate;
- (void)setBusinessDelegate:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)ruleTextView;
- (void)setRuleTextView:(id)arg1;
- (id)acceptBtn;
- (void)setAcceptBtn:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (void).cxx_destruct;
@end

