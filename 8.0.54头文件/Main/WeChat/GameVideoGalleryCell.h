@interface GameVideoGalleryCell : UICollectionViewCell
{
    UIView * _bottomView; // +0x8
    MMWebImageView * _imageView; // +0x10
    UILabel * _titleView; // +0x18
    UILabel * _subtitleView; // +0x20
    UIView * _vertDividerView; // +0x28
    UIView * _tagViewContainer; // +0x30
    MMUIButton * _videoTypeView; // +0x38
    UIView * _horiDividerView; // +0x40
    id _cellData; // +0x48
    id /* block */ _videoTypeAction; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupGameVideoGalleryCell;
- (void)updateLayout:(double)arg1;
- (void)renderWithCellData:(id)arg1 videoTypeAction:(id /* block */)arg2 extraBottomHeight:(double)arg3;
- (void)updateVideoTypeState:(BOOL)arg1;
- (void)clickVideoType;
- (void)renderTagViews:(id)arg1;
- (void).cxx_destruct;
@end

