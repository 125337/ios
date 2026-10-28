@interface ShakeTvTableViewCell : MMTableViewCell
{
    MMWebImageView * _thumbImageView; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
}
- (void)updateWithShakeItemBase:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void).cxx_destruct;
@end
