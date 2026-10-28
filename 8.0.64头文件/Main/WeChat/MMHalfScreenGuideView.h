@interface MMHalfScreenGuideView : MMPageSheetBaseView
{
    BOOL _dismissesWhenCancelButtonClicked; // +0x8
    BOOL _dismissesWhenAcceptButtonClicked; // +0x9
    id <MMHalfScreenGuideViewDelegate> _delegate; // +0x10
    UIView * _customizedTopView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _messageLabel; // +0x28
    UIView * _customizedContentView; // +0x30
    UIButton * _cancelButton; // +0x38
    UIButton * _acceptButton; // +0x40
    id /* block */ _cancelButtonDidClickBlock; // +0x48
    id /* block */ _acceptButtonDidClickBlock; // +0x50
    double _contentPaddingX; // +0x58
    double _contentPaddingTop; // +0x60
    double _contentPaddingBottom; // +0x68
    double _titleLabelMarginTopFollowedCustomizedTopView; // +0x70
    double _labelSpacingY; // +0x78
    double _customizedContentMarginTop; // +0x80
    double _buttonSpacingX; // +0x88
    double _buttonMarginTopFollowedLabel; // +0x90
    double _buttonMarginTopFollowedCustomizedContent; // +0x98
    UIView * _contentView; // +0xa0
    CAShapeLayer * _shapeLayer; // +0xa8
}
- (id)init;
- (id)titleLabel;
- (id)messageLabel;
- (id)attributedTextForMessage:(id)arg1 alignment:(long long)arg2;
- (id)customizedTopView;
- (id)customizedContentView;
- (id)createCancelButton;
- (id)cancelButton;
- (id)createAcceptButton;
- (id)acceptButton;
- (void)layoutSubviews;
- (void)layoutCustomizedTopView;
- (void)layoutCustomizedContentView;
- (void)updateContentShape;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)cancelButtonDidClick:(id)arg1;
- (void)acceptButtonDidClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCustomizedTopView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setCustomizedContentView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setAcceptButton:(id)arg1;
- (BOOL)dismissesWhenCancelButtonClicked;
- (void)setDismissesWhenCancelButtonClicked:(BOOL)arg1;
- (BOOL)dismissesWhenAcceptButtonClicked;
- (void)setDismissesWhenAcceptButtonClicked:(BOOL)arg1;
- (id /* block */)cancelButtonDidClickBlock;
- (void)setCancelButtonDidClickBlock:(id /* block */)arg1;
- (id /* block */)acceptButtonDidClickBlock;
- (void)setAcceptButtonDidClickBlock:(id /* block */)arg1;
- (double)contentPaddingX;
- (void)setContentPaddingX:(double)arg1;
- (double)contentPaddingTop;
- (void)setContentPaddingTop:(double)arg1;
- (double)contentPaddingBottom;
- (void)setContentPaddingBottom:(double)arg1;
- (double)titleLabelMarginTopFollowedCustomizedTopView;
- (void)setTitleLabelMarginTopFollowedCustomizedTopView:(double)arg1;
- (double)labelSpacingY;
- (void)setLabelSpacingY:(double)arg1;
- (double)customizedContentMarginTop;
- (void)setCustomizedContentMarginTop:(double)arg1;
- (double)buttonSpacingX;
- (void)setButtonSpacingX:(double)arg1;
- (double)buttonMarginTopFollowedLabel;
- (void)setButtonMarginTopFollowedLabel:(double)arg1;
- (double)buttonMarginTopFollowedCustomizedContent;
- (void)setButtonMarginTopFollowedCustomizedContent:(double)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void).cxx_destruct;
@end
