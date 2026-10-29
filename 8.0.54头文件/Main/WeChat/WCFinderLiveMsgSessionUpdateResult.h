@interface WCFinderLiveMsgSessionUpdateResult : NSObject
{
    BOOL _isInValidUpdate; // +0x8
    BOOL _isSenderForMsg; // +0x9
    BOOL _sessionHasUpdated; // +0xa
    WCFinderLiveMsgSessionInfo * _sessionInfoById; // +0x10
}
- (BOOL)isInValidUpdate;
- (void)setIsInValidUpdate:(BOOL)arg1;
- (BOOL)isSenderForMsg;
- (void)setIsSenderForMsg:(BOOL)arg1;
- (BOOL)sessionHasUpdated;
- (void)setSessionHasUpdated:(BOOL)arg1;
- (id)sessionInfoById;
- (void)setSessionInfoById:(id)arg1;
- (void).cxx_destruct;
@end

