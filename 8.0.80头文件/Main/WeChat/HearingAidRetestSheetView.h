@interface HearingAidRetestSheetView : MMAutoLayoutSheetView
{
    id <HearingAidRetestSheetViewDelegate> _delegate; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UIButton * _leaveButton; // +0x18
    UIButton * _retestButton; // +0x20
    UIStackView * _buttonContainer; // +0x28
}
- (id)init;
- (void)initConfigs;
- (void)initView;
- (id)titleLabel;
- (id)buttonContainer;
- (id)retestButton;
- (id)leaveButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setLeaveButton:(id)arg1;
- (void)setRetestButton:(id)arg1;
- (void)setButtonContainer:(id)arg1;
- (void).cxx_destruct;
@end
