@interface MainSessionDelayDeleteTask : NSObject
{
    BOOL _delayDeleteEnable; // +0x8
    unsigned int _lastMsgId; // +0xc
    id <MainSessionDelayDeleteTaskDelegate> _delegate; // +0x10
    MMSessionInfo * _session; // +0x18
    unsigned long long _showSnackBarTime; // +0x20
    MMSnackBar * _snackBar; // +0x28
}
+ (void)deleteSessionOfUsername:(id)arg1;
- (id)initWithDelayDeleteEnable:(BOOL)arg1;
- (void)updateDeleteSession:(id)arg1;
- (void)start;
- (void)cancel;
- (void)commit;
- (BOOL)shouldDelayDelete:(id)arg1;
- (void)showSnackBarTips;
- (void)hideSnackBar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (unsigned int)lastMsgId;
- (void)setLastMsgId:(unsigned int)arg1;
- (BOOL)delayDeleteEnable;
- (void)setDelayDeleteEnable:(BOOL)arg1;
- (unsigned long long)showSnackBarTime;
- (void)setShowSnackBarTime:(unsigned long long)arg1;
- (id)snackBar;
- (void)setSnackBar:(id)arg1;
- (void).cxx_destruct;
@end
