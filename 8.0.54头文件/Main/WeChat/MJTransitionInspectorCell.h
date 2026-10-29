@interface MJTransitionInspectorCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    UILabel * _titleLabel; // +0x10
    MJTransitionItem * _item; // +0x18
    MMWebImageView * _iconImageView; // +0x20
    MMUIActivityIndicatorView * _loadingView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setupWithItem:(id)arg1;
- (void)syncWithStatus;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)titleLabel;
- (id)item;
- (BOOL)isCellSelected;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

