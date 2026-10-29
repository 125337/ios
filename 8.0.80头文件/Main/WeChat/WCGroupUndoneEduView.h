@interface WCGroupUndoneEduView : UIView <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>
{
    BOOL _bShowCloseButton; // +0x8
    BOOL _bPageSheetStyle; // +0x9
    id <WCGroupUndoneEduViewDelegate> _undoneDelegate; // +0x10
    CMessageWrap * _relatedMessage; // +0x18
    double _containerWidth; // +0x20
    UIImageView * _contentBg; // +0x28
    MMUIButton * _cancelBtn; // +0x30
    UIButton * _confirmBtn; // +0x38
    MMUILabel * _titleLabel; // +0x40
    MMUILabel * _descLabel; // +0x48
    UIImageView * _imageView; // +0x50
    MMPageSheetAdapter * _adapter; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)setContainerWidth:(double)arg1;
- (void)layoutSubviews;
- (void)showInPageSheet;
- (void)onClose:(id)arg1;
- (void)onConfirm:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidRotation:(id)arg1;
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
- (double)containerWidth;
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
