@interface WCCanvasBottomSwipeComponent : WCCanvasComponent
{
    UIImageView * _swipeUpIcon; // +0x8
    UILabel * _swipeUpText; // +0x10
    UIButton * _hotZone; // +0x18
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)initViews;
- (void)initSwipeUpView;
- (void)beginSwipeUpAnimation;
- (id)generateKeyframeAnimationWithKeyPath:(id)arg1 duration:(double)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentAppearFactorChagneInMainScreen;
- (BOOL)shouldForbidDelegateShowFloatActionBtn;
- (BOOL)shouldAllowBottomSwipeAction;
- (void)didBottomSwipeActionComplete;
- (void)jumpToUrl:(id)arg1;
- (id)swipeUpIcon;
- (void)setSwipeUpIcon:(id)arg1;
- (id)swipeUpText;
- (void)setSwipeUpText:(id)arg1;
- (id)hotZone;
- (void)setHotZone:(id)arg1;
- (void).cxx_destruct;
@end

