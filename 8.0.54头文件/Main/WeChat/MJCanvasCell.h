@interface MJCanvasCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    MMUIImageView * _iconImageView; // +0x10
    UILabel * _titleLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)prepareForReuse;
- (void)setupWithItem:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (BOOL)isCellSelected;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

