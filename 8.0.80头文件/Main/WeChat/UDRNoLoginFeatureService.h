@interface UDRNoLoginFeatureService : MMRootService <MMServiceProtocol, IUdrNoLoginResourceFeature>
+ (id)sharedInstance;
- (void)onServiceInit;
- (void)dealloc;
- (void)checkNoLogin:(id)arg1 callback:(id)arg2;
@end
