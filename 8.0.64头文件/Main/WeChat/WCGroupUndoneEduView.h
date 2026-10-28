@interface WCGroupUndoneEduView : UIView <MMPageSheetBottomViewDelegate>
{
    BOOL _bShowCloseButton; // +0x8
    BOOL _bPageSheetStyle; // +0x9
    id <WCGroupUndoneEduViewDelegate> _undoneDelegate; // +0x10
    CMessageWrap * _relatedMessage; // +0x18
    UIImageView * _contentBg; // +0x20
    MMUIButton * _cancelBtn; // +0x28
    UIButton * _confirmBtn; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUILabel * _descLabel; // +0x40
    UIImageView * _imageView; // +0x48
    MMPageSheetAdapter * _adapter; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)showInPageSheet;
- (void)onClose:(id)arg1;
- (void)onConfirm:(id)arg1;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)undoneDelegate;
- (void)setUndoneDelegate:(id)arg1;
- (id)relatedMessage;
- (void)setRelatedMessage:(id)arg1;
- (BOOL)bShowCloseButton;
- (void)setBShowCloseButton:(BOOL)arg1;
- (BOOL)bPageSheetStyle;
- (void)setBPageSheetStyle:(BOOL)arg1;
- (id)contentBg;
- (void)setContentBg:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (void).cxx_destruct;
@end
