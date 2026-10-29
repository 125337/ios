@interface WCFinderFeedFriendLikesView : UIView <WCFinderThanksButtonDelegate, WCFinderFeedContentVMExt, WCFinderFriendLikeToolbarViewProtocol, MMFinderFriendLikeShootingAnimationTargetProtocol>
{
    BOOL _isFriendLikeAnimating; // +0x8
    BOOL _canCarousel; // +0x9
    WCFinderFeedFriendLikesLayoutConfig * _likesLayoutConfig; // +0x10
    id <WCFinderFriendLikeToolbarViewDelegate> _delegate; // +0x18
    long long _preferredUserInterfaceStyle; // +0x20
    WCFinderFeedFriendLikesInfoViewModel * _viewModel; // +0x28
    NSArray * _displayViewsArray; // +0x30
    unsigned long long _displayIndex; // +0x38
    unsigned long long _carouselLoopCount; // +0x40
    MMTimer * _carouselTimer; // +0x48
}
+ (double)cellHeightWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
+ (double)cellHeightWithContentVM:(id)arg1 flag:(unsigned long long)arg2 layoutConfig:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)setPreferredUserInterfaceStyle:(long long)arg1;
- (id)likesLayoutConfig;
- (void)setLikesLayoutConfig:(id)arg1;
- (long long)resolvedSupportedInterfaceStyle;
- (void)applyOverrideUserInterfaceStyleWithSupportedStyle:(long long)arg1;
- (BOOL)syncInterfaceStyleIfNeeded;
- (void)refreshForInterfaceStyleChangeIfNeeded:(BOOL)arg1;
- (BOOL)updateWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
- (void)updateSubViews;
- (id)resolvedDisplayViewLayoutConfig;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (Class)viewClassWithType:(unsigned long long)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)resetHeaderViewsAndLikeCount;
- (id)getFirstFriendLikeView;
- (void)clickViewActionWithViewModel:(id)arg1;
- (void)startLikeInfoCarousel;
- (void)setCarouselTimer:(id)arg1;
- (void)stopLikeInfoCarousel;
- (void)_stopLikeInfoCarousel;
- (void)_displayOnlyOneLikeInfoAnimation;
- (void)_displayLikeInfoCarousel;
- (void)_displayComboLikeAnimation:(id)arg1 complection:(id /* block */)arg2;
- (void)onFeedContent:(id)arg1 likedDataUpdateByUserAction:(id)arg2 likeFlag:(int)arg3;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (id)friendLikeShootingAinmationTargetCreateSnapshotView;
- (CGRect)friendLikeShootingAinmationTargetGetFrame;
- (id)createOneSelfAvatarView;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2;
- (id)friendLikeShowingHeaderViews;
- (BOOL)supportNewStyle;
- (void)friendLikeAvatorViewLayout;
- (void)friendLikeTitleRefreshLayoutWithSuperLikeFlag:(BOOL)arg1;
- (id)likeHeaderContainerView;
- (id)selfNameLabel;
- (id)selfLikeIconView;
- (void)friendLikeStartLongPressAction;
- (void)friendLikeEndLongPressAction;
- (BOOL)removedOnCompletion;
- (void)friendLikeStartPerformAnimation;
- (BOOL)canShowThanksButtonInView;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFriendLikeAnimating;
- (void)setIsFriendLikeAnimating:(BOOL)arg1;
- (long long)preferredUserInterfaceStyle;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)displayViewsArray;
- (void)setDisplayViewsArray:(id)arg1;
- (unsigned long long)displayIndex;
- (void)setDisplayIndex:(unsigned long long)arg1;
- (unsigned long long)carouselLoopCount;
- (void)setCarouselLoopCount:(unsigned long long)arg1;
- (BOOL)canCarousel;
- (void)setCanCarousel:(BOOL)arg1;
- (id)carouselTimer;
- (void).cxx_destruct;
@end
