@interface WCImageFullScreenTagView : UIView
{
    BOOL _autoAdjustsTags; // +0x8
    WCImageFullScreenTagViewModel * _viewModel; // +0x10
    id <WCImageFullScreenTagViewDelegate> _delegate; // +0x18
    double _miaoJianButtonTrailingReservedWidth; // +0x20
    WCLivePhotoButton * _livePhotoButton; // +0x28
    ImageBrowseButton * _imageSearchButton; // +0x30
    MMUIButton * _yuanBaoFollowButton; // +0x38
    MMUIButton * _detailButton; // +0x40
    UIFont * _detailButtonTextFont; // +0x48
    WCMediaEcsInfoButton * _ecsButton; // +0x50
    WCPlayerShareableButton * _miaoJianButton; // +0x58
    double _viewWidth; // +0x60
    double _detailButtonVisibilityAlpha; // +0x68
    double _detailButtonPagingAlpha; // +0x70
    CGSize _livePhotoBtnSize; // +0x78
    UIEdgeInsets _tagSafeArea; // +0x88
    UIEdgeInsets _tagPadding; // +0xa8
}
- (id)initWithViewModel:(id)arg1 frame:(CGRect)arg2;
- (void)setAutoAdjustsTags:(BOOL)arg1;
- (void)setTagSafeArea:(UIEdgeInsets)arg1;
- (double)safeAreaInsetBottom;
- (double)_calculateHeight;
- (void)loadLivePhotoButton;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)loadYuanBaoTemplateFollowButton;
- (void)yuanBaoTemplateFollowButtonClicked:(id)arg1;
- (void)loadDetailButton;
- (id)_buildDetailButtonAttributedTitleWithFont:(id)arg1 likeCount:(int)arg2 commentCount:(int)arg3;
- (id)_buildStatsStringWithLikeCount:(int)arg1 commentCount:(int)arg2;
- (void)setupDetailButtonReport:(id)arg1;
- (void)setDetailButtonAlpha:(double)arg1;
- (void)setPagingTransitionAlpha:(double)arg1 feedInfoAlpha:(double)arg2 feedInfoTranslationX:(double)arg3;
- (void)updateDetailButtonAlpha;
- (void)updateDetailButtonWithLikeCount:(int)arg1 commentCount:(int)arg2;
- (double)detailButtonWidth;
- (id)detailButtonView;
- (void)detailButtonClicked:(id)arg1;
- (void)loadEcsButton;
- (void)onClickEcsInfoButton;
- (void)loadMiaoJianButton;
- (void)onClickMiaoJianButton;
- (void)setMiaoJianButtonTrailingReservedWidth:(double)arg1;
- (void)loadImageSearchButton;
- (void)imageSearchButtonClicked:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)autoAdjustsTags;
- (UIEdgeInsets)tagSafeArea;
- (UIEdgeInsets)tagPadding;
- (void)setTagPadding:(UIEdgeInsets)arg1;
- (double)miaoJianButtonTrailingReservedWidth;
- (id)livePhotoButton;
- (void)setLivePhotoButton:(id)arg1;
- (id)imageSearchButton;
- (void)setImageSearchButton:(id)arg1;
- (id)yuanBaoFollowButton;
- (void)setYuanBaoFollowButton:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)detailButtonTextFont;
- (void)setDetailButtonTextFont:(id)arg1;
- (id)ecsButton;
- (void)setEcsButton:(id)arg1;
- (id)miaoJianButton;
- (void)setMiaoJianButton:(id)arg1;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (CGSize)livePhotoBtnSize;
- (void)setLivePhotoBtnSize:(CGSize)arg1;
- (double)detailButtonVisibilityAlpha;
- (void)setDetailButtonVisibilityAlpha:(double)arg1;
- (double)detailButtonPagingAlpha;
- (void)setDetailButtonPagingAlpha:(double)arg1;
- (void).cxx_destruct;
@end
