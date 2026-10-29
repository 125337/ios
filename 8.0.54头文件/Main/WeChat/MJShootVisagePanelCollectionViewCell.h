@interface MJShootVisagePanelCollectionViewCell : UICollectionViewCell
{
    MMUIImageView * _iconImageView; // +0x8
    MMUIView * _iconContainerView; // +0x10
    MMUILabel * _titleLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupWithItem:(id)arg1;
- (void)prepareForReuse;
- (void)reset;
- (id)iconContainerView;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:(id)arg1;
- (void)setIconContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

