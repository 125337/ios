@interface WCFinderFlutterManager : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (id)init;
- (void)preloadFlutterEngine;
- (id)createFlutterInstance;
- (id)createFlutterInstance:(id)arg1;
- (id)createFlutterInstance:(id)arg1 moduleName:(id)arg2 plugins:(id)arg3 arguments:(id)arg4;
- (id)createFlutterViewControllerWithTag:(id)arg1;
- (id)createFlutterViewControllerWithTag:(id)arg1 plugins:(id)arg2 arguments:(id)arg3;
- (id)createFlutterViewControllerWithTag:(id)arg1 moduleName:(id)arg2 plugins:(id)arg3 arguments:(id)arg4;
- (id)createFlutterWeUIDemoViewController;
- (id)createNPSFlutterVC:(id)arg1;
- (id)createTingEntryFlutterVC:(id)arg1;
@end
