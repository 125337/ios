@interface MsgRedTipsMgr : MMUserService <ISessionInfoExt, INewSyncExt, BaseMsgViewControllerExt, MMServiceProtocol, IMsgExt, IMMNewSessionMgrExt>
{
    BOOL _isMultiRedTipsEnable; // +0x8
    BOOL _isVoiceWeakTipsEnable; // +0x9
    BOOL _shouldNotifyRemoveItem; // +0xa
    long long _outdateDuration; // +0x10
    NSMutableSet * _checkOutdateUsernames; // +0x18
    WCTDatabase * _database; // +0x20
}
- (void)handleRedTipsOnAddMsg:(id)arg1;
- (void)handleRedTipsOnModMsg:(id)arg1;
- (void)addMissedVoIPRedTipsWithMsg:(id)arg1;
- (void)handleMissedVoIPRedTipsWithMsg:(id)arg1 roomId:(unsigned long long)arg2;
- (id)missedVoIPReportParamsWithMsg:(id)arg1 roomId:(unsigned long long)arg2;
- (BOOL)isPayMessage:(id)arg1;
- (void)migrateRedTipsFromSession:(id)arg1;
- (long long)getRedTipsTypeFromSession:(id)arg1;
- (void)addRedTips:(id)arg1 type:(long long)arg2 rule:(long long)arg3;
- (void)onModifyDraft:(id)arg1 contact:(id)arg2 draftTime:(unsigned int)arg3;
- (void)onServiceInit;
- (void)initDB;
- (id)tableForUsername:(id)arg1;
- (BOOL)tableExist:(id)arg1;
- (id)tableName:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)onWillDeleteAllSession;
- (void)onNewSyncClearUnread:(id)arg1;
- (void)onExitBaseMsgSession:(id)arg1;
- (id)itemWithMessage:(id)arg1 type:(long long)arg2;
- (void)addRedTipsItemWithMsg:(id)arg1 type:(long long)arg2;
- (void)addRedTipsItem:(id)arg1;
- (BOOL)removeMsgRedTips:(id)arg1 msgLocalId:(unsigned int)arg2;
- (BOOL)removeMsgRedTips:(id)arg1 msgLocalId:(unsigned int)arg2 rule:(long long)arg3;
- (BOOL)removeMsgRedTips:(id)arg1 rule:(long long)arg2;
- (BOOL)removeMsgRedTips:(id)arg1 rules:(id)arg2;
- (BOOL)removeMsgRedTips:(id)arg1 rules:(id)arg2 beforeMsgTime:(unsigned int)arg3;
- (BOOL)removeMsgRedTips:(id)arg1 type:(long long)arg2;
- (void)clearInvalidRedTips:(id)arg1;
- (void)clearInvalidRedTips:(id)arg1 notify:(BOOL)arg2;
- (void)clearSessionRedTips:(id)arg1;
- (id)getRedTipItemsForMessage:(id)arg1;
- (id)getRedTipItemsFrom:(id)arg1 condition:(Expression)arg2;
- (id)getRedTipItemsFrom:(id)arg1;
- (id)getUniqueRedTipItemsFrom:(id)arg1 limit:(long long)arg2;
- (BOOL)isMultiRedTipsEnable;
- (void)setIsMultiRedTipsEnable:(BOOL)arg1;
- (BOOL)isVoiceWeakTipsEnable;
- (void)setIsVoiceWeakTipsEnable:(BOOL)arg1;
- (long long)outdateDuration;
- (void)setOutdateDuration:(long long)arg1;
- (id)checkOutdateUsernames;
- (void)setCheckOutdateUsernames:(id)arg1;
- (BOOL)shouldNotifyRemoveItem;
- (void)setShouldNotifyRemoveItem:(BOOL)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (void).cxx_destruct;
@end
