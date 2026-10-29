@interface MJMovieComposingRedditBubbleView : MMUIView
{
    id <MJMovieComposingRedditBubbleViewDelegate> _delegate; // +0x8
    MJMovieComposingReeditParams * _params; // +0x10
    UIView * _containerView; // +0x18
    UIImageView * _iconImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUIButton * _editButton; // +0x30
    UIVisualEffectView * _blurEffectView; // +0x38
    CAGradientLayer * _gradientLayer; // +0x40
}
- (id)initWithReeditParams:(id)arg1;
- (void)setupUI;
- (void)setupConstraints;
- (double)editButtonWidth;
- (void)layoutSubviews;
- (void)editButtonTapped;
- (CGSize)intrinsicContentSize;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)editButton;
- (void)setEditButton:(id)arg1;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
