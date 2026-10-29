@interface WCFinderProfileNewLifeOverviewCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    BOOL _enableFinderLike; // +0x8
    NewLifeCardViewModel * _viewModel; // +0x10
    MMWebImageView * _mediaImageView; // +0x18
    UIView * _mediaMaskView; // +0x20
    UIImageView * _backgroundBlurView; // +0x28
    MMUIButton * _likeButton; // +0x30
    UIView * _separateView; // +0x38
    MMUIButton * _stickyButton; // +0x40
    MMUIButton * _privacyButton; // +0x48
    ColorGradientView * _gradientView; // +0x50
    RichTextView * _titleLabel; // +0x58
}
+ (id)generateStateButtonWithHasText:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (void)updateLayout;
- (CGRect)getCoverCropRect:(BOOL)arg1;
- (void)updateView;
- (void)updateButtons;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)viewModel;
- (BOOL)enableFinderLike;
- (void)setEnableFinderLike:(BOOL)arg1;
- (id)mediaImageView;
- (void)setMediaImageView:(id)arg1;
- (id)mediaMaskView;
- (void)setMediaMaskView:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)separateView;
- (void)setSeparateView:(id)arg1;
- (id)stickyButton;
- (void)setStickyButton:(id)arg1;
- (id)privacyButton;
- (void)setPrivacyButton:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

