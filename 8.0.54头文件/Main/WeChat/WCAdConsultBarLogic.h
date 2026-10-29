@interface WCAdConsultBarLogic : WCAdvertiseOperationLogicBase
{
    BOOL _isFirstAnimation; // +0x8
    long long _currentIndex; // +0x10
    WCAdConsultBarView * _barView; // +0x18
    NSString * _tid; // +0x20
    MMTimer * _animateTimer; // +0x28
    WCAdConsultBarCarouselInfo * _barCarouselInfo; // +0x30
}
+ (id)getConsultLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)startTimerIfNeed;
- (void)timerFired;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)barView;
- (void)setBarView:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)animateTimer;
- (void)setAnimateTimer:(id)arg1;
- (id)barCarouselInfo;
- (void)setBarCarouselInfo:(id)arg1;
- (BOOL)isFirstAnimation;
- (void)setIsFirstAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end

