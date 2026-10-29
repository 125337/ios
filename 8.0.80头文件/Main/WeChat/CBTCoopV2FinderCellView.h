@interface CBTCoopV2FinderCellView : CBTCoopV2AsstBoardCellView <WCFinderShareAbstractCell, MMImageLoaderObserver, MMWebImageViewDelegate, ServiceAuthExt, WCFinderZoomAnimatorBehavior>
{
    BOOL _didTriggerDataItemPrefetch; // +0x8
    BOOL _didTriggerTransferXMLPrefetch; // +0x9
    UILabel * _nameLabel; // +0x10
    WCFinderLiveNowView * _liveNowView; // +0x18
    UIImageView * _contentImageView; // +0x20
    CAGradientLayer * _gradientLayer; // +0x28
    UIView * _separator; // +0x30
    UIImageView * _tinyIcon; // +0x38
    UILabel * _finderLabel; // +0x40
    SightIconView * _playIconView; // +0x48
    UIView * _photoCountDotView; // +0x50
    UIImage * _fullScreenImage; // +0x58
    MMUIButton * _memberFlagButton; // +0x60
    UIView * _finderContainer; // +0x68
    UITapGestureRecognizer * _tapGesture; // +0x70
    unsigned long long _lastRenderedPhotoCount; // +0x78
}
- (void)prepareForReuse;
- (id)finderViewModel;
- (id)menuAnchorView;
- (void)setupCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (void)layoutBottomViews;
- (void)rebuildPhotoCountDotsWithCount:(unsigned long long)arg1 containerSize:(CGSize)arg2;
- (CGSize)getCurSize;
- (void)prefetchDataItemIfNeeded;
- (void)prefetchTransferredXMLIfNeeded;
- (id)nameLabel;
- (id)liveNowView;
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
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onTouchUpInside;
- (BOOL)canResponseTouchNodeView;
- (void)doShareAnimation;
- (void)onLoadImageOK:(id)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
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
- (void)setMemberFlagButton:(id)arg1;
- (id)finderContainer;
- (void)setFinderContainer:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (unsigned long long)lastRenderedPhotoCount;
- (void)setLastRenderedPhotoCount:(unsigned long long)arg1;
- (BOOL)didTriggerDataItemPrefetch;
- (void)setDidTriggerDataItemPrefetch:(BOOL)arg1;
- (BOOL)didTriggerTransferXMLPrefetch;
- (void)setDidTriggerTransferXMLPrefetch:(BOOL)arg1;
- (void).cxx_destruct;
@end
