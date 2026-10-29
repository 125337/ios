@interface AppTingStandardListMessageCellView : AppStandardImageContentMessageCellView
{
    AppTingStandardListMessageImageView * _imageContent; // +0xb8
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (id)imageViewInSize:(CGSize)arg1;
- (void)onThumbImageCompleted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)categoryItem;
- (void)onAddToListenStar:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (BOOL)canShowForwardMenuItem;
- (BOOL)canShowFavoriteMenuItem;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)onTouchUpInsideListOrSinger;
- (void)onClickAsRefer;
- (id)imageContent;
- (void)setImageContent:(id)arg1;
- (void).cxx_destruct;
@end
