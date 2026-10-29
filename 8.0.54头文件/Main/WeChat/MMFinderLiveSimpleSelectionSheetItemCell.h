@interface MMFinderLiveSimpleSelectionSheetItemCell : UITableViewCell
{
    MMUILabel * _detailTitleLabel; // +0x8
    MMUILabel * _detailDescriptionLabel; // +0x10
    MMUIImageView * _selectStatusImageView; // +0x18
}
+ (double)cellHeightWithItem:(id)arg1 maxWidth:(double)arg2;
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)configWithItem:(id)arg1;
- (void)layoutSubviews;
- (void)setShowCheckmark:(BOOL)arg1;
- (id)detailTitleLabel;
- (void)setDetailTitleLabel:(id)arg1;
- (id)detailDescriptionLabel;
- (void)setDetailDescriptionLabel:(id)arg1;
- (id)selectStatusImageView;
- (void)setSelectStatusImageView:(id)arg1;
- (void).cxx_destruct;
@end

