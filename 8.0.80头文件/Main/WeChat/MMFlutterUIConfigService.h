@interface MMFlutterUIConfigService : MMRootService <IMMFontMgrExt, MMServiceProtocol>
- (void)onServiceInit;
- (void)dealloc;
- (void)onFontSizeChange;
- (void)pushFontScale;
@end
