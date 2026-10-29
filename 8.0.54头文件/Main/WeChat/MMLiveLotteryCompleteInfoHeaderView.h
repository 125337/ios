@interface MMLiveLotteryCompleteInfoHeaderView : UIView
{
    MMFinderLiveLotteryRecord * _lotteryRecord; // +0x8
    MMCPLabel * _lotteryInfoTitleLabel; // +0x10
    MMCPLabel * _lotteryInfoDescLabel; // +0x18
}
+ (double)headerHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithLotteryRecord:(id)arg1;
- (id)lotteryRecord;
- (void)setLotteryRecord:(id)arg1;
- (id)lotteryInfoTitleLabel;
- (void)setLotteryInfoTitleLabel:(id)arg1;
- (id)lotteryInfoDescLabel;
- (void)setLotteryInfoDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

