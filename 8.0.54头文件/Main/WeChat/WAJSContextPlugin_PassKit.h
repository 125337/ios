@interface WAJSContextPlugin_PassKit : WAJSContextPluginBase
{
    BOOL _isPAPUIOn; // +0x8
    BOOL _isPAPUIActionBlocked; // +0x9
    PKAddPassesViewController * _retainAssesViewController; // +0x10
}
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (BOOL)tryEnablePAPUI;
- (void)unablePAPUI;
- (BOOL)tryRetainWeAppAddPassViewController;
- (void)tryReleaseWeAppAddPassViewController;
- (BOOL)isPAPUIOn;
- (void)setIsPAPUIOn:(BOOL)arg1;
- (BOOL)isPAPUIActionBlocked;
- (void)setIsPAPUIActionBlocked:(BOOL)arg1;
- (id)retainAssesViewController;
- (void)setRetainAssesViewController:(id)arg1;
- (void).cxx_destruct;
@end

