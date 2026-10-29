@interface WCFinderLikeCenterAnimationConfig : NSObject
{
    BOOL _isForceDisableHeartLikeAction; // +0x8
    BOOL _hideTipsLabelIfNotEasterEgg; // +0x9
    int _scene; // +0xc
    id /* block */ _getPlayVideoTotalTimeAction; // +0x10
    id /* block */ _getDisplayCenterAction; // +0x18
    id /* block */ _animationCompletion; // +0x20
}
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)isForceDisableHeartLikeAction;
- (void)setIsForceDisableHeartLikeAction:(BOOL)arg1;
- (BOOL)hideTipsLabelIfNotEasterEgg;
- (void)setHideTipsLabelIfNotEasterEgg:(BOOL)arg1;
- (id /* block */)getPlayVideoTotalTimeAction;
- (void)setGetPlayVideoTotalTimeAction:(id /* block */)arg1;
- (id /* block */)getDisplayCenterAction;
- (void)setGetDisplayCenterAction:(id /* block */)arg1;
- (id /* block */)animationCompletion;
- (void)setAnimationCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
