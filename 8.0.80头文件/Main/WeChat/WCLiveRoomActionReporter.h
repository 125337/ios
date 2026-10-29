@interface WCLiveRoomActionReporter : NSObject
+ (void)reportConnectMicLikeActionWithLiveTaskId:(id)arg1 type:(unsigned long long)arg2 element:(unsigned long long)arg3 finderUserName:(id)arg4 micId:(id)arg5 likeCount:(unsigned long long)arg6;
+ (void)reportConnectMicHeatValueViewActionWithLiveTaskId:(id)arg1 type:(unsigned long long)arg2;
+ (void)reportFollowAudienceButtonActionWithLiveTaskId:(id)arg1 type:(unsigned long long)arg2 finderUserName:(id)arg3 micId:(id)arg4;
+ (void)reportFollowAudienceButtonActionWithLiveTaskId:(id)arg1 type:(unsigned long long)arg2 finderUserName:(id)arg3 micId:(id)arg4 source:(long long)arg5;
+ (void)reportIdentityCardExposeWithLiveTaskId:(id)arg1 userType:(long long)arg2 source:(long long)arg3 identity:(long long)arg4 displayType:(long long)arg5 showFinderProfile:(long long)arg6;
+ (void)reportIdentityCardProfileModuleWithLiveTaskId:(id)arg1 profilePos:(unsigned long long)arg2 userType:(long long)arg3 type:(unsigned long long)arg4 source:(long long)arg5 identity:(long long)arg6 displayType:(long long)arg7;
+ (void)reportIdentityCardElementWithLiveTaskId:(id)arg1 userType:(long long)arg2 element:(unsigned long long)arg3 type:(unsigned long long)arg4 source:(long long)arg5 identity:(long long)arg6 displayType:(long long)arg7;
+ (id)getConnectMicLikeModelInfoDictWithLiveTask:(id)arg1;
+ (long long)getMicPosStyleWithLiveTask:(id)arg1;
+ (long long)getBattleModeWithLiveTask:(id)arg1;
+ (void)reportMicInviteButtonActionWithLiveTaskId:(id)arg1 anchorType:(long long)arg2 audienceType:(long long)arg3 source:(long long)arg4 currentNum:(unsigned long long)arg5;
+ (id)finderLiveTaskForTaskId:(id)arg1;
@end
