@interface ContactUtils : NSObject
+ (id)getContactWithUserName:(id)arg1;
+ (BOOL)isOpenMultiSelectContactsStyleSwitch;
+ (id)getContactsSelectOpenIMContactsStr:(BOOL)arg1;
+ (void)resetCellDisableStateWithCell:(id)arg1 isEnabled:(BOOL)arg2;
+ (void)checkAccoutDeleteSessionAndContact:(id)arg1;
+ (BOOL)checkShowContactAddCreateTime;
+ (id)generateSystemMessage:(id)arg1 fromUserName:(id)arg2;
+ (BOOL)checkMsgContentLogicIsNeedCached;
+ (BOOL)checkShareQQOptimizationSwitch;
+ (id)getDicOpenImChatRoomAddGroupMemberReprot:(id)arg1 chatRoomContact:(id)arg2 targetContact:(id)arg3;
+ (id)safeGetAllSessionArray;
+ (BOOL)checkDeleteNotRegularContactSwitch;
+ (BOOL)checkDeleteNotRegularContactNumberMoreThanThreshold;
+ (unsigned int)getDeleteNotRegularContactNumberThreshold;
+ (BOOL)checkNeedDoVerifyUserPreCheck;
+ (unsigned int)getSessionForwardRecentMaxCount;
+ (unsigned int)getSessionForwardMostoftenMaxCount;
+ (unsigned int)getSessionForwardMaxCount;
+ (BOOL)getProfileRecommendOpenSwitch;
+ (unsigned int)getProfileRecommendMaxLimitedTime;
+ (unsigned int)getProfileRecommendTextMessageMinCount;
@end

