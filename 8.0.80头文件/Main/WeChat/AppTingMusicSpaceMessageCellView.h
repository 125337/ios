@interface AppTingMusicSpaceMessageCellView : AppStandardTextContentMessageCellView
{
    AppTingMusicSpaceMultiCoverView * _multiCoverView; // +0xb8
}
- (id)contentImgViewsInSize:(CGSize)arg1 limit:(unsigned long long)arg2;
- (void)updateThumbImage;
- (BOOL)canShowForwardMenuItem;
- (id)operationMenuItems;
- (BOOL)canShowFavoriteMenuItem;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onAppear;
- (void)onTouchUpInside;
- (void)onClickAsRefer;
- (id)multiCoverView;
- (void)setMultiCoverView:(id)arg1;
- (void).cxx_destruct;
@end
