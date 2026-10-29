@interface WCMediaImageScrollView : WCImageScrollView <WCImageFullScreenTagViewDelegate>
{
    BOOL _useNewInteraction; // +0x40
    BOOL _useV3GalleryPagingStyle; // +0x41
    BOOL _showLikeCommentCount; // +0x42
    BOOL _usesV3AsyncImageLoading; // +0x43
    BOOL _pagingLoadingPlaceholder; // +0x44
    BOOL _fadesImageDuringHideAnimation; // +0x45
    BOOL _fallsBackToScaleFadeDuringHideAnimation; // +0x46
    BOOL _isAnimatingToShowFullScreen; // +0x47
    BOOL _isPagingHeadViewAlphaActive; // +0x48
    BOOL _isV3GalleryExiting; // +0x49
    WCMediaImageViewModel * _viewModel; // +0x50
    WCMediaItemWrap * _mediaItemWrap; // +0x58
    UIView * _imageTagSuperView; // +0x60
    WCImageFullScreenTagView * _imageTagView; // +0x68
    WCPhotoMutipleImageHeadView * _headView; // +0x70
    NSString * _mainTitle; // +0x78
    NSString * _subTitle; // +0x80
    NSString * _mediaIndicator; // +0x88
    double _pagingHeadViewBaseAlpha; // +0x90
    UIEdgeInsets _imageTagSafeArea; // +0x98
    UIEdgeInsets _imageTagPadding; // +0xb8
    CGRect _m_originImageRectInScreen; // +0xd8
}
- (id)init;
- (void)displayViewModel:(id)arg1 withImage:(id)arg2 frame:(CGRect)arg3;
- (void)changeShowUhdImage:(id)arg1;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)bringImageTagViewToFront;
- (void)reloadImageTagView;
- (void)setImageTagSafeArea:(UIEdgeInsets)arg1;
- (void)updateImageTagSafeArea;
- (void)layoutSubviews;
- (void)layoutImageTagView;
- (void)reloadImageHeadView;
- (void)layoutImageHeadView;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2 mediaIndicator:(id)arg3;
- (void)updatePagingTransitionAlpha:(double)arg1 feedInfoAlpha:(double)arg2 feedInfoTranslationX:(double)arg3 adjustsFeedInfo:(BOOL)arg4;
- (void)animationShow;
- (void)animationHideWithRotate;
- (void)updateVisibleForImageTagView:(BOOL)arg1;
- (void)internalDisplayImageMaterial:(id)arg1 withFrame:(CGRect)arg2;
- (void)playableImageView:(id)arg1 didChangePlayerState:(unsigned long long)arg2;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)livePhotoButtonClickedInImageTagView:(id)arg1;
- (void)detailButtonClickedInImageTagView:(id)arg1;
- (void)ecsButtonClickedInImageTagView:(id)arg1;
- (void)setupDetailButtonReportParams:(id)arg1;
- (void)reportLivePhotoExposeData;
- (void)reportLivePhotoPlayData:(long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)mediaItemWrap;
- (void)setMediaItemWrap:(id)arg1;
- (UIEdgeInsets)imageTagSafeArea;
- (UIEdgeInsets)imageTagPadding;
- (void)setImageTagPadding:(UIEdgeInsets)arg1;
- (id)imageTagSuperView;
- (void)setImageTagSuperView:(id)arg1;
- (BOOL)useNewInteraction;
- (void)setUseNewInteraction:(BOOL)arg1;
- (BOOL)useV3GalleryPagingStyle;
- (void)setUseV3GalleryPagingStyle:(BOOL)arg1;
- (BOOL)showLikeCommentCount;
- (void)setShowLikeCommentCount:(BOOL)arg1;
- (BOOL)usesV3AsyncImageLoading;
- (void)setUsesV3AsyncImageLoading:(BOOL)arg1;
- (BOOL)pagingLoadingPlaceholder;
- (void)setPagingLoadingPlaceholder:(BOOL)arg1;
- (CGRect)m_originImageRectInScreen;
- (void)setM_originImageRectInScreen:(CGRect)arg1;
- (BOOL)fadesImageDuringHideAnimation;
- (void)setFadesImageDuringHideAnimation:(BOOL)arg1;
- (BOOL)fallsBackToScaleFadeDuringHideAnimation;
- (void)setFallsBackToScaleFadeDuringHideAnimation:(BOOL)arg1;
- (id)imageTagView;
- (void)setImageTagView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)mainTitle;
- (void)setMainTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)mediaIndicator;
- (void)setMediaIndicator:(id)arg1;
- (BOOL)isAnimatingToShowFullScreen;
- (void)setIsAnimatingToShowFullScreen:(BOOL)arg1;
- (BOOL)isPagingHeadViewAlphaActive;
- (void)setIsPagingHeadViewAlphaActive:(BOOL)arg1;
- (BOOL)isV3GalleryExiting;
- (void)setIsV3GalleryExiting:(BOOL)arg1;
- (double)pagingHeadViewBaseAlpha;
- (void)setPagingHeadViewBaseAlpha:(double)arg1;
- (void).cxx_destruct;
@end
