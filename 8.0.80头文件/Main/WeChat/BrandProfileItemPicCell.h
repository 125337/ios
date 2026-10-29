@interface BrandProfileItemPicCell : UIView
{
    MMWebImageView * _coverImageView; // +0x8
    RichTextView * _titleView; // +0x10
    id /* block */ _accessibilityActivateHandler; // +0x18
    id /* block */ _likeActionHandler; // +0x20
    BrandProfileItemPicViewModel * _viewModel; // +0x28
    UIView * _overlayView; // +0x30
    UIImageView * _pinnedIcon; // +0x38
    UIView * _gradientView; // +0x40
    CAGradientLayer * _gradientLayer; // +0x48
    MMUILabel * _descLabel; // +0x50
    MMUILabel * _sendTimeLabel; // +0x58
    UIControl * _likeControl; // +0x60
    UIImageView * _likeIconView; // +0x68
    MMUILabel * _likeCountLabel; // +0x70
}
- (id)init;
- (void)initSubviews;
- (void)updateWithViewModel:(id)arg1;
- (void)updateLikeDisplay;
- (void)onLikeTapped;
- (BOOL)onAccessibilityLike;
- (BOOL)containsLikeTouchView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)accessibilityLabel;
- (BOOL)accessibilityActivate;
- (void)layoutSubviews;
- (void)updateCover;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)overlayView;
- (id)pinnedIcon;
- (id)gradientView;
- (id)gradientLayer;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id /* block */)accessibilityActivateHandler;
- (void)setAccessibilityActivateHandler:(id /* block */)arg1;
- (id /* block */)likeActionHandler;
- (void)setLikeActionHandler:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPinnedIcon:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)sendTimeLabel;
- (void)setSendTimeLabel:(id)arg1;
- (id)likeControl;
- (void)setLikeControl:(id)arg1;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg1;
- (id)likeCountLabel;
- (void)setLikeCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
