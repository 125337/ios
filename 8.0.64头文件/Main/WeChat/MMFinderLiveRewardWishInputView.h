@interface MMFinderLiveRewardWishInputView : MMPageSheetBaseView <UITextFieldDelegate>
{
    UIView * _contentView; // +0x8
    UIView * _rewardCountTextFieldBackgroundView; // +0x10
    MMUITextField * _rewardCountTextField; // +0x18
    MMUIButton * _backButton; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUIButton * _doneButton; // +0x30
    double _contentViewHeight; // +0x38
    id <MMFinderLiveRewardWishInputViewDelegate> _operationDelegate; // +0x40
    MMFinderLiveRewardWishView * _targetWishView; // +0x48
    unsigned long long _maxTargetCount; // +0x50
}
- (id)initWithContentViewHeight:(double)arg1;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutRewardCountTextField;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)pageSheetWillDisappear;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)arg1;
- (void)onContentViewTapped;
- (void)backAction;
- (void)onDoneButtonClicked:(id)arg1;
- (unsigned long long)maxTargetCount;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)rewardCountTextFieldBackgroundView;
- (void)setRewardCountTextFieldBackgroundView:(id)arg1;
- (id)rewardCountTextField;
- (void)setRewardCountTextField:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (double)contentViewHeight;
- (void)setContentViewHeight:(double)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)targetWishView;
- (void)setTargetWishView:(id)arg1;
- (void)setMaxTargetCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
