@interface WCAdBulletScreenView : MMUIView
{
    BOOL _endureTimerScheduled; // +0x8
    WCAdBulletScreenInfo * _adBulletScreenInfo; // +0x10
    MMUIView * _bulletTextContainerView; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
    NSMutableArray * _bulletTextViews; // +0x28
    MMTimer * _logicTimer; // +0x30
    CGSize _lastLayoutSize; // +0x38
}
+ (double)calcBulletTextContainerHeightWithBulletScreenInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 adBulletScreenInfo:(id)arg2;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)bulletTextContainerView;
- (id)gradientLayer;
- (id)bulletTextViews;
- (void)startBulletAnimation;
- (void)stopBulletAnimation;
- (void)pauseBulletAnimation;
- (void)resumeBulletAnimation;
- (void)tryToScheduleEndureTimer;
- (void)scheduledTimerWithShootingTime:(double)arg1 repeats:(BOOL)arg2;
- (void)scheduleBulletShootingAnimation;
- (id)adBulletScreenInfo;
- (void)setAdBulletScreenInfo:(id)arg1;
- (void)setBulletTextContainerView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setBulletTextViews:(id)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (BOOL)endureTimerScheduled;
- (void)setEndureTimerScheduled:(BOOL)arg1;
- (id)logicTimer;
- (void)setLogicTimer:(id)arg1;
- (void).cxx_destruct;
@end
