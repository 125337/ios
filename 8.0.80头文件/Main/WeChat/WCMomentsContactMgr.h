@interface WCMomentsContactMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _usernameUpdateTimeDictionary; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)contactDisplayNameWithDataItem:(id)arg1;
- (id)contactDisplayNameWithComment:(id)arg1;
- (id)contactWithUsername:(id)arg1;
- (id)_contactDisplayName:(id)arg1;
- (void)_updateContact:(id)arg1;
- (void)_updateNormalContact:(id)arg1;
- (BOOL)_canUpdateNormalContact:(id)arg1;
- (void)_updateStrangerContact:(id)arg1;
- (void)_updateStrangerContactWithUsername:(id)arg1;
- (BOOL)_canUpdateStrangerUsername:(id)arg1;
- (BOOL)_isInUpdateInterval:(id)arg1 limitDuration:(double)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (id)usernameUpdateTimeDictionary;
- (void)setUsernameUpdateTimeDictionary:(id)arg1;
- (void).cxx_destruct;
@end
