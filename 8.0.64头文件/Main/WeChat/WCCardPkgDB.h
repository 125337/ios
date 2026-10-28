@interface WCCardPkgDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_tableCardInfo; // +0x10
    WCTTable * m_tableMsgCenter; // +0x18
    WCTTable * m_tableOfflineCode; // +0x20
    WCTTable * m_tableOfflineCodeInfo; // +0x28
}
- (BOOL)insertOrUpdateCodeConfigItem:(id)arg1;
- (id)getQrCodeConfigByCardId:(id)arg1;
- (BOOL)deleteAllCodeConfig;
- (BOOL)insertOrUpdateOfflineCodeItem:(id)arg1;
- (id)getShowingQrcodeByCardId:(id)arg1;
- (id)getQrCodeByCardId:(id)arg1;
- (id)getUnShowQrCodesByCardId:(id)arg1;
- (BOOL)updateCodeStatus:(id)arg1;
- (BOOL)deleteCodeByQrCardIdAndCodeId:(id)arg1 qrCodeId:(id)arg2;
- (BOOL)deleteShowingCodeByCardId:(id)arg1;
- (BOOL)deleteCodesByCardId:(id)arg1;
- (unsigned int)getUnshowCodeCountByCardId:(id)arg1;
- (unsigned int)getMessageCount;
- (unsigned int)getUnreadMessageCount;
- (id)getUnreadMsgList;
- (id)getFirstPageMsgList;
- (id)getNextPageMsgListByCurMinUpdateTime:(unsigned int)arg1 HasSmaller:(BOOL *)arg2;
- (BOOL)deleteWCCardMsgByLocalMsgID:(unsigned int)arg1;
- (unsigned int)insertWCCardPkgMsg:(id)arg1 XML:(id)arg2;
- (id)getLastMsg;
- (BOOL)setAllMsgRead;
- (BOOL)cleanAllMsg;
- (BOOL)setConsumedMsgRead:(id)arg1;
- (BOOL)insertOrUpdateWCCardByAddCardItem:(id)arg1;
- (BOOL)insertOrUpdateWCCard:(id)arg1;
- (BOOL)deleteWCCardByCardID:(id)arg1;
- (BOOL)deleteWCCardByLocalCardID:(unsigned int)arg1;
- (BOOL)getFirstPageWCCardList:(id)arg1;
- (BOOL)getNextPageWCCardList:(id)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (BOOL)getFirstPageNeedBatchGetWCCardIdInfoList:(id)arg1;
- (BOOL)getNextPageNeedBatchGetWCCardIdInfoList:(id)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (BOOL)getNeedBatchGetWCCardIdInfoList:(id)arg1 byMinUpdateTime:(unsigned int)arg2;
- (unsigned int)getWCCardCount;
- (unsigned int)getAvailableWCCardCount;
- (id)getAllAvailableCards;
- (unsigned int)getDynamicCardCount;
- (id)getDynamicCards;
- (id)getWCCardByCardID:(id)arg1;
- (id)getAllWCCard;
- (void)updateStateFlagWithLoacalId:(id)arg1;
- (void)reloadDataBase;
- (BOOL)initDB;
- (BOOL)runTransaction:(id /* block */)arg1;
- (void)FixDatabaseBug;
- (void)CloseDB;
- (id)pathForDatabaseVersion;
- (unsigned int)getDatabaseVersion;
- (void)saveDatabaseVersion:(unsigned int)arg1;
- (void)fixBugForStateFlagInCardInfoTable;
- (id)m_db;
- (void)setM_db:(id)arg1;
- (id)m_tableCardInfo;
- (void)setM_tableCardInfo:(id)arg1;
- (id)m_tableMsgCenter;
- (void)setM_tableMsgCenter:(id)arg1;
- (id)m_tableOfflineCode;
- (void)setM_tableOfflineCode:(id)arg1;
- (id)m_tableOfflineCodeInfo;
- (void)setM_tableOfflineCodeInfo:(id)arg1;
- (void).cxx_destruct;
@end
