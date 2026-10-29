@interface MsgSolitaireDB : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _database; // +0x8
    WCTTable * _analysistable; // +0x10
    WCTTable * _foldTable; // +0x18
}
- (void)onServiceInit;
- (BOOL)reloadDataBase;
- (BOOL)createAnalysisTable;
- (BOOL)addSolitaireAnalysisWithChatName:(id)arg1 LocalId:(unsigned int)arg2;
- (id)getSolitairesAnalysisWithChatName:(id)arg1;
- (BOOL)deleteSolitaireAnalysisWithObj:(id)arg1;
- (BOOL)createFoldInfoTable;
- (void)insertFoldInfo:(id)arg1;
- (id)getSolitaireFoldInfoWithChatName:(id)arg1 localId:(unsigned int)arg2 createTime:(unsigned int)arg3;
- (void)deleteFoldInfosWithChatName:(id)arg1;
- (void)deleteFoldInfosWithMsgWrap:(id)arg1;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)analysistable;
- (void)setAnalysistable:(id)arg1;
- (id)foldTable;
- (void)setFoldTable:(id)arg1;
- (void).cxx_destruct;
@end

