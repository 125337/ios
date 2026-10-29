@interface WARemoteDebugSendQueue : NSObject
{
    double _sendTimestamp; // +0x8
    CADisplayLink * _sendTimer; // +0x10
    unsigned int _sendSeq; // +0x18
    unsigned int _prevSendSeq; // +0x1c
    NSMutableArray * _msgQueue; // +0x20
    NSMutableArray * _pkgQueue; // +0x28
    unsigned int _resendCountForSvrBlock; // +0x30
    unsigned int _resendCountForSvrError; // +0x34
    BOOL _sendoutImmediately; // +0x38
    BOOL _isDebuggerRunLoopMode; // +0x39
    id <WARemoteDebugSendQueueDelegate> _delegate; // +0x40
}
+ (id)generateUUID;
- (void)dealloc;
- (id)init;
- (void)sendDebugMsgList:(id)arg1;
- (void)handleQueue;
- (void)msgQueue2PkgQueue;
- (void)handleSendDebugMsgResp:(id)arg1 uuid:(id)arg2;
- (void)resendTryAgain;
- (void)sendOrResendPkg;
- (void)updatePrintInfo;
- (unsigned int)getIntervalSendCount;
- (void)initSendTimer;
- (void)destorySendTimer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)sendoutImmediately;
- (void)setSendoutImmediately:(BOOL)arg1;
- (BOOL)isDebuggerRunLoopMode;
- (void)setIsDebuggerRunLoopMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

