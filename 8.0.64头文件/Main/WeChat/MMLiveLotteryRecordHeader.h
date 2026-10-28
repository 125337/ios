@interface MMLiveLotteryRecordHeader : UIView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
    LivePrizeRecord * _livePrizeRecord; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithLivePrizeRecord:(id)arg1;
- (id)titleLabel;
- (id)descLabel;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (id)livePrizeRecord;
- (void)setLivePrizeRecord:(id)arg1;
- (void).cxx_destruct;
@end
