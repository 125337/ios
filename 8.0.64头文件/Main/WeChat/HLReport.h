@interface HLReport : NSObject
{
    BOOL _reporting; // +0x8
    BOOL _waiting; // +0x9
    NSObject<OS_dispatch_queue> * _dealQueue; // +0x10
    sqlite3 * _db; // +0x18
    long long _totolCount; // +0x20
    long long _fcount; // +0x28
    NSDate * _lastDate; // +0x30
}
+ (id)shareInstance;
+ (id)vendorID;
+ (id)displayName;
- (id)init;
- (void)asyncTouchReport;
- (void)asyncDoReport:(id)arg1 orType:(long long)arg2;
- (void)asyncDeleteAllRecords;
- (void)touchReportForce:(BOOL)arg1;
- (sqlite3 *)db;
- (long long)updateCount;
- (id)dealQueue;
- (void)setDealQueue:(id)arg1;
- (BOOL)reporting;
- (void)setReporting:(BOOL)arg1;
- (BOOL)waiting;
- (void)setWaiting:(BOOL)arg1;
- (void)setDb:(sqlite3 *)arg1;
- (long long)totolCount;
- (void)setTotolCount:(long long)arg1;
- (long long)fcount;
- (void)setFcount:(long long)arg1;
- (id)lastDate;
- (void)setLastDate:(id)arg1;
- (void).cxx_destruct;
@end
