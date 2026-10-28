@interface WCFinderMsgSessionFindResult : NSObject
{
    BOOL _isInGreetSessionList; // +0x8
    WCFinderMsgSessionInfo * _sessionInfo; // +0x10
    WCTableSessionStorage * _sessionStorage; // +0x18
}
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (BOOL)isInGreetSessionList;
- (void)setIsInGreetSessionList:(BOOL)arg1;
- (void).cxx_destruct;
@end
