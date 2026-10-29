@interface AdPushMsgDBMgr : NSObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _pushMsgTable; // +0x10
}
+ (id)MagicPushMsgDBPath;
- (id)init;
- (void)initDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)getSpecificSlotMsg:(id)arg1;
- (BOOL)clearSpecificSlotMsg:(id)arg1;
- (void)insertNewPushMsg:(id)arg1;
- (void)clearOverTimeMsg;
- (void)dealloc;
- (id)db;
- (void)setDb:(id)arg1;
- (id)pushMsgTable;
- (void)setPushMsgTable:(id)arg1;
- (void).cxx_destruct;
@end

