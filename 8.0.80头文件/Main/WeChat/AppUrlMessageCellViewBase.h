@interface AppUrlMessageCellViewBase : AppStandardImageContentMessageCellView
- (BOOL)canBeReused;
- (void)onAppear;
- (BOOL)isAsk;
- (BOOL)isAISearch;
- (BOOL)liteAppForbidFav;
- (void)initSourceViewInside;
- (void)initSourceViewInsideWith:(id)arg1 iconImageUrlString:(id)arg2 bgColor:(id)arg3 extraParams:(id)arg4;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)doFavorite;
- (void)onForward:(id)arg1;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
@end
