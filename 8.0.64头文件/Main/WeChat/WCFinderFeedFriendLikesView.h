@interface WCFinderFeedFriendLikesView : UIView <WCFinderThanksButtonDelegate, WCFinderFriendLikeToolbarViewProtocol, MMFinderFriendLikeShootingAnimationTargetProtocol>
{
    BOOL _isFriendLikeAnimating; // +0x8
    BOOL _canCarousel; // +0x9
    BOOL _startLikeAnimation; // +0xa
    id <WCFinderFriendLikeToolbarViewDelegate> _delegate; // +0x10
    WCFinderFeedFriendLikesInfoViewModel * _viewModel; // +0x18
    NSArray * _displayViewsArray; // +0x20
    unsigned long long _displayIndex; // +0x28
    unsigned long long _carouselLoopCount; // +0x30
    MMTimer * _carouselTimer; // +0x38
}
+ (double)cellHeightWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
- (BOOL)updateWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
- (void)updateSubViews;
- (Class)viewClassWithType:(unsigned long long)arg1;
- (void)prepareForReuse;
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
- (BOOL)startLikeAnimation;
- (void)setStartLikeAnimation:(BOOL)arg1;
- (id)carouselTimer;
- (void).cxx_destruct;
@end
