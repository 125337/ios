@interface WCFinderMsgAuthorSessionMgr : NSObject
{
    NSMutableDictionary * _authorSessionStorageDict; // +0x8
    WCTDatabase * _sessionDB; // +0x10
    WCTDatabase * _greetSessionDB; // +0x18
    id <ITableSessionStorageDelegate> _delegate; // +0x20
    NSString * _greetSessionId; // +0x28
}
- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 greetSessionID:(id)arg2;
- (id)getStorageForFinderUsername:(id)arg1;
- (void)checkWithUsernameArray:(id)arg1;
- (void)cleanAuthorSessionWithUsername:(id)arg1;
- (id)storageWithUsername:(id)arg1;
- (id)authorSessionStorageDict;
- (void)setAuthorSessionStorageDict:(id)arg1;
- (id)sessionDB;
- (void)setSessionDB:(id)arg1;
- (id)greetSessionDB;
- (void)setGreetSessionDB:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)greetSessionId;
- (void)setGreetSessionId:(id)arg1;
- (void).cxx_destruct;
@end
