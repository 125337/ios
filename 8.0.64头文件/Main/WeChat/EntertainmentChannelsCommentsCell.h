@interface EntertainmentChannelsCommentsCell : UICollectionViewCell
{
    UILabel * _titleLabel; // +0x8
    UILabel * _nameLabel; // +0x10
    WCFinderHeadImageView * _avatorImageView; // +0x18
    UIView * _avatorImageBorderView; // +0x20
}
+ (id)cellIdentifier;
+ (CGSize)sizeWithComment:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithBullet:(id)arg1;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)avatorImageView;
- (void)setAvatorImageView:(id)arg1;
- (id)avatorImageBorderView;
- (void)setAvatorImageBorderView:(id)arg1;
- (void).cxx_destruct;
@end
