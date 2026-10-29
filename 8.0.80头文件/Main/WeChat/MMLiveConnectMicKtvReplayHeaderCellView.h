@interface MMLiveConnectMicKtvReplayHeaderCellView : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UILabel * _descLabel; // +0x10
}
+ (id)ReuseIdentifier;
+ (double)calculateLabelHeightForText:(id)arg1 labelFont:(id)arg2 maxWidth:(double)arg3;
+ (CGSize)calculateLabelSizeForText:(id)arg1 labelFont:(id)arg2 maxSize:(CGSize)arg3;
+ (double)calculateHeightForTitleText:(id)arg1 descText:(id)arg2 viewWidth:(double)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (void)updateCellViewWithTitleText:(id)arg1 descText:(id)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
