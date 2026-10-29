@interface WCFinderFeedVisibilityProtoHelper : NSObject
+ (id)postSettingForVisibility:(id)arg1;
+ (id)objectInfoForVisibility:(id)arg1;
+ (unsigned long long)modeForDataItem:(id)arg1;
+ (void)applyVisibility:(id)arg1 toPendingDataItem:(id)arg2;
+ (id)visibilityForMode:(unsigned long long)arg1 friendInvisibleInfo:(id)arg2;
+ (BOOL)supportsFriendExclusionForDataItem:(id)arg1;
@end
