@interface FBSDKGateKeeperManager : NSObject
+ (BOOL)boolForKey:(id)arg1 appID:(id)arg2 defaultValue:(BOOL)arg3;
+ (void)loadGateKeepers;
+ (id)requestToLoadGateKeepers:(id)arg1;
+ (void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3;
+ (BOOL)_gateKeeperTimestampIsValid:(id)arg1;
+ (BOOL)_gateKeeperIsValid;
@end
