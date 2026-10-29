@interface WCFinderShareLiveCellView : CommonMessageCellView <WCFinderShareLiveCellViewDelegate, MMWebImageViewDelegate>
{
    BOOL _canShowLiveActivityView; // +0xb8
    BOOL _isVisible; // +0xb9
    MMWebImageView * _contentImageView; // +0xc0
    MMWebImageView * _avatarImageView; // +0xc8
    RichTextView * _nameLabel; // +0xd0
    UIView * _coverViewContainer; // +0xd8
    MMWebImageView * _maskImageView; // +0xe0
    UIImageView * _gradientView; // +0xe8
    UIView * _liveMaskView; // +0xf0
    WCFinderLiveShareCellFullStatusView * _liveMaskTipsView; // +0xf8
    WCFinderLiveNowView * _liveNowView; // +0x100
    UIImageView * _tinyIcon; // +0x108
    MMFinderLiveActivityView * _liveActivityView; // +0x110
    MMWebImageView * _tailTagView; // +0x118
    UILabel * _coverEffectLabel; // +0x120
    UILabel * _detailLabel; // +0x128
    MMFinderLiveLimitModeLiveInfoEnsurer * _liveInfoEnsurer; // +0x130
    RichTextView * _mediaTitleTextView; // +0x138
    MMUIViewController * _lastViewController; // +0x140
}
+ (void)clearContentViewHiddenState;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutContentView;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)bindYReportSdk:(id)arg1;
- (void)layoutInternal;
- (void)layoutFinished;
- (void)layoutDefault;
- (void)updateDetailLabel;
- (void)onAppear;
- (void)reloadContentViewHiddenState;
- (id)avatarImageView;
- (id)nameLabel;
- (id)coverViewContainer;
- (id)contentImageView;
- (id)maskImageView;
- (id)liveNowView;
- (id)liveMaskView;
- (id)liveMaskTipsView;
- (id)coverEffectLabel;
- (void)layoutLiveActivityView;
- (id)tinyIcon;
- (id)mediaTitleTextView;
- (void)refreshLiveMaskEffect;
- (id)transitionStartImage;
- (id)detailLabel;
- (id)gradientView;
- (id)tailTagView;
- (id)operationMenuItems;
- (void)onShowOperationMenu;
- (void)onForward:(id)arg1;
- (void)setupCallbackViewForTransitionIfNeeded;
- (void)onTouchUpInside;
- (void)_executeTouchUpLogic;
- (void)prepareForMorphTransition;
- (void)doShareAnimation;
- (void)onLiveStatusChanged;
- (void)onLoadImageOK:(id)arg1;
- (void)didMoveToWindow;
- (void)onDisappear;
- (BOOL)isListDragging;
- (void)onAppEnterBackground;
- (void)reportLiveShareActionWithEid:(id)arg1 isExpose:(BOOL)arg2;
- (void)setContentImageView:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setCoverViewContainer:(id)arg1;
- (void)setMaskImageView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setLiveMaskView:(id)arg1;
- (void)setLiveMaskTipsView:(id)arg1;
- (void)setLiveNowView:(id)arg1;
- (void)setTinyIcon:(id)arg1;
- (BOOL)canShowLiveActivityView;
- (void)setCanShowLiveActivityView:(BOOL)arg1;
- (id)liveActivityView;
- (void)setLiveActivityView:(id)arg1;
- (void)setTailTagView:(id)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (void)setCoverEffectLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (id)liveInfoEnsurer;
- (void)setLiveInfoEnsurer:(id)arg1;
- (void)setMediaTitleTextView:(id)arg1;
- (id)lastViewController;
- (void)setLastViewController:(id)arg1;
- (void).cxx_destruct;
@end
