@interface MainSessionDelayDeleteTask : NSObject
{
    unsigned int _lastMsgId; // +0x8
    id <MainSessionDelayDeleteTaskDelegate> _delegate; // +0x10
    MMSessionInfo * _session; // +0x18
    unsigned long long _showSnackBarTime; // +0x20
    MMSnackBar * _snackBar; // +0x28
}
+ (void)deleteSession:(id)arg1;
+ (BOOL)isSessionCanReserve:(id)arg1;
- (void)updateDeleteSession:(id)arg1;
- (void)start;
- (void)cancel;
- (void)commit;
- (void)showSnackBarTips;
- (void)hideSnackBar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (unsigned int)lastMsgId;
- (void)setLastMsgId:(unsigned int)arg1;
- (unsigned long long)showSnackBarTime;
- (void)setShowSnackBarTime:(unsigned long long)arg1;
- (id)snackBar;
- (void)setSnackBar:(id)arg1;
- (void).cxx_destruct;
@end
