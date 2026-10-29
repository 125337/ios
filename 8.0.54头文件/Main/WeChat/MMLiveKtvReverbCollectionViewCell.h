@interface MMLiveKtvReverbCollectionViewCell : UICollectionViewCell
{
    MMWebImageView * _iconImageView; // +0x8
    UILabel * _label; // +0x10
    UIView * _borderView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithImageUri:(id)arg1 name:(id)arg2 isSelected:(BOOL)arg3;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (void).cxx_destruct;
@end

