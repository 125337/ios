@interface GameVideoAlbumCell : UICollectionViewCell
{
    MMWebImageView * _imageView; // +0x8
    UILabel * _titleView; // +0x10
    UILabel * _subTitleView; // +0x18
    UILabel * _durationView; // +0x20
    UIView * _tagViewContainer; // +0x28
    id _currentCellData; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupGameVideoAlbumCell;
- (void)renderWithCellData:(id)arg1;
- (void)addTagViews:(id)arg1;
- (void).cxx_destruct;
@end

