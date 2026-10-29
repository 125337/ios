@interface GroupNoticeDB : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _table; // +0x10
    WCTTable * _revokeMsgTable; // +0x18
}
- (id)init;
- (id)createTable:(Class)arg1;
- (void)addRelationWithSourceId:(id)arg1 msgLocalId:(unsigned int)arg2 userName:(id)arg3;
- (unsigned int)getMsgLocalIdWithSourceId:(id)arg1;
- (void)removeRelationWithSourceId:(id)arg1;
- (void)removeRelationWithUserName:(id)arg1;
- (id)getRevokeMsgByAnnouncementId:(id)arg1;
- (id)getRevokeMsgBySourceId:(id)arg1;
- (BOOL)insertRevokeMessage:(id)arg1;
- (BOOL)removeOldRevokeMessagesBefore:(unsigned int)arg1;
- (id)getDBPath;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (id)revokeMsgTable;
- (void)setRevokeMsgTable:(id)arg1;
- (void).cxx_destruct;
@end

