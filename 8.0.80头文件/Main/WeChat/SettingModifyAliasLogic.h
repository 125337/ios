@interface SettingModifyAliasLogic : MMObject <PBMessageObserverDelegate>
{
    id <SettingModifyAliasLogicDelegate> _m_delegate; // +0x8
}
+ (void)reportSettingModifyAliasWithSessionid:(id)arg1 andModifyAliasActionCode:(unsigned int)arg2 andModifyAliasErrortype:(unsigned int)arg3;
+ (void)reportSettingModifyAliasBackOrCancelWithSessionid:(id)arg1 andModifyAliasPageScene:(unsigned int)arg2;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)checkCanSetAlias;
- (void)OnCheckCanSetAlias:(id)arg1;
- (BOOL)checkAliasValid:(id)arg1;
- (void)OnCheckAliasValid:(id)arg1;
- (BOOL)modifyAlias:(id)arg1 checkCanSetAliasTicket:(id)arg2 setAliasPwdTicket:(id)arg3 setAliasHumanFaceTicket:(id)arg4;
- (void)OnModifyAlias:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
