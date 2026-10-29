@interface WxpayLaunchPresentation : NSObject
{
    BOOL _transparent; // +0x8
    BOOL _showMask; // +0x9
    unsigned int _initialTransitionDurationMs; // +0xc
    NSString * _initialTransition; // +0x10
    NSString * _initialPopTransition; // +0x18
    NSString * _referrer; // +0x20
}
- (BOOL)transparent;
- (void)setTransparent:(BOOL)arg1;
- (id)initialTransition;
- (void)setInitialTransition:(id)arg1;
- (id)initialPopTransition;
- (void)setInitialPopTransition:(id)arg1;
- (unsigned int)initialTransitionDurationMs;
- (void)setInitialTransitionDurationMs:(unsigned int)arg1;
- (BOOL)showMask;
- (void)setShowMask:(BOOL)arg1;
- (id)referrer;
- (void)setReferrer:(id)arg1;
- (void).cxx_destruct;
@end
