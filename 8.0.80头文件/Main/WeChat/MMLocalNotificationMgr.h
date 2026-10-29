@interface MMLocalNotificationMgr : MMRootService <IMsgExt, IMsgRevokeExt, VoIPPushKitExt, MMServiceProtocol>
{
    BOOL m_isInBackground; // +0x8
    MemoryMappedKV * m_pushInfos; // +0x10
    BOOL _isCommunicationNotificationClose; // +0x18
}
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)clearPushInfos;
- (void)updateExtensionConfig;
- (BOOL)isInVoip;
- (void)OnShowPush:(id)arg1 isAlwaysShow:(BOOL)arg2;
- (BOOL)isSpecialBusinessCondition:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 pushContent:(id)arg3;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)checkNewSyncFail;
- (void)doVoipPushIDKeyReport;
- (void)doVoipDelayReport;
- (void)showPushWithMessageWrap:(id)arg1 fireDate:(id)arg2 isFromVoipPush:(BOOL)arg3;
- (void)revokePushWithMessageWrap:(id)arg1 isFromVoipPush:(BOOL)arg2;
- (void)showPushWithMessageWrap:(id)arg1 identifier:(id)arg2 fireDate:(id)arg3 isFromVoipPush:(BOOL)arg4 shouldSilent:(BOOL)arg5;
- (void)showCustomPushWithTitle:(id)arg1 body:(id)arg2 customHeadImage:(id)arg3 identifier:(id)arg4 category:(id)arg5 userInfo:(id)arg6;
- (void)_showCustomPushWithTitle:(id)arg1 body:(id)arg2 customHeadImage:(id)arg3 identifier:(id)arg4 category:(id)arg5 userInfo:(id)arg6 notificationSetting:(id)arg7;
- (id)notificationInfoForMessage:(id)arg1 withEnabledNotificationSettings:(id)arg2 isFromVoipPush:(BOOL)arg3;
- (id)messageWrapFromPushInfo:(id)arg1;
- (id)notificaitonIdentifier:(long long)arg1;
- (BOOL)isCommunicationNotificationClose;
- (void)setIsCommunicationNotificationClose:(BOOL)arg1;
- (void).cxx_destruct;
@end
