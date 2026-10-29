@interface WCFinderZoomAnimator : NSObject <NSCopying, WCFinderTrailingAnimator>
{
    CGAffineTransform animatedViewAnimateTransform; // +0x8
    CGAffineTransform snapViewAnimateTransform; // +0x38
    double finalCornerRadius; // +0x68
    BOOL _useSpring; // +0x70
    BOOL _animatedAsCard; // +0x71
    BOOL _allowDragDownClose; // +0x72
    BOOL _coverContentMode; // +0x73
    long long _type; // +0x78
    double _springDamping; // +0x80
    double _springVelocity; // +0x88
    NSString * _refTid; // +0x90
    id <WCFinderZoomAnimatorDelegate> _delegate; // +0x98
    id /* block */ _checker; // +0xa0
    long long _animationCurve; // +0xa8
    long long _style; // +0xb0
    NSString * _animationKey; // +0xb8
    id _strongRefFactory; // +0xc0
    id <WCFinderZoomAnimatorBehavior> _snapFactory; // +0xc8
    NSMutableArray * _completions; // +0xd0
    WCFinderZoomAnimatingData * _animatingData; // +0xd8
    WCFinderTransitionUserInfo * _tempUserInfo; // +0xe0
    WCFinderZoomCacheData * _cacheData; // +0xe8
    WCFinderZoomAnimatorShareData * _shareData; // +0xf0
    double _centerPos; // +0xf8
}
+ (BOOL)finderFeedTransitionAsCard;
+ (id)animatorWithView:(id)arg1;
+ (id)animatorWithRetainBehavior:(id)arg1;
+ (id)animatorWithWeakBehavior:(id)arg1;
+ (id)defaultShareData;
+ (id)defaultShareDataWithSetter:(id /* block */)arg1;
+ (BOOL)HasZoomAnimatorForKey:(id)arg1;
+ (id)ZoomAnimatorForKey:(id)arg1;
+ (void)RebindAnimztorWithBehavior:(id)arg1 key:(id)arg2;
- (id)init;
- (void)addCompletion:(id /* block */)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)userInfo;
- (void)beforeAnimiation:(id)arg1;
- (id)snapViewFromFactory:(id)arg1;
- (id)createCacheSnapView;
- (void)animatedDisappearDirectly:(id)arg1;
- (BOOL)isClosure;
- (id)currentRefTid;
- (void)startAnimation:(id)arg1;
- (double)customAnimationDuration:(double)arg1 progress:(double)arg2;
- (void)_runAnimation:(id)arg1;
- (void)_runAnimationClosure:(id)arg1;
- (void)_runAnimationExpand:(id)arg1;
- (void)runPartAnimation:(double)arg1 block:(id /* block */)arg2;
- (void)onAnimationComplete:(BOOL)arg1 context:(id)arg2;
- (BOOL)shouldGestureClosureAsCard;
- (BOOL)shouldPinBackView;
- (BOOL)shouldDragDownAsCard;
- (BOOL)hasCustomAnimationFromVC:(id)arg1 toVC:(id)arg2 type:(long long)arg3 userInfo:(id)arg4;
- (BOOL)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldDragDownAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldPinBackViewWhenDraggingForVC:(id)arg1 userInfo:(id)arg2;
- (void)onAnimationPrepare:(long long)arg1 userInfo:(id)arg2;
- (void)onAnimationCleanUp:(BOOL)arg1;
- (id)chooseAnimatorWithOther:(id /* block */)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (BOOL)useSpring;
- (void)setUseSpring:(BOOL)arg1;
- (double)springDamping;
- (void)setSpringDamping:(double)arg1;
- (double)springVelocity;
- (void)setSpringVelocity:(double)arg1;
- (id)refTid;
- (void)setRefTid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)checker;
- (void)setChecker:(id /* block */)arg1;
- (BOOL)animatedAsCard;
- (void)setAnimatedAsCard:(BOOL)arg1;
- (BOOL)allowDragDownClose;
- (void)setAllowDragDownClose:(BOOL)arg1;
- (BOOL)coverContentMode;
- (void)setCoverContentMode:(BOOL)arg1;
- (long long)animationCurve;
- (void)setAnimationCurve:(long long)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)animationKey;
- (void)setAnimationKey:(id)arg1;
- (id)strongRefFactory;
- (void)setStrongRefFactory:(id)arg1;
- (id)snapFactory;
- (void)setSnapFactory:(id)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (id)animatingData;
- (void)setAnimatingData:(id)arg1;
- (id)tempUserInfo;
- (void)setTempUserInfo:(id)arg1;
- (id)cacheData;
- (void)setCacheData:(id)arg1;
- (id)shareData;
- (void)setShareData:(id)arg1;
- (double)centerPos;
- (void)setCenterPos:(double)arg1;
- (void).cxx_destruct;
@end

