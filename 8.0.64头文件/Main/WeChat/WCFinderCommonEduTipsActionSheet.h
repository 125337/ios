@interface WCFinderCommonEduTipsActionSheet : WCActionSheet <ILinkEventExt>
{
    id <WCFinderCommonEduTipsActionSheetDelegate> _businessDelegate; // +0x8
    MMUIButton * _acceptBtn; // +0x10
    UIView * _tipsView; // +0x18
    UIButton * _closeBtn; // +0x20
    UIImageView * _iconView; // +0x28
    RichTextView * _titleTextView; // +0x30
    RichTextView * _descTextView; // +0x38
    MMUIButton * _agreementCheckbox; // +0x40
    RichTextView * _ruleTextView; // +0x48
    MMUIButton * _cancelBtn; // +0x50
    MMUIButton * _trailBtn; // +0x58
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)onCheckBoxClicked:(id)arg1;
- (id)getEduTipsActionSheetConfig;
- (void)bindAcceptButton:(id)arg1;
- (void)bindContainerView:(id)arg1;
- (void)bindCancelButton:(id)arg1;
- (void)onClickCancelBtn;
- (void)onClickAcceptBtn;
- (void)onClickCloseBtn;
- (void)onClickTrailBtn;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)businessDelegate;
- (void)setBusinessDelegate:(id)arg1;
- (id)acceptBtn;
- (void)setAcceptBtn:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (id)ruleTextView;
- (void)setRuleTextView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)trailBtn;
- (void)setTrailBtn:(id)arg1;
- (void).cxx_destruct;
@end
