@interface PromotionQuotaManager : NSObject
{
    NSObject<OS_dispatch_queue> * m_writeQueue; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)isSupportedAppType:(long long)arg1;
- (id)currentUserId;
- (id)kvKeyForAppType:(long long)arg1 userId:(id)arg2;
- (id)logNameForAppType:(long long)arg1;
- (id)loadStateForKey:(id)arg1;
- (void)saveState:(id)arg1 forKey:(id)arg2;
- (void)removeStateForKey:(id)arg1;
- (BOOL)getBoolValue:(BOOL *)arg1 fromObject:(id)arg2;
- (id)campaignIdFromCampaign:(id)arg1;
- (id)durationFromCampaign:(id)arg1;
- (id)mutableArrayFromState:(id)arg1 key:(id)arg2;
- (long long)kitchenMockShiftSecondsForMode:(long long)arg1;
- (int)clampServerTimeWithBase:(int)arg1 delta:(long long)arg2;
- (int)getServerTime;
- (BOOL)isPromotionEntryWellFormed:(id)arg1;
- (void)logInvalidPromotionEntry:(id)arg1 appType:(long long)arg2 scene:(id)arg3;
- (long long)firstUnexposedIndexInQueue:(id)arg1 appType:(long long)arg2 now:(int)arg3;
- (BOOL)activateFirstUnexposedSegmentInQueue:(id)arg1 atTime:(int)arg2 appType:(long long)arg3;
- (BOOL)isExpiredWithActivatedAt:(int)arg1 cumulativeDuration:(int)arg2 now:(int)arg3;
- (BOOL)isActiveWithActivatedAt:(int)arg1 cumulativeDuration:(int)arg2 now:(int)arg3;
- (id)entryWithCampaignId:(id)arg1 duration:(id)arg2 activatedAt:(id)arg3 expired:(BOOL)arg4;
- (BOOL)isLastSegmentExpiredInQueue:(id)arg1 now:(int)arg2;
- (id)activatedAtForNewCampaignAfterQueue:(id)arg1 now:(int)arg2;
- (id)queueByRecalculatingExpired:(id)arg1 appType:(long long)arg2;
- (BOOL)canShowInQueue:(id)arg1 appType:(long long)arg2 matchedCampaignId:(id *)arg3;
- (id)campaignQueueFromCampaigns:(id)arg1 appType:(long long)arg2;
- (id)ingestCampaigns:(id)arg1 onState:(id)arg2 appType:(long long)arg3;
- (void)updatePromotionConfig:(long long)arg1 configJson:(id)arg2;
- (BOOL)canShowPromotionEntry:(long long)arg1;
- (void)markExposed:(long long)arg1;
- (void).cxx_destruct;
@end
