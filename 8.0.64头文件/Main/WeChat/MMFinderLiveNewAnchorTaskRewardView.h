@interface MMFinderLiveNewAnchorTaskRewardView : MMUIView
{
    BOOL _shouldShowBtn; // +0x8
    id /* block */ _jumpRewardHomeBlock; // +0x10
    NSString * _reward; // +0x18
    MMUILabel * _completeTitleLabel; // +0x20
    MMUILabel * _completeRewardLabel; // +0x28
    UIButton * _completeDetailButton; // +0x30
    MMUIView * _leftShapes; // +0x38
    MMUIView * _rightShapes; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupCompleteUI;
- (void)setupShapes;
- (void)layoutUI;
- (void)layoutCompleteUI;
- (void)layoutShapes;
- (void)setReward:(id)arg1;
- (void)setShouldShowBtn:(BOOL)arg1;
- (void)onCompleteButtonClicked;
- (id /* block */)jumpRewardHomeBlock;
- (void)setJumpRewardHomeBlock:(id /* block */)arg1;
- (id)reward;
- (BOOL)shouldShowBtn;
- (id)completeTitleLabel;
- (void)setCompleteTitleLabel:(id)arg1;
- (id)completeRewardLabel;
- (void)setCompleteRewardLabel:(id)arg1;
- (id)completeDetailButton;
- (void)setCompleteDetailButton:(id)arg1;
- (id)leftShapes;
- (void)setLeftShapes:(id)arg1;
- (id)rightShapes;
- (void)setRightShapes:(id)arg1;
- (void).cxx_destruct;
@end
