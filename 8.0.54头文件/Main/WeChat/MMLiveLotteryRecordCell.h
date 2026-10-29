@interface MMLiveLotteryRecordCell : MMTableViewCell
{
    MMCPLabel * _liveRecordNameLabel; // +0x8
    MMUIImageView * _arrowImageView; // +0x10
    MMFinderLiveLotteryRecord * _lotteryRecord; // +0x18
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithLotteryRecord:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)liveRecordNameLabel;
- (void)setLiveRecordNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)lotteryRecord;
- (void)setLotteryRecord:(id)arg1;
- (void).cxx_destruct;
@end

