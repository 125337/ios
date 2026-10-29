@interface GameAddSubViewHookConfig : NSObject
{
    BOOL _enableHook; // +0x8
    NSString * _hookClsName; // +0x10
    double _delaySeconds; // +0x18
    double _top; // +0x20
    UIView * _shadowView; // +0x28
    CADisplayLink * _displayLink; // +0x30
}
+ (id)sharedInstance;
- (id)hookClsName;
- (void)setHookClsName:(id)arg1;
- (double)delaySeconds;
- (void)setDelaySeconds:(double)arg1;
- (double)top;
- (void)setTop:(double)arg1;
- (BOOL)enableHook;
- (void)setEnableHook:(BOOL)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end
