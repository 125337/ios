@interface UserManagerImpl : NSObject <UserManagerBase>
+ (id)sharedInstance;
- (void)setCallback:(id)arg1;
- (id)getCurrentUser;
@end
