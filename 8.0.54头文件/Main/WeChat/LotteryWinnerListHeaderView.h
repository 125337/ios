@interface LotteryWinnerListHeaderView : UIView
{
    UIView * _lotteryIconView; // +0x8
    UIImageView * _lotteryIconImg; // +0x10
    MMUILabel * _lotteryNameLabel; // +0x18
    MMUILabel * _lotteryDescriptionTitleLabel; // +0x20
    MMUILabel * _lotteryActionTitleLabel; // +0x28
    MMUILabel * _lotteryWinTimeTitleLabel; // +0x30
    UIView * _sepelateLine; // +0x38
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x40
}
+ (double)headerHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLotteryIcon;
- (void)layoutLotteryNameLabel;
- (void)layoutLotteryDescriptionTitleLabel;
- (void)layoutLotteryActionTitleLabel;
- (void)layoutLotteryWinTimeTitleLabel;
- (void)layoutSeparateLine;
- (void)updateLotteryInfo:(id)arg1;
- (id)innerGetLotteryAttendTypeStr;
- (id)lotteryIconView;
- (void)setLotteryIconView:(id)arg1;
- (id)lotteryIconImg;
- (void)setLotteryIconImg:(id)arg1;
- (id)lotteryNameLabel;
- (void)setLotteryNameLabel:(id)arg1;
- (id)lotteryDescriptionTitleLabel;
- (void)setLotteryDescriptionTitleLabel:(id)arg1;
- (id)lotteryActionTitleLabel;
- (void)setLotteryActionTitleLabel:(id)arg1;
- (id)lotteryWinTimeTitleLabel;
- (void)setLotteryWinTimeTitleLabel:(id)arg1;
- (id)sepelateLine;
- (void)setSepelateLine:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (void).cxx_destruct;
@end

