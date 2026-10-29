@interface VOIPUIHelper : NSObject
+ (BOOL)shouldBlockUserRingRecommend;
+ (BOOL)shouldSupportVideoHintShow;
+ (int)VoIPMPSwitchPortType:(id)arg1;
+ (BOOL)shouldEnableMissedVoIPRedTips;
+ (BOOL)shouldEnableMultiTalkInviteCardRevamp;
+ (BOOL)shouldEnableOpenContactProfileInVoip;
+ (void)openContactProfile:(id)arg1 roomid:(unsigned long long)arg2;
+ (void)openContactProfile:(id)arg1 roomid:(unsigned long long)arg2 chatContact:(id)arg3;
@end
