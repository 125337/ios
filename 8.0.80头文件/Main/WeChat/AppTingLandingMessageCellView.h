@interface AppTingLandingMessageCellView : AppStandardTextContentMessageCellView
{
    BOOL _hasReportedExposure; // +0xb8
    AppTingLandingCoverImageView * _coverImageView; // +0xc0
    AppTingLandingSharedRadioCoverView * _sharedRadioCoverView; // +0xc8
}
- (id)contentImgViewsInSize:(CGSize)arg1 limit:(unsigned long long)arg2;
- (void)updateThumbImage;
- (void)loadCoverImage;
- (id)categoryItem;
- (void)onForward:(id)arg1;
- (BOOL)canShowForwardMenuItem;
- (BOOL)canShowFavoriteMenuItem;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)onClickAsRefer;
- (void)reportViewEvent:(id)arg1;
- (void)didMoveToWindow;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)sharedRadioCoverView;
- (void)setSharedRadioCoverView:(id)arg1;
- (BOOL)hasReportedExposure;
- (void)setHasReportedExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
