@interface MMLiveLikeAnimationUtil : NSObject <MMWebImageViewDelegate>
{
    BOOL _hideHeartIcon; // +0x8
    BOOL _isShow; // +0x9
    BOOL _isShowAnimationView; // +0xa
    BOOL _isPaused; // +0xb
    BOOL _isEnterBackground; // +0xc
    BOOL _isInClapMode; // +0xd
    BOOL _isWebIconDisabled; // +0xe
    double _finalLikeViewAlpha; // +0x10
    NSString * _userName; // +0x18
    NSString * _headImgUrl; // +0x20
    long long _currentLayoutOrientation; // +0x28
    NSMutableArray * _animationViewArr; // +0x30
    NSMutableArray * _animationIconArr; // +0x38
    NSMutableArray * _clapModeAnimationIconArr; // +0x40
    NSMutableArray * _webIconArr; // +0x48
    NSMutableArray * _animationRouteArr; // +0x50
    NSMutableArray * _headerAnimationRouteArr; // +0x58
    NSMutableArray * _doubleClickAnimationRouteArr; // +0x60
    NSMutableArray * _animationRouteHistoryArray; // +0x68
    long long _businessType; // +0x70
    unsigned long long _originAnimationIconCount; // +0x78
}
+ (void)setAllow30FpsAnimation:(BOOL)arg1;
- (id)initWithBusinessType:(long long)arg1;
- (void)initData;
- (void)dealloc;
- (void)setFinalLikeViewAlpha:(double)arg1;
- (void)initNotifications;
- (void)setHideHeartIcon:(BOOL)arg1;
- (void)setCurrentLayoutOrientation:(long long)arg1;
- (void)initAnimationIcons;
- (void)resetIconsRate:(id)arg1;
- (id)getIconRandom;
- (void)addIconFromWeb:(id)arg1 rate:(float)arg2;
- (void)resetIconToOrigin;
- (BOOL)webIconHasExits:(id)arg1;
- (void)initAnimationRoutes;
- (void)initHeaderAnimationRoutes;
- (double)headImageAnimationOffsetYForIndex:(unsigned long long)arg1;
- (void)initDoubleClickAnimationRoutes;
- (id)createLikeAnimationView;
- (id)createDoubleClickLikeAnimationView;
- (id)createSelfLikeAnimationHeaderView;
- (id)createOtherLikeAnimationHeaderViewFromContact:(id)arg1;
- (id)getRandAnimationRoute;
- (id)getAnotherRoute:(id)arg1;
- (id)getRandHeaderAnimationRoute;
- (id)getSelfLiveHeaderAnimationRoute;
- (id)getDoubleClickLikeAnimationRoute;
- (void)onLoadImageOK:(id)arg1;
- (id)animationViewArr;
- (id)animationIconArr;
- (id)webIconArr;
- (id)animationRouteArr;
- (id)animationRouteHistoryArray;
- (id)doubleClickAnimationRouteArr;
- (id)headerAnimationRouteArr;
- (id)clapModeAnimationIconArr;
- (void)startLiveLikeAnimationAtCenter:(CGPoint)arg1 inSuperView:(id)arg2;
- (void)startDoubleClickLiveLikeAnimationAtPosition:(CGPoint)arg1 inSuperView:(id)arg2;
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
- (BOOL)hideHeartIcon;
- (long long)currentLayoutOrientation;
- (void)setAnimationViewArr:(id)arg1;
- (void)setAnimationIconArr:(id)arg1;
- (void)setClapModeAnimationIconArr:(id)arg1;
- (void)setWebIconArr:(id)arg1;
- (void)setAnimationRouteArr:(id)arg1;
- (void)setHeaderAnimationRouteArr:(id)arg1;
- (void)setDoubleClickAnimationRouteArr:(id)arg1;
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
- (unsigned long long)originAnimationIconCount;
- (void)setOriginAnimationIconCount:(unsigned long long)arg1;
- (BOOL)isInClapMode;
- (void)setIsInClapMode:(BOOL)arg1;
- (BOOL)isWebIconDisabled;
- (void)setIsWebIconDisabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
