@interface WCFinderMsgSessionUpdateResult : NSObject
{
    BOOL _isInValidUpdate; // +0x8
    BOOL _isSenderForMsg; // +0x9
    BOOL _isInAsFansSessionList; // +0xa
    BOOL _isInAsAliasSessionList; // +0xb
    BOOL _isInAsAuthorSessionList; // +0xc
    BOOL _normalSessionHasUpdated; // +0xd
    BOOL _greetSessionHasUpdated; // +0xe
    BOOL _isInGreetSessionListOnly; // +0xf
    BOOL _isGreetSessionUnreadStatusUpdated; // +0x10
    WCFinderMsgSessionInfo * _sessionInfo; // +0x18
}
- (BOOL)isInValidUpdate;
- (void)setIsInValidUpdate:(BOOL)arg1;
- (BOOL)isSenderForMsg;
- (void)setIsSenderForMsg:(BOOL)arg1;
- (BOOL)isInAsFansSessionList;
- (void)setIsInAsFansSessionList:(BOOL)arg1;
- (BOOL)isInAsAliasSessionList;
- (void)setIsInAsAliasSessionList:(BOOL)arg1;
- (BOOL)isInAsAuthorSessionList;
- (void)setIsInAsAuthorSessionList:(BOOL)arg1;
- (BOOL)normalSessionHasUpdated;
- (void)setNormalSessionHasUpdated:(BOOL)arg1;
- (BOOL)greetSessionHasUpdated;
- (void)setGreetSessionHasUpdated:(BOOL)arg1;
- (BOOL)isInGreetSessionListOnly;
- (void)setIsInGreetSessionListOnly:(BOOL)arg1;
- (BOOL)isGreetSessionUnreadStatusUpdated;
- (void)setIsGreetSessionUnreadStatusUpdated:(BOOL)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end

