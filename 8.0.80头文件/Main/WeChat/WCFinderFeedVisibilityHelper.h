@interface WCFinderFeedVisibilityHelper : NSObject
+ (BOOL)isEnabled;
+ (unsigned int)experimentTypeForUsername:(id)arg1;
+ (BOOL)isEnabledForUsername:(id)arg1;
+ (BOOL)showsPublicPostStatusForUsername:(id)arg1;
+ (BOOL)showsPostEntryForAccountPrivacy:(unsigned long long)arg1;
+ (unsigned long long)editableOptionsForAccountPrivacy:(unsigned long long)arg1 originalMode:(unsigned long long)arg2 supportsFriendExclusion:(BOOL)arg3 username:(id)arg4;
+ (BOOL)options:(unsigned long long)arg1 containMode:(unsigned long long)arg2;
+ (BOOL)allowsStickyForMode:(unsigned long long)arg1;
+ (id)titleForMode:(unsigned long long)arg1;
@end
