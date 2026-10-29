@interface LiteAppModule : NSObject
{
    LiteAppDynamicModuleCallback * _callback; // +0x8
    UIViewController * _viewController; // +0x10
}
- (id)appId;
- (unsigned int)appUuid;
- (unsigned long long)pageId;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
