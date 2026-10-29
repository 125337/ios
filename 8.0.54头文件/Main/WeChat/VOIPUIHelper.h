@interface VOIPUIHelper : NSObject
+ (id)FormVoipMessageWithUsrname:(id)arg1 andInviteType:(int)arg2 CallFromMyself:(BOOL)arg3 WordingType:(unsigned int)arg4 Duration:(unsigned int)arg5;
+ (id)FormVoipMessageWithUsrname:(id)arg1 andInviteType:(int)arg2 CallFromMyself:(BOOL)arg3 WordingType:(unsigned int)arg4 Duration:(unsigned int)arg5 roomID:(unsigned long long)arg6 roomKey:(long long)arg7;
+ (id)FormVoipMessageContentWithInviteType:(int)arg1 RoomId:(unsigned long long)arg2 Key:(long long)arg3 UiStatus:(int)arg4 RecvTime:(unsigned int)arg5 WordingType:(unsigned int)arg6 Duration:(unsigned int)arg7;
+ (BOOL)shouldEnableVoIPCoreAudioLogic;
+ (BOOL)shouldEnableAudioUnitLogic;
+ (BOOL)shouldBlockUserRingRecommend;
+ (BOOL)shouldSupportIlinkAddMember;
+ (BOOL)shouldSupportVideoHintShow;
+ (int)VoIPMPSwitchPortType:(id)arg1;
+ (BOOL)shouldBluetoothStartEarlier;
+ (BOOL)shouldUseNewVolumeStrategy;
@end

