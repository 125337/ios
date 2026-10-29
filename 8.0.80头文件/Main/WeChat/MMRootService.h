@interface MMRootService : MMBaseService
+ (id)sharedInstance;
+ (BOOL)canUseInSafemode;
- (BOOL)returnAsRawService;
@end
