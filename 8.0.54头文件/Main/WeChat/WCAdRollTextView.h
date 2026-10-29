@interface WCAdRollTextView : MMUIView
{
    BOOL _pauseFlag; // +0x8
    NSArray * _textList; // +0x10
    MMUILabel * _currentLabel; // +0x18
    MMUILabel * _nextLabel; // +0x20
    MMTimer * _animateTimer; // +0x28
    long long _currentIndex; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initTimer;
- (void)refreshLabelText;
- (void)rollLabel;
- (void)setViewBeforeRoll;
- (void)setViewAfterRoll;
- (void)setTextList:(id)arg1;
- (BOOL)canRoll;
- (void)tryStartRoll;
- (void)stopRoll;
- (void)setHidden:(BOOL)arg1;
- (void)initNotificationObserver;
- (void)onViewDidEnterBackground:(id)arg1;
- (void)onViewDidBecomeActive:(id)arg1;
- (id)currentLabel;
- (id)nextLabel;
- (id)textList;
- (void)setCurrentLabel:(id)arg1;
- (void)setNextLabel:(id)arg1;
- (id)animateTimer;
- (void)setAnimateTimer:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (BOOL)pauseFlag;
- (void)setPauseFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

