@interface MMLiveAcceptAgreementPageSheetView : MMPageSheetBaseView <UIGestureRecognizerDelegate>
{
    id <MMLiveAcceptAgreementPageSheetViewDelegate> _operationDelegate; // +0x8
    id /* block */ _actionButtonClickedBlock; // +0x10
    UILabel * _titleLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    MMUIButton * _actionButton; // +0x28
    UIView * _contentView; // +0x30
    UIImageView * _iconView; // +0x38
    UIView * _maskView; // +0x40
    CAShapeLayer * _shapeLayer; // +0x48
    UIVisualEffectView * _visualEfView; // +0x50
    MMUIButton * _closeBtn; // +0x58
    NSString * _title; // +0x60
    NSString * _desc; // +0x68
    NSString * _actionBtnText; // +0x70
}
- (id)initWithTitle:(id)arg1 desc:(id)arg2 actionBtnText:(id)arg3;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)onActionButtonClicked;
- (void)onClickLeftButton:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id /* block */)actionButtonClickedBlock;
- (void)setActionButtonClickedBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)visualEfView;
- (void)setVisualEfView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)actionBtnText;
- (void)setActionBtnText:(id)arg1;
- (void).cxx_destruct;
@end

