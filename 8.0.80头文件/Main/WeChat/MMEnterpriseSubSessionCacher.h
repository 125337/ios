@interface MMEnterpriseSubSessionCacher : NSObject <ISessionStorageDelegate>
{
    MMEnterpriseMainUsrData * _mainUsrData; // +0x8
    NSString * _mainUsrName; // +0x10
    NSString * _sessionType; // +0x18
    MMBaseSessionStorage * _sessionStorage; // +0x20
    NSMutableDictionary * _dictUsrname2CellData; // +0x28
    BOOL _showRedDot; // +0x30
}
+ (long long)compareEnterpriseSubSession:(id)arg1 right:(id)arg2;
- (id)initWithMainUsrName:(id)arg1;
- (id)getMainUsrDataPath;
- (void)loadMainUsrData;
- (void)saveMainUsrData;
- (void)deleteMainUsrData;
- (void)clearMainUsrUnreadCount;
- (unsigned int)getMainUsrUnreadCount;
- (unsigned int)getNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)setNewArrivalCount:(unsigned int)arg1 withSubSessionUsrName:(id)arg2;
- (void)deleteNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)clearNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (BOOL)hasNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)setMainUsrShowRedDot;
- (BOOL)getMainUsrShowRedDot;
- (void)clearMainUsrRedDot;
- (unsigned int)sessionCount;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (id)sessionInfoList;
- (void)addOrUpdateSessionInfo:(id)arg1;
- (void)addOrUpdateSessionList:(id)arg1;
- (void)deleteSessionAtIndex:(long long)arg1;
- (void)deleteSessionWithUsrName:(id)arg1;
- (void)deleteAllSessions;
- (void)clearSessionCache;
- (id)importSessions;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (void)deleteOldVersionSessionCache;
- (id)getPathForOldSessionCache;
- (void)performCleanUpNoMsgSessions:(id)arg1;
- (void)checkSessionInfo:(id)arg1;
- (id)mainUsrName;
- (void).cxx_destruct;
@end
