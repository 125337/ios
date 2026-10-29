@interface WCFinderMsgSessionStatusStorage : NSObject
{
    WCTDatabase * _sessionStatusDB; // +0x8
    WCTTable * _sessionStatusTable; // +0x10
    NSMutableDictionary * _sessionStatusDic; // +0x18
    id /* block */ _recoverBlock; // +0x20
}
- (void)dealloc;
- (id)init;
- (void)initDBAndSetRecoverBlock:(id /* block */)arg1;
- (void)addDBRecoverObserver;
- (void)loadDB;
- (void)updateLocalSessionStatusSelfUsername:(id)arg1 myAccountType:(unsigned int)arg2;
- (void)clearSessionStatusCache;
- (unsigned long long)sessionStatusListCount;
- (void)addOrUpdateSessionStatus:(id)arg1;
- (id)sessionStatusWithSessionId:(id)arg1;
- (id)sessionStatusListWithMyAccountType:(unsigned int)arg1 isInNormalSession:(BOOL)arg2;
- (id)sessionStatusListWithFinderUsername:(id)arg1 isInNormalSession:(BOOL)arg2;
- (void)removeAllSesstionStatusWithAccountType:(unsigned int)arg1;
- (void)removeAllSesstionStatusWithFinderUsername:(id)arg1;
- (BOOL)isDBNeedRecover;
- (void)setDBIsNeedRecover:(BOOL)arg1;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (id)sessionStatusDB;
- (void)setSessionStatusDB:(id)arg1;
- (id)sessionStatusTable;
- (void)setSessionStatusTable:(id)arg1;
- (id)sessionStatusDic;
- (void)setSessionStatusDic:(id)arg1;
- (id /* block */)recoverBlock;
- (void)setRecoverBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

