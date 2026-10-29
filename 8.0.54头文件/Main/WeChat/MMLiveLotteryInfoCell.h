@interface MMLiveLotteryInfoCell : MMTableViewCell
{
    unsigned int _supportMultiType; // +0x8
    MMCPLabel * _lotteryInfoTitleLabel; // +0x10
    MMCPLabel * _lotteryInfoDescLabel; // +0x18
    MMCPLabel * _lotteryInfoRightDescTopLabel; // +0x20
    MMCPLabel * _lotteryInfoRightDescBottomLabel; // +0x28
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x30
    MMFinderLiveRecordListLotteryInfo * _milestoneLotteryInfo; // +0x38
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithMilestoneLotteryRecordInfo:(id)arg1;
- (void)updateWithLotteryRecordInfo:(id)arg1;
- (id)getAttendMethodTitle;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)lotteryInfoTitleLabel;
- (void)setLotteryInfoTitleLabel:(id)arg1;
- (id)lotteryInfoDescLabel;
- (void)setLotteryInfoDescLabel:(id)arg1;
- (id)lotteryInfoRightDescTopLabel;
- (void)setLotteryInfoRightDescTopLabel:(id)arg1;
- (id)lotteryInfoRightDescBottomLabel;
- (void)setLotteryInfoRightDescBottomLabel:(id)arg1;
- (unsigned int)supportMultiType;
- (void)setSupportMultiType:(unsigned int)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)milestoneLotteryInfo;
- (void)setMilestoneLotteryInfo:(id)arg1;
- (void).cxx_destruct;
@end

