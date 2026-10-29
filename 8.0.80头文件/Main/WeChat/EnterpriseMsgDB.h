@interface EnterpriseMsgDB : MMObject
{
    WCTDatabase * _db; // +0x8
    NSMutableSet * _setCreatedTable; // +0x10
    NSRecursiveLock * _lock; // +0x18
    NSString * _path; // +0x20
}
- (id)initWithPath:(id)arg1;
- (BOOL)runTransaction:(id /* block */)arg1;
- (void)dealloc;
- (void)closeDB;
- (id)getChatTableName:(id)arg1;
- (id)getChatTable:(id)arg1;
- (BOOL)createTable:(id)arg1;
- (void)dropTable:(id)arg1;
- (void)setupCreatedTableCache;
- (BOOL)isTableCreated:(id)arg1;
- (void)addCreatedTableCache:(id)arg1;
- (void)removeCreatedTableCache:(id)arg1;
- (void)clearCreatedTableCache;
- (BOOL)addMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)GetMsg:(id)arg1 cliMsgId:(id)arg2;
- (id)GetMsg:(id)arg1 uiLocalID:(unsigned int)arg2;
- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetLastMsg:(id)arg1;
- (unsigned int)GetLastMsgCreateTime:(id)arg1;
- (id)GetFirstUnreadMsg:(id)arg1;
- (unsigned int)GetUnReadCountInChat:(id)arg1;
- (unsigned int)GetUnReadCountInChat:(id)arg1 Since:(unsigned int)arg2;
- (BOOL)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (BOOL)ClearUnReadForSync:(id)arg1;
- (BOOL)MergeImgStatus:(id)arg1 LocalID:(unsigned int)arg2 ImgStatus:(unsigned int)arg3;
- (BOOL)MergeImgStatus:(id)arg1 LocalID:(unsigned int)arg2 ImgStatus:(unsigned int)arg3 MsgStatus:(unsigned int)arg4;
- (BOOL)ModMsgStatus:(id)arg1 LocalID:(unsigned int)arg2 MsgStatus:(unsigned int)arg3;
- (BOOL)ModMsgStatus:(id)arg1 LocalId:(unsigned int)arg2 MsgStatus:(unsigned int)arg3 SvrId:(unsigned long long)arg4;
- (BOOL)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)deleteDB;
- (unsigned int)GetImgOrVideoOrAppMsgMinCreateTime:(id)arg1;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)internalGetMsgDBItem:(id)arg1 uiLocalID:(unsigned int)arg2;
- (void)clearFileOfMsg:(id)arg1;
- (void).cxx_destruct;
@end
