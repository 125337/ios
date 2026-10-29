@interface DelaySwitchSettingLogic : MMObject
{
    BOOL m_bNeedToSync; // +0x8
    NotificationBannerDisplayContentSettingOplog * _quickReplyOplog; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)enterBackground;
- (void)commitAllSwitchSetting;
- (void)chatProfileSwitchSetting:(id)arg1 withType:(unsigned long long)arg2 andValue:(BOOL)arg3;
- (void)contactProfileSwitchSetting:(id)arg1 withType:(unsigned long long)arg2 andValue:(BOOL)arg3;
- (void)individualPrivacySwitchSetting:(unsigned long long)arg1 andValue:(BOOL)arg2;
- (void)messageNotifycationSwitchSetting:(unsigned long long)arg1 andValue:(BOOL)arg2;
- (void)pluginSwitchSetting:(unsigned long long)arg1 andValue:(BOOL)arg2;
- (void)processChatProfileSetting:(id)arg1 withType:(int)arg2 andValue:(BOOL)arg3;
- (void)processContactProfileSetting:(id)arg1 withType:(int)arg2 andValue:(BOOL)arg3;
- (void)processIndividualPrivacySetting:(id)arg1 withType:(int)arg2 andValue:(BOOL)arg3;
- (void)processMessageNotifycationSetting:(id)arg1 withType:(int)arg2 andValue:(BOOL)arg3;
- (void)processPluginSetting:(id)arg1 withType:(int)arg2 andValue:(BOOL)arg3;
- (void)setWCPayTransferDelaySwitch:(unsigned long long)arg1;
- (void)setWCPaySettingDelaySwitch:(unsigned long long)arg1 clearBitMask:(unsigned long long)arg2;
- (void)discoverEntranceSwitchSetting:(unsigned long long)arg1 andValue:(BOOL)arg2;
- (void)discoverEntrancePluginSwitchSetting:(unsigned long long)arg1 andValue:(BOOL)arg2;
- (void)setExtStatusSwitchInvertedAtServerWithFunctionId:(unsigned int)arg1 statusBit:(unsigned long long)arg2 andSetClose:(BOOL)arg3;
- (void)setExtStatus2SwitchInvertedAtServerWithFunctionId:(unsigned int)arg1 statusBit:(unsigned long long)arg2 andSetOpen:(BOOL)arg3;
- (void)CreateSettingEventType:(unsigned int)arg1 andValue:(BOOL)arg2 andBitset:(unsigned int)arg3;
- (void)CreateSettingExtStautsEventType:(unsigned int)arg1 andValue:(BOOL)arg2 andBitset:(unsigned long long)arg3;
- (void)setDiscoverEtranceSettingFlagMask:(unsigned long long)arg1 setOpen:(BOOL)arg2;
- (void)setQuickReplySwitchOn:(BOOL)arg1;
- (void)setQuickReplyContentSetting:(unsigned int)arg1;
- (void)saveQuickReplyLocalChange;
- (void)commitQuickReplySettingChange;
- (id)quickReplyOplog;
- (void)setQuickReplyOplog:(id)arg1;
- (void).cxx_destruct;
@end

