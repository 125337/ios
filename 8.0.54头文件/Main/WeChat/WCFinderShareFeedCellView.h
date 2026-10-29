@interface WCFinderShareFeedCellView : CommonMessageCellView <MMImageLoaderObserver, MMWebImageViewDelegate, ServiceAuthExt, WCFinderZoomAnimatorBehavior, WCFinderShareAbstractCell>
{
    MMWebImageView * _avatarImageView; // +0xa8
    UILabel * _nameLabel; // +0xb0
    WCFinderLiveNowView * _liveNowView; // +0xb8
    UIImageView * _contentImageView; // +0xc0
    CAGradientLayer * _gradientLayer; // +0xc8
    UIView * _separator; // +0xd0
    UIImageView * _tinyIcon; // +0xd8
    UILabel * _finderLabel; // +0xe0
    SightIconView * _playIconView; // +0xe8
    UIView * _photoCountDotView; // +0xf0
    UIImage * _fullScreenImage; // +0xf8
    WCFinderAuthInfoIconView * _authIconView; // +0x100
    MMUIButton * _memberFlagButton; // +0x108
}
- (void)layoutContentView;
- (void)layoutDefault;
- (void)layoutPureText;
- (void)layoutBottomViews;
- (id)avatarImageView;
- (id)nameLabel;
- (id)liveNowView;
- (id)authIconView;
- (id)contentImageView;
- (id)gradientLayer;
- (id)separator;
- (id)photoCountDotView;
- (id)tinyIcon;
- (id)finderLabel;
- (id)playIconView;
- (id)memberFlagButton;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (void)willOpenShareViewController;
- (id)displayViewForImageBrowser;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (void)onAnimatorWillBeginExpand:(id)arg1;
- (BOOL)zoomAnimiatorShouldCacheSnapView;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (id)zoomAnimatorKey;
- (id)operationMenuItems;
- (void)onSliencePlay:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onTouchUpInside;
- (BOOL)canResponseTouchNodeView;
- (void)doShareAnimation;
- (void)onAppear;
- (void)onLoadImageOK:(id)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)setAvatarImageView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setLiveNowView:(id)arg1;
- (void)setContentImageView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTinyIcon:(id)arg1;
- (void)setFinderLabel:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setPhotoCountDotView:(id)arg1;
- (id)fullScreenImage;
- (void)setFullScreenImage:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setMemberFlagButton:(id)arg1;
- (void).cxx_destruct;
@end

