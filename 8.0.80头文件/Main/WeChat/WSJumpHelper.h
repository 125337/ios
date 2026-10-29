@interface WSJumpHelper : NSObject
+ (id)safeJsonToDictionary:(id)arg1;
+ (void)jumpToSearchPage:(id)arg1 context:(id)arg2 sessionId:(id)arg3;
+ (void)jumpToSearchPage:(id)arg1 context:(id)arg2 sessionId:(id)arg3 isFromHotSearch:(BOOL)arg4;
- (id)init;
@end
