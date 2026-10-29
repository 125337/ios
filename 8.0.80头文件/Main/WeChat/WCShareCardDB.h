@interface WCShareCardDB : MMObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_tableShareCardInfo; // +0x10
}
- (unsigned int)getShareCardCount;
- (unsigned int)getShareCardAvailableCount;
- (BOOL)getFirstPageNeedBatchGetWCShareCardIdList:(id)arg1;
- (BOOL)getNeedBatchGetWCShareCardIdList:(id)arg1 byMinUpdateTime:(unsigned int)arg2;
- (unsigned int)getValidShareCardCountByTpId:(id)arg1;
- (BOOL)insertOrUpdateShareCardBySyncItem:(id)arg1;
- (BOOL)insertOrUpdateShareCardData:(id)arg1;
- (BOOL)deleteWCShareCardByCardID:(id)arg1;
- (void)deleteUselessShareCard;
- (unsigned int)getNoramlShareCardCount:(id)arg1;
- (id)getWCShareCardByCardID:(id)arg1;
- (BOOL)getWCShareCardByCardTPID:(id)arg1 andShareCardList:(id)arg2;
- (BOOL)initDB;
- (BOOL)runTransaction:(id /* block */)arg1;
- (id)m_db;
- (void)setM_db:(id)arg1;
- (id)m_tableShareCardInfo;
- (void)setM_tableShareCardInfo:(id)arg1;
- (void).cxx_destruct;
@end
