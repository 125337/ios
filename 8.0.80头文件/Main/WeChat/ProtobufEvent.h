@interface ProtobufEvent : CBaseEvent
{
    ProtobufPrtlChannel * m_ptrl; // +0x30
    ProtobufCGIWrap * m_pbCGIWrap; // +0x38
    ProtobufEventHandler * m_pbEventHandler; // +0x40
    BOOL m_bSpeedy; // +0x48
    BOOL m_hasInvokePreHandler; // +0x49
    int m_cmdstatus; // +0x4c
    BOOL m_ecdhHasSwitchCert; // +0x50
    unsigned int m_ecdhCertVersion; // +0x54
    unsigned int m_certRegion; // +0x58
    void * m_ecdhClient; // +0x60
    void * m_axEcdhClient; // +0x68
    MMAuthInfo * m_authInfo; // +0x70
    NSRecursiveLock * m_lock; // +0x78
    BOOL m_hasTerminated; // +0x80
    NSString * _logIdentifier; // +0x88
}
+ (void)SetHybridEcdhEncryptSkipAAK;
+ (unsigned int)certVersionWithRegion:(unsigned int)arg1;
+ (unsigned int)switchFromCertVersion:(unsigned int)arg1 region:(unsigned int)arg2;
+ (map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>)taskPayExtraInfo:(const void *)arg1 cgiWrap:(id)arg2;
+ (map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>)taskExtraInfo:(const void *)arg1 cgiWrap:(id)arg2;
- (id)initWithCGIWrap:(id)arg1 eventId:(unsigned int)arg2;
- (void)dealloc;
- (id)m_delNotifyFromEvent;
- (void)TryStart;
- (BOOL)realStart;
- (BOOL)realStartPaymars:(BOOL)arg1;
- (void)TerminateIfNotReceived;
- (void)Stop;
- (void)safeLogIdkeyWithId:(unsigned int)arg1 key:(unsigned int)arg2;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (BOOL)Pack:(AutoBuffer *)arg1 Host:(id)arg2 sequenceId:(unsigned short)arg3;
- (BOOL)InternalPack:(AutoBuffer *)arg1 Host:(id)arg2 sequenceId:(unsigned short)arg3;
- (int)UnPack:(const AutoBuffer *)arg1 headExtFlags:(int *)arg2 sequenceId:(unsigned short *)arg3;
- (void)tryToFillReqBuf:(void *)arg1;
- (void)tryToFillPayReqBuf:(void *)arg1;
- (void)fillEcdhInfo:(id)arg1 certVersion:(unsigned int)arg2;
- (BOOL)isStartTaskWithBuf;
- (BOOL)isPackWxPkg;
- (BOOL)isPackWxPayPkg;
- (BOOL)HasEventHandler;
- (id)asyncName;
- (id)m_pbCGIWrap;
- (BOOL)m_bSpeedy;
- (void)setM_bSpeedy:(BOOL)arg1;
- (id)logIdentifier;
- (void)setLogIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
