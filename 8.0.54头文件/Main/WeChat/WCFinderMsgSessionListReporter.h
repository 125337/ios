@interface WCFinderMsgSessionListReporter : NSObject
{
    BOOL _isGreetSession; // +0x8
    BOOL _needReport; // +0x9
    unsigned int _myAccountType; // +0xc
    unsigned int _exposeSessionCount; // +0x10
    unsigned int _sessionClickCount; // +0x14
    unsigned int _delSessionCount; // +0x18
    unsigned long long _fromCommentScene; // +0x20
    unsigned long long _enterTimeInMs; // +0x28
    NSMutableSet * _exposeSessionSet; // +0x30
    NSMutableSet * _openSessionSet; // +0x38
}
- (id)initWithCommentScene:(unsigned long long)arg1;
- (void)copyInfosFromReporter:(id)arg1;
- (id)chatlistSessionid;
- (void)exposeSessionWithSessionId:(id)arg1;
- (void)openSessionWithSessionId:(id)arg1;
- (void)deleteSessionWithSessionId:(id)arg1;
- (void)enterViewController;
- (void)quitAndReport;
- (unsigned int)myAccountType;
- (void)setMyAccountType:(unsigned int)arg1;
- (BOOL)isGreetSession;
- (void)setIsGreetSession:(BOOL)arg1;
- (unsigned long long)fromCommentScene;
- (void)setFromCommentScene:(unsigned long long)arg1;
- (unsigned long long)enterTimeInMs;
- (void)setEnterTimeInMs:(unsigned long long)arg1;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (id)exposeSessionSet;
- (void)setExposeSessionSet:(id)arg1;
- (id)openSessionSet;
- (void)setOpenSessionSet:(id)arg1;
- (unsigned int)exposeSessionCount;
- (void)setExposeSessionCount:(unsigned int)arg1;
- (unsigned int)sessionClickCount;
- (void)setSessionClickCount:(unsigned int)arg1;
- (unsigned int)delSessionCount;
- (void)setDelSessionCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

