@interface FavRecordImgNodeView : FavRecordBaseNodeView <FavImagePreViewDelegate>
{
    FavImagePreView * m_imgPreView; // +0x50
}
- (void)addContentSubView;
- (void)onClickAsRefer;
- (void)onClickFavPreImage:(id)arg1 ImageIndex:(unsigned int)arg2;
- (void)onLongPressedFavPreImage:(id)arg1;
- (void)onWillLongPressFavImagePreView:(id)arg1 imageView:(id)arg2;
- (id)accessibilityLabel;
- (id)m_imgPreView;
- (void).cxx_destruct;
@end
