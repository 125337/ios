@interface WxpayLiteAppGateDecision : NSObject
+ (id)md5HexOfTrimmedAppId:(id)arg1;
+ (id)grayOverrideInTable:(id)arg1 forAppId:(id)arg2;
+ (id)verdict:(BOOL)arg1 reason:(id)arg2;
+ (id)chooseEngine:(id)arg1;
+ (id)decide:(id)arg1;
+ (id)decideWithEntryGray:(id)arg1 entryGray:(id)arg2;
+ (id)kitVerdictForInput:(id)arg1 reason:(id)arg2;
+ (BOOL)isGrayLegacyReason:(id)arg1;
+ (BOOL)isKitAvailableForRuntimeState:(long long)arg1;
+ (BOOL)legacySendsPackageBatchWithKitAvailable:(BOOL)arg1 packageBatchOwner:(id)arg2;
+ (id)failureStageForStatusCode:(id)arg1 created:(BOOL)arg2;
+ (id)outcomeForGateUseKit:(BOOL)arg1 recheckCanOpenKit:(BOOL)arg2 created:(BOOL)arg3 statusCode:(id)arg4;
+ (BOOL)routeStoreDispatchResult:(id)arg1 handler:(id /* block */)arg2 replyNull:(id /* block */)arg3;
+ (id)childSceneLaunchOptionsForOpenLiteApp:(id)arg1 parentAppId:(id)arg2 parentAppUuid:(unsigned long long)arg3 parentPageId:(unsigned long long)arg4;
@end
