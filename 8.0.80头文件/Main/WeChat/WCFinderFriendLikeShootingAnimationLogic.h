@interface WCFinderFriendLikeShootingAnimationLogic : NSObject <CAAnimationDelegate>
{
    BOOL _shootingAnimating; // +0x8
    BOOL _isLongPressAnimating; // +0x9
    BOOL _endLongPress; // +0xa
    BOOL _shouldCancelAnimation; // +0xb
    BOOL _callComplection; // +0xc
    BOOL _startLongPress; // +0xd
    id /* block */ _shootingAnimationCompletion; // +0x10
    id /* block */ _longPressEndBlock; // +0x18
    id /* block */ _longPressEndAnimationCompletion; // +0x20
    UIView<MMFinderFriendLikeShootingAnimationTargetProtocol> * _targetView; // +0x28
    UIView<MMFinderFriendLikeShootingAinmationStartProtocol> * _startView; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
    UIView * _containerView; // +0x40
    UIView * _shootingAvatarView; // +0x48
    double _shootingAniamtionBeginTime; // +0x50
    unsigned long long _likeCountBeforAnimation; // +0x58
    PAGView * _likeAnimationPag; // +0x60
    UILabel * _likeCountAnimationLabel; // +0x68
    UILabel * _likeInfoLabel; // +0x70
    unsigned long long _likeAniamtionCount; // +0x78
    double _headViewLeft; // +0x80
    double _nameLabelLeft; // +0x88
    double _likeIconViewCenterX; // +0x90
    double _likeCountLeft; // +0x98
    UIImage * _likeIconImage; // +0xa0
    UIViewPropertyAnimator * _lastProperty; // +0xa8
    CADisplayLink * _avatarDisplayLink; // +0xb0
    NSMutableSet * _flyingLikeViews; // +0xb8
    CGSize _likeIconSize; // +0xc0
}
+ (double)comboLikeDurationForCount:(long long)arg1;
- (void)addAnimationSubviewToContainer:(id)arg1;
- (id)initWithTargetView:(id)arg1 startView:(id)arg2 containerView:(id)arg3 contentVM:(id)arg4;
- (void)tryPerformAnimation;
- (void)tryPerformAnimationWithLikeFlag:(int)arg1 likeList:(id)arg2;
- (void)cancelAnimation;
- (void)displayLinkAction:(id)arg1;
- (void)removeAnimationAvatarView;
- (void)setShouldCancelAnimation:(BOOL)arg1;
- (void)dealloc;
- (BOOL)isShowNewStyleAnimation;
- (void)showNewStyleAnimation;
- (BOOL)canShowLikePagEffect;
- (void)showJumpUpAnimation;
- (void)showBottomeUpAnimation;
- (void)showHeaderAnimationFirstLike;
- (id)likeAnimInfoStr;
- (CGRect)getTargetRectInContainerView:(id)arg1;
- (void)confirmLongPressEnd;
- (void)longPressPerActionWithState:(unsigned long long)arg1;
- (void)startLongPressTimmerAnimation:(unsigned long long)arg1;
- (double)durationForCount:(long long)arg1;
- (void)showHeaderAnimationSecondLike;
- (void)showHeaderAnimationThirdLike;
- (void)showHeaderAnimationMoreLike;
- (id)showheaderArray;
- (void)moveCurrentHeaderView;
- (void)showJumpAnimationSecondLike;
- (void)showJumpAnimationThirdLike;
- (void)showJumpAnimationMoreLike;
- (void)_showSelfJumpAnimationWithOffset:(double)arg1;
- (void)_showOtherJumpAniationWithDelayTimeArray:(id)arg1;
- (void)buttomeUpOthersWithDelayTimeArray:(id)arg1;
- (void)bottomeUpOtherWithView:(id)arg1 delayTime:(double)arg2 duration:(double)arg3;
- (void)bottomeUpSelf;
- (void)jumpAnimationWithView:(id)arg1 offset:(double)arg2 jumpDuration:(double)arg3 downDuration:(double)arg4 delayTime:(double)arg5 complection:(id /* block */)arg6;
- (void)doComplectionBlock;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (id /* block */)shootingAnimationCompletion;
- (void)setShootingAnimationCompletion:(id /* block */)arg1;
- (id /* block */)longPressEndBlock;
- (void)setLongPressEndBlock:(id /* block */)arg1;
- (id /* block */)longPressEndAnimationCompletion;
- (void)setLongPressEndAnimationCompletion:(id /* block */)arg1;
- (BOOL)shootingAnimating;
- (void)setShootingAnimating:(BOOL)arg1;
- (BOOL)isLongPressAnimating;
- (void)setIsLongPressAnimating:(BOOL)arg1;
- (BOOL)endLongPress;
- (void)setEndLongPress:(BOOL)arg1;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (id)startView;
- (void)setStartView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)shootingAvatarView;
- (void)setShootingAvatarView:(id)arg1;
- (double)shootingAniamtionBeginTime;
- (void)setShootingAniamtionBeginTime:(double)arg1;
- (unsigned long long)likeCountBeforAnimation;
- (void)setLikeCountBeforAnimation:(unsigned long long)arg1;
- (BOOL)shouldCancelAnimation;
- (BOOL)callComplection;
- (void)setCallComplection:(BOOL)arg1;
- (id)likeAnimationPag;
- (void)setLikeAnimationPag:(id)arg1;
- (id)likeCountAnimationLabel;
- (void)setLikeCountAnimationLabel:(id)arg1;
- (id)likeInfoLabel;
- (void)setLikeInfoLabel:(id)arg1;
- (unsigned long long)likeAniamtionCount;
- (void)setLikeAniamtionCount:(unsigned long long)arg1;
- (double)headViewLeft;
- (void)setHeadViewLeft:(double)arg1;
- (double)nameLabelLeft;
- (void)setNameLabelLeft:(double)arg1;
- (double)likeIconViewCenterX;
- (void)setLikeIconViewCenterX:(double)arg1;
- (double)likeCountLeft;
- (void)setLikeCountLeft:(double)arg1;
- (CGSize)likeIconSize;
- (void)setLikeIconSize:(CGSize)arg1;
- (id)likeIconImage;
- (void)setLikeIconImage:(id)arg1;
- (BOOL)startLongPress;
- (void)setStartLongPress:(BOOL)arg1;
- (id)lastProperty;
- (void)setLastProperty:(id)arg1;
- (id)avatarDisplayLink;
- (void)setAvatarDisplayLink:(id)arg1;
- (id)flyingLikeViews;
- (void)setFlyingLikeViews:(id)arg1;
- (void).cxx_destruct;
@end
