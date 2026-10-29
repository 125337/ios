@interface WCAdDB : NSObject
{
    WCTDatabase * _adDB; // +0x8
    WCTTable * _pullRecordTable; // +0x10
}
- (void)savePullRecordInfo:(id)arg1 sessionKey:(id)arg2 isAsync:(BOOL)arg3;
- (void)setPullRecordInvalid:(id)arg1 isAsync:(BOOL)arg2 snsId:(id)arg3;
- (id)fetchPullRecordList:(unsigned int)arg1;
- (void)cleanPullRecordInfo;
- (id)init;
- (void)dealloc;
- (void)initDB;
- (void)createTables;
- (void)createPullRecordTable;
- (id)getWCDBPath;
- (id)adDB;
- (void)setAdDB:(id)arg1;
- (id)pullRecordTable;
- (void)setPullRecordTable:(id)arg1;
- (void).cxx_destruct;
@end
