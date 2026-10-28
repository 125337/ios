@interface MMFinderLivePaymentPolicyIntroView : MMPageSheetBaseView <UIGestureRecognizerDelegate, ILinkEventExt>
{
    BOOL _forAnchor; // +0x8
    id <MMFinderLivePaymentPolicyIntroViewDelegate> _operationDelegate; // +0x10
    RichTextView * _introDetailLabel; // +0x18
    UIView * _contentView; // +0x20
    UILabel * _introTitleLabel; // +0x28
    UIButton * _cancelButton; // +0x30
    UIButton * _confirmButton; // +0x38
    CAShapeLayer * _shapeLayer; // +0x40
    UIVisualEffectView * _visualEfView; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)updateIntroDetailLabel;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)forAnchor;
- (void)setForAnchor:(BOOL)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)introDetailLabel;
- (void)setIntroDetailLabel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)introTitleLabel;
- (void)setIntroTitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)visualEfView;
- (void)setVisualEfView:(id)arg1;
- (void).cxx_destruct;
@end
