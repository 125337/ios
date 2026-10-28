@interface MMFinderLiveChooseClarityTableViewCell : UITableViewCell
{
    MMFinderLiveChooseClarityDataItem * _clarityMethodDataItem; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _stateLabel; // +0x18
    UIImageView * _selectStateImg; // +0x20
    UIView * _sepelateLine; // +0x28
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setclarityMethodDataItem:(id)arg1;
- (void)createUI;
- (void)layoutUI;
- (void)layoutNormalUI;
- (id)titleLabel;
- (id)stateLabel;
- (id)selectStateImg;
- (id)sepelateLine;
- (id)clarityMethodDataItem;
- (void)setClarityMethodDataItem:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void)setSelectStateImg:(id)arg1;
- (void)setSepelateLine:(id)arg1;
- (void).cxx_destruct;
@end
