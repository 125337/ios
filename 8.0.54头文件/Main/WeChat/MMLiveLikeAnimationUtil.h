@interface MMLiveLikeAnimationUtil : NSObject <MMWebImageViewDelegate>
{
    BOOL _isShow; // +0x8
    BOOL _isShowAnimationView; // +0x9
    BOOL _isPaused; // +0xa
    BOOL _isEnterBackground; // +0xb
    BOOL _isInClapMode; // +0xc
    BOOL _isWebIconDisabled; // +0xd
    double _finalLikeViewAlpha; // +0x10
    NSString * _userName; // +0x18
    NSString * _headImgUrl; // +0x20
    NSMutableArray * _animationViewArr; // +0x28
    NSMutableArray * _animationIconArr; // +0x30
    NSMutableArray * _clapModeAnimationIconArr; // +0x38
    NSMutableArray * _webIconArr; // +0x40
    NSMutableArray * _animationRouteArr; // +0x48
    NSMutableArray * _headerAnimationRouteArr; // +0x50
    NSMutableArray * _animationRouteHistoryArray; // +0x58
    long long _businessType; // +0x60
}
+ (void)setAllow30FpsAnimation:(BOOL)arg1;
- (id)initWithBusinessType:(long long)arg1;
- (void)initData;
- (void)dealloc;
- (void)setFinalLikeViewAlpha:(double)arg1;
- (void)initNotifications;
- (void)initAnimationIcons;
- (void)resetIconsRate:(id)arg1;
- (id)getIconRandom;
- (void)addIconFromWeb:(id)arg1 rate:(float)arg2;
- (void)resetIconToOrigin;
- (BOOL)webIconHasExits:(id)arg1;
- (void)initAnimationRoutes;
- (void)initHeaderAnimationRoutes;
- (id)createLikeAnimationView;
- (id)createSelfLikeAnimationHeaderView;
- (id)createOtherLikeAnimationHeaderViewFromContact:(id)arg1;
- (id)getRandAnimationRoute;
- (id)getAnotherRoute:(id)arg1;
- (id)getRandHeaderAnimationRoute;
- (id)getSelfLiveHeaderAnimationRoute;
- (void)onLoadImageOK:(id)arg1;
- (id)animationViewArr;
- (id)animationIconArr;
- (id)webIconArr;
- (id)animationRouteArr;
- (id)animationRouteHistoryArray;
- (id)headerAnimationRouteArr;
- (id)clapModeAnimationIconArr;
- (void)startLiveLikeAnimationAtCenter:(CGPoint)arg1 inSuperView:(id)arg2;
- (void)startLiveSelfLikeHeadImageAtCenter:(CGPoint)arg1 inSuperView:(id)arg2;
- (void)startLiveLikeHeadImageAtCenter:(CGPoint)arg1 inSuperView:(id)arg2 fromContact:(id)arg3;
- (void)startLiveLikeHeadImageAnimationAtCenter:(CGPoint)arg1 InSuperView:(id)arg2 fromContact:(id)arg3;
- (void)setIsShow:(BOOL)arg1;
- (void)showAnimationView;
- (void)hideAnimationView;
- (void)continueLiveLike;
- (void)pauseLiveLike;
- (void)enterClapMode;
- (void)exitClapMode;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (double)finalLikeViewAlpha;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (void)setAnimationViewArr:(id)arg1;
- (void)setAnimationIconArr:(id)arg1;
- (void)setClapModeAnimationIconArr:(id)arg1;
- (void)setWebIconArr:(id)arg1;
- (void)setAnimationRouteArr:(id)arg1;
- (void)setHeaderAnimationRouteArr:(id)arg1;
- (BOOL)isShow;
- (BOOL)isShowAnimationView;
- (void)setIsShowAnimationView:(BOOL)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (BOOL)isEnterBackground;
- (void)setIsEnterBackground:(BOOL)arg1;
- (void)setAnimationRouteHistoryArray:(id)arg1;
- (long long)businessType;
- (void)setBusinessType:(long long)arg1;
- (BOOL)isInClapMode;
- (void)setIsInClapMode:(BOOL)arg1;
- (BOOL)isWebIconDisabled;
- (void)setIsWebIconDisabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

