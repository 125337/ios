@interface VOIPUIHelper : NSObject
+ (id)FormVoipMessageContentWithInviteType:(int)arg1 RoomId:(unsigned long long)arg2 Key:(long long)arg3 UiStatus:(int)arg4 RecvTime:(unsigned int)arg5 WordingType:(unsigned int)arg6 Duration:(unsigned int)arg7;
+ (BOOL)shouldEnableVoIPCoreAudioLogic;
+ (BOOL)shouldEnableAudioUnitLogic;
+ (BOOL)shouldBlockUserRingRecommend;
+ (BOOL)shouldSupportIlinkAddMember;
+ (BOOL)shouldSupportVideoHintShow;
+ (int)VoIPMPSwitchPortType:(id)arg1;
+ (BOOL)shouldVideoLCKAutoAccept;
+ (BOOL)shouldReconfirmInvite;
@end
