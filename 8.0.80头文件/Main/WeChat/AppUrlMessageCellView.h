@interface AppUrlMessageCellView : AppStandardTextContentMessageCellView
{
    AppUrlMessageImageView * _urlImageView; // +0xb8
}
- (id)contentImgViewsInSize:(CGSize)arg1 limit:(unsigned long long)arg2;
- (BOOL)isContentVideo;
- (id)displayViewForImageBrowser;
- (void)updateThumbImage;
- (id)thumbImage;
- (void)onAppear;
- (BOOL)isSingleChatXiaoweiInviteCard;
- (BOOL)isAsk;
- (BOOL)isAISearch;
- (BOOL)liteAppForbidFav;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)doFavorite;
- (void)onForward:(id)arg1;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (id)urlImageView;
- (void)setUrlImageView:(id)arg1;
- (void).cxx_destruct;
@end
