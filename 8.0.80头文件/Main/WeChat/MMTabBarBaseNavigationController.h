@interface MMTabBarBaseNavigationController : MMUINavigationController
{
    BOOL _hasDumpIvars; // +0x8
}
- (void)viewDidLoad;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2 isForceFullScreen:(BOOL)arg3 isAutoRotatePortrait:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)navigationUniqueKey;
- (void)dumpIvars;
- (id)jsonForObject:(id)arg1 children:(id)arg2;
- (id)valueForIvar:(objc_ivar *)arg1 object:(id)arg2 encoding:(const char *)arg3;
- (BOOL)hasDumpIvars;
- (void)setHasDumpIvars:(BOOL)arg1;
@end
