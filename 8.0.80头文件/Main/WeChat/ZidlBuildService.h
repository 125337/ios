@interface ZidlBuildService : MMRootService <MMServiceProtocol>
- (void)buildZidl;
- (void)onServiceInit;
- (void)onServiceTerminate;
@end
