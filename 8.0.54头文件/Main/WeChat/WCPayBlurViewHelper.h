@interface WCPayBlurViewHelper : NSObject
{
    BOOL _isFirstResponse; // +0x8
    MMUIViewController * _controller; // +0x10
    KindaModalController * _modal; // +0x18
    UIImageView * _blurView; // +0x20
}
- (id)initWithNavigationController:(id)arg1;
- (id)initWithKindaModalController:(id)arg1;
- (void)initCommon;
- (void)dealloc;
- (BOOL)isFirstResponderInView:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (id)modal;
- (void)setModal:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (BOOL)isFirstResponse;
- (void)setIsFirstResponse:(BOOL)arg1;
- (void).cxx_destruct;
@end

