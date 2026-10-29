@interface EcsAliasProfileFlutterPlugin : NSObject <IEcsAliasProfileExt, MMFlutterPlugin, EcsAliasProfileHostApi>
{
    BOOL _detached; // +0x8
    UIViewController * _viewController; // +0x10
    EcsAliasProfileFlutterApi * _flutterApi; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)dealloc;
- (void)getCurrentAliasProfileWithCompletion:(id /* block */)arg1;
- (void)refreshCurrentAliasProfileWithCompletion:(id /* block */)arg1;
- (void)modifyCurrentAliasProfileTarget:(id)arg1 completion:(id /* block */)arg2;
- (void)addNewAliasProfileAppId:(id)arg1 completion:(id /* block */)arg2;
- (void)onEcsAliasProfileChanged:(id)arg1 seq:(long long)arg2;
- (id)msgFromInfo:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (BOOL)detached;
- (void)setDetached:(BOOL)arg1;
- (void).cxx_destruct;
@end
