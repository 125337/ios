@interface MMFinderLiveControlButtonCell : UICollectionViewCell
{
    UIImageView * _iconImageView; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (id)identifier;
+ (CGSize)cellSize;
- (void)updateWithButtonItem:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
