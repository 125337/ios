@interface MMLiveAudienceMoreFunctionManager : MMLiveMoreFunctionBaseManager
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(BOOL)arg3;
+ (id)getMoreFunctionItemsOutsideLiveRoomWithRewardSwitchInfo:(id)arg1 enableRecentWatch:(BOOL)arg2 rewardLevelInfo:(id)arg3 includeType:(unsigned long long)arg4;
+ (id)displayNicknameForSelectedAccount;
+ (BOOL)enableGloryShowSwitch;
- (id)createData:(unsigned long long)arg1;
- (id)liveTask;
- (void)reportAudienceActionSheetItems:(id)arg1;
- (void)onReportOperationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
@end
