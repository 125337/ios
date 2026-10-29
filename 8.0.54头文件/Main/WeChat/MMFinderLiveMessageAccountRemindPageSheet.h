@interface MMFinderLiveMessageAccountRemindPageSheet : MMPageSheetBaseView
{
    BOOL _isContinue; // +0x8
    UIView * _contentView; // +0x10
    MMWebImageView * _headImageView; // +0x18
    UILabel * _labelView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUIButton * _continueButton; // +0x30
    UIButton * _cancelButton; // +0x38
    CAShapeLayer * _shapeLayer; // +0x40
    UIView * _separateViewTop; // +0x48
    UIView * _separateViewDown; // +0x50
    MMFinderLiveAccountInfo * _accountInfo; // +0x58
    id /* block */ _completion; // +0x60
}
+ (void)showWithAccountInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAccountInfo:(id)arg1;
- (void)initUI;
- (void)updateData;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)onContinueButtonClicked;
- (void)onCancelButtonClicked;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)labelView;
- (void)setLabelView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)continueButton;
- (void)setContinueButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)separateViewTop;
- (void)setSeparateViewTop:(id)arg1;
- (id)separateViewDown;
- (void)setSeparateViewDown:(id)arg1;
- (BOOL)isContinue;
- (void)setIsContinue:(BOOL)arg1;
- (id)accountInfo;
- (void)setAccountInfo:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

