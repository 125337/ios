@interface WCFinderTimelineHelper : NSObject
+ (BOOL)enableShowMachineTabFromSvrConfig:(id)arg1;
+ (BOOL)enableShowRecommendTabFromSvrConfig:(id)arg1;
+ (BOOL)enableShowFollowTabFromSvrConfig:(id)arg1;
+ (BOOL)enableShowMachineTab;
+ (int)commentSceneFromTabType:(long long)arg1;
+ (long long)getTargtTabTypeWith:(id)arg1;
+ (long long)getLastTabType;
+ (BOOL)isInitNeedRedDotSwitchTabWithCtrlType:(unsigned long long)arg1;
+ (long long)filterWeChatSwitchByTargetTabType:(long long)arg1;
+ (void)retrieveLocationForFinder;
+ (id)getTabTypeBindRedDotPath:(long long)arg1;
@end
