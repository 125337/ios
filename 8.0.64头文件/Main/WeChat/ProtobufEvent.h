@interface ProtobufEvent : CBaseEvent
{
    ProtobufPrtlChannel * m_ptrl; // +0x28
    ProtobufCGIWrap * m_pbCGIWrap; // +0x30
    ProtobufEventHandler * m_pbEventHandler; // +0x38
    BOOL m_bSpeedy; // +0x40
    BOOL m_hasInvokePreHandler; // +0x41
    int m_cmdstatus; // +0x44
    BOOL m_ecdhHasSwitchCert; // +0x48
    unsigned int m_ecdhCertVersion; // +0x4c
    unsigned int m_certRegion; // +0x50
    void * m_ecdhClient; // +0x58
    void * m_axEcdhClient; // +0x60
    MMAuthInfo * m_authInfo; // +0x68
    NSRecursiveLock * m_lock; // +0x70
    BOOL m_hasTerminated; // +0x78
    NSString * _logIdentifier; // +0x80
}
+ (void)SetHybridEcdhEncryptSkipAAK;
+ (unsigned int)certVersionWithRegion:(unsigned int)arg1;
+ (unsigned int)switchFromCertVersion:(unsigned int)arg1 region:(unsigned int)arg2;
+ (map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>)taskExtraInfo:(const void *)arg1 cgiWrap:(id)arg2;
- (id)initWithCGIWrap:(id)arg1 eventId:(unsigned int)arg2;
- (void)dealloc;
- (id)m_delNotifyFromEvent;
- (void)TryStart;
- (BOOL)realStart;
- (void)TerminateIfNotReceived;
- (void)Stop;
- (void)safeLogIdkeyWithId:(unsigned int)arg1 key:(unsigned int)arg2;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (BOOL)Pack:(AutoBuffer *)arg1 Host:(id)arg2 sequenceId:(unsigned short)arg3;
- (BOOL)InternalPack:(AutoBuffer *)arg1 Host:(id)arg2 sequenceId:(unsigned short)arg3;
- (int)UnPack:(const AutoBuffer *)arg1 headExtFlags:(int *)arg2 sequenceId:(unsigned short *)arg3;
- (id)m_pbCGIWrap;
- (BOOL)m_bSpeedy;
- (void)setM_bSpeedy:(BOOL)arg1;
- (id)logIdentifier;
- (void)setLogIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
