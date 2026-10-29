@interface WXGRoamUtility : NSObject
+ (BOOL)shouldNeedFullDiff;
+ (void)setRecoverTimeWithUsernames:(id)arg1 recoverTime:(unsigned long long)arg2;
+ (id)getRecoverInfo;
+ (void)setNeedFullDiff;
+ (void)resetNeedFullDiff;
+ (id)fullDiffStateKey;
+ (id)getRelatedMemoryKV;
- (void)triggerLocalNetworkAlert;
- (void)triggerLocalNetworkAlertSync;
@end
