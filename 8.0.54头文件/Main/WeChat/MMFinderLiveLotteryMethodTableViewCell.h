@interface MMFinderLiveLotteryMethodTableViewCell : UITableViewCell
{
    MMFinderLiveLotteryMethodDataItem * _lotteryMethodDataItem; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _stateLabel; // +0x18
    UIImageView * _selectStateImg; // +0x20
    UIView * _sepelateLine; // +0x28
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setLotteryMethodDataItem:(id)arg1;
- (void)createUI;
- (void)layoutUI;
- (void)layoutNormalUI;
- (void)layoutUnNormalUI;
- (id)titleLabel;
- (id)stateLabel;
- (id)selectStateImg;
- (id)sepelateLine;
- (id)lotteryMethodDataItem;
- (void)setTitleLabel:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void)setSelectStateImg:(id)arg1;
- (void)setSepelateLine:(id)arg1;
- (void).cxx_destruct;
@end

