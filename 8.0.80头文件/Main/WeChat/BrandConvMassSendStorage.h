@interface BrandConvMassSendStorage : NSObject
{
    unsigned int _recordStartTime; // +0x8
    WCTDatabase * _db; // +0x10
    WCTTable * _configTable; // +0x18
}
- (void)openDB;
- (void)closeDB;
- (id)getMsgLocalIds:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 toCreateTime:(unsigned int)arg4 hideMassSendTypes:(id)arg5 hidePreview:(BOOL)arg6 limit:(int)arg7 leftCount:(unsigned int *)arg8;
- (id)getMsg:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 toCreateTime:(unsigned int)arg4 hideMassSendTypes:(id)arg5 hidePreview:(BOOL)arg6 limit:(int)arg7 leftCount:(unsigned int *)arg8;
- (id)getFirstMsgInfo:(id)arg1 fromCreateTime:(unsigned int)arg2;
- (id)getDownMsgLocalIds:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 hideMassSendTypes:(id)arg4 hidePreview:(BOOL)arg5 limit:(int)arg6 leftCount:(unsigned int *)arg7;
- (id)getDownMsg:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 hideMassSendTypes:(id)arg4 hidePreview:(BOOL)arg5 limit:(int)arg6 leftCount:(unsigned int *)arg7;
- (BOOL)addMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)delMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)delAllMsg:(id)arg1;
- (id)dbPath;
- (id)tableName:(id)arg1;
- (BOOL)createTable:(id)arg1;
- (id)getTable:(id)arg1;
- (const void *)orderOfDescCreateTimeAndMsgLocalId;
- (const void *)orderOfAscCreateTimeAndMsgLocalId;
- (id)previewSceneTypes;
- (id)getMsg:(id)arg1 where:(const void *)arg2 order:(const void *)arg3 limit:(int)arg4;
- (void)sortListAscending:(id)arg1;
- (void)filterMsgList:(id)arg1 LeftCount:(unsigned int *)arg2;
- (void)filterDownMsgList:(id)arg1 limit:(int)arg2 leftCount:(unsigned int *)arg3;
- (void)createTables;
- (void)queryOrMarkRecordStartTime;
- (unsigned int)recordStartTime;
- (void)setRecordStartTime:(unsigned int)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)configTable;
- (void)setConfigTable:(id)arg1;
- (void).cxx_destruct;
@end
