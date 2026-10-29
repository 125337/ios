@interface TemplateMsgFoldMgr : MMUserService <MMServiceProtocol, IMsgExt, IExptServiceExt>
{
    BOOL _hasInit; // +0x8
    BOOL _isFoldExptEnable; // +0x9
    unsigned int _enterPageTime; // +0xc
    unsigned int _lastUnreadMsgLocalId; // +0x10
    WCTDatabase * _database; // +0x18
    WCTTable * _table; // +0x20
}
- (BOOL)shouldOpenTemplateMsgHolderFoldSwitch;
- (id)createTable;
- (id)getDBPath;
- (void)addRowWithMsgLocalId:(unsigned int)arg1 foldedMsgLocalId:(unsigned int)arg2 foldMsgLocalIds:(id)arg3 foldMsgUniqueIds:(id)arg4 foldTitles:(id)arg5;
- (void)addRowWithMsgLocalId:(unsigned int)arg1 foldedMsgLocalId:(unsigned int)arg2 foldMsgLocalIds:(id)arg3 foldMsgUniqueIds:(id)arg4 foldTitles:(id)arg5 clusterId:(id)arg6;
- (void)addOrUpdateRowWithMsgLocalId:(unsigned int)arg1 foldedMsgLocalId:(unsigned int)arg2 foldMsgLocalIds:(id)arg3 foldMsgUniqueIds:(id)arg4 foldTitles:(id)arg5 clusterId:(id)arg6;
- (void)removeRowWithMsgLocalId:(unsigned int)arg1;
- (id)msgDataWithMsgLocalId:(unsigned int)arg1;
- (void)removeAllFoldMsgs;
- (id)getFoldMsgTablesWithFromID:(unsigned int)arg1 limit:(int)arg2 isEarlier:(BOOL)arg3;
- (unsigned int)getFoldCountWithMsgLocalId:(unsigned int)arg1;
- (id)tableNameString;
- (id)database;
- (id)table;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (BOOL)isTemplateUserName:(id)arg1;
- (void)onExptItemListChange;
- (void)setupReportParams:(unsigned int)arg1;
- (void)reportTemplateFoldMsg:(id)arg1 reportItem:(id)arg2;
- (void)reportTemplateFoldMsg:(id)arg1 reportItem:(id)arg2 objectType:(long long)arg3;
- (id)reportUserNameFromTemlateMessageWrap:(id)arg1;
- (id)templateIdFromTemlateMessageWrap:(id)arg1;
- (id)msgContentFromTemlateMessageWrap:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setTable:(id)arg1;
- (BOOL)hasInit;
- (void)setHasInit:(BOOL)arg1;
- (BOOL)isFoldExptEnable;
- (void)setIsFoldExptEnable:(BOOL)arg1;
- (unsigned int)enterPageTime;
- (void)setEnterPageTime:(unsigned int)arg1;
- (unsigned int)lastUnreadMsgLocalId;
- (void)setLastUnreadMsgLocalId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
