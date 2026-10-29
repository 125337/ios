@interface MMLiveKtvThemesSelectionCollectionViewCell : UICollectionViewCell
{
    MMLiveKtvThemeItem * _theme; // +0x8
    MMWebImageView * _thumbnailImageView; // +0x10
    UIView * _selectionBorderView; // +0x18
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTheme:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)theme;
- (id)thumbnailImageView;
- (void)setThumbnailImageView:(id)arg1;
- (id)selectionBorderView;
- (void)setSelectionBorderView:(id)arg1;
- (void).cxx_destruct;
@end

