@interface WCFinderInvalidTipsView : UIView <ILinkEventExt>
{
    id <WCFinderInvalidTipsViewDelegate> _delegate; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    RichTextView * _descTextView; // +0x20
    UIButton * _confirmButton; // +0x28
    UIButton * _complainButton; // +0x30
    WCFinderInvalidTipsInfo * _invalidInfo; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithInvalidInfo:(id)arg1;
- (void)layoutUI;
- (void)onConfirmButtonClick;
- (void)onComplainButtonClick;
- (id)iconView;
- (id)titleLabel;
- (id)descTextView;
- (id)confirmButton;
- (id)complainButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescTextView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setComplainButton:(id)arg1;
- (id)invalidInfo;
- (void)setInvalidInfo:(id)arg1;
- (void).cxx_destruct;
@end
