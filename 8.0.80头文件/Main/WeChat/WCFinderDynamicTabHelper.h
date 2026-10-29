@interface WCFinderDynamicTabHelper : NSObject
+ (id)sanitizedTabName:(id)arg1;
+ (id)activeSceneRefCounts;
+ (id)currentTabInfos;
+ (id)validTabInfosFromConfig:(id)arg1;
+ (BOOL)isDynamicTabEnabled;
+ (int)primaryCommentScene;
+ (BOOL)isDynamicFriendScene:(int)arg1;
+ (void)registerActiveScene:(int)arg1;
+ (void)unregisterActiveScene:(int)arg1;
@end
