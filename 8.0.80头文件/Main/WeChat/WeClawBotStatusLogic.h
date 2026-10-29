@interface WeClawBotStatusLogic : MMObject <WeClawBotStatusRequestDelegate, IMsgExt>
{
    BOOL _started; // +0x8
    BOOL _hasReceivedStatusNotifySinceRequest; // +0x9
    id <WeClawBotStatusLogicDelegate> _delegate; // +0x10
    NSString * _username; // +0x18
    WeClawBotStatusInfo * _statusInfo; // +0x20
    WeClawBotStatusRequest * _statusRequest; // +0x28
}
- (id)initWithUsername:(id)arg1 initialStatusInfo:(id)arg2;
- (void)dealloc;
- (void)start;
- (void)startWithRequestStatus:(BOOL)arg1;
- (void)stop;
- (BOOL)isOffline;
- (long long)versionAlertType;
- (BOOL)shouldHandleRequest:(id)arg1;
- (void)onWeClawBotStatusRequest:(id)arg1 didGetStatus:(int)arg2 detail:(id)arg3;
- (void)onWeClawBotStatusRequestFail:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)updateStatusInfoFromCgi:(id)arg1;
- (BOOL)tryAcceptStatusInfo:(id)arg1 fromNotify:(BOOL)arg2;
- (void)applyStatusInfo:(id)arg1 fromNotify:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)statusInfo;
- (void)setStatusInfo:(id)arg1;
- (id)statusRequest;
- (void)setStatusRequest:(id)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)hasReceivedStatusNotifySinceRequest;
- (void)setHasReceivedStatusNotifySinceRequest:(BOOL)arg1;
- (void).cxx_destruct;
@end
