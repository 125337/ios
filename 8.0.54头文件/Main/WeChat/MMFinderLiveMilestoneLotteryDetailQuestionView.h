@interface MMFinderLiveMilestoneLotteryDetailQuestionView : MMFinderLiveMilestoneLotteryDetailSecondaryView <MMFinderLiveMilestoneLotteryViewModelExt>
{
    id /* block */ _onSubmitAction; // +0x8
    MMFinderLiveMilestoneLotteryViewModel * _vm; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UILabel * _questionLabel; // +0x28
    UIView * _optionContainerView; // +0x30
    UIScrollView * _optionScrollView; // +0x38
    UILabel * _countdownLabel; // +0x40
    MMUIButton * _submitButton; // +0x48
    MMFinderLiveMilestoneLotteryDetailQuestionOptionView * _lastSelectedOptionView; // +0x50
    NSString * _lotteryId; // +0x58
}
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;
- (void)updateCountdownString:(id)arg1;
- (id)currentQuestionInfo;
- (void)didAppear;
- (void)layoutSubviews;
- (void)layoutCountdownLabel;
- (void)initUI;
- (id)backButtonColor;
- (void)layoutGradientMask;
- (void)rebuildOptionViews;
- (void)reloadSubmitButton;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)arg1;
- (void)onOngoingLotteryCountdown:(id)arg1 remainingSeconds:(unsigned int)arg2;
- (BOOL)hasAttendLottery;
- (BOOL)isCurrentLotteryStillRunning;
- (void)updateSubmitButtonEnableState;
- (void)reloadUIForLotteryUpdate;
- (void)onSubmitButtonTapped;
- (id /* block */)onSubmitAction;
- (void)setOnSubmitAction:(id /* block */)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)questionLabel;
- (void)setQuestionLabel:(id)arg1;
- (id)optionContainerView;
- (void)setOptionContainerView:(id)arg1;
- (id)optionScrollView;
- (void)setOptionScrollView:(id)arg1;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)submitButton;
- (void)setSubmitButton:(id)arg1;
- (id)lastSelectedOptionView;
- (void)setLastSelectedOptionView:(id)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (void).cxx_destruct;
@end

