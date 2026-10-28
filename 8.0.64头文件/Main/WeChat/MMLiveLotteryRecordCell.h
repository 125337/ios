@interface MMLiveLotteryRecordCell : MMTableViewCell
{
    UIView * _sepelateLine; // +0x8
    PrizeRecord * _lotteryRecord; // +0x10
    MMUIView * _leftImageBbView; // +0x18
    MMUIImageView * _leftImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithLotteryRecord:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)leftImageBbView;
- (id)leftImageView;
- (id)titleLabel;
- (id)sepelateLine;
- (id)descLabel;
- (void)setSepelateLine:(id)arg1;
- (id)lotteryRecord;
- (void)setLotteryRecord:(id)arg1;
- (void)setLeftImageBbView:(id)arg1;
- (void)setLeftImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
