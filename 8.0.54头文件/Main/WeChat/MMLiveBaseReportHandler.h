@interface MMLiveBaseReportHandler : NSObject <MMLiveReportEventMgrExt>
{
    BOOL _autoTackEvent; // +0x8
    unsigned int _logId; // +0xc
    NSString * _sessionId; // +0x10
}
- (id)init;
- (void)report;
- (unsigned int)logId;
- (void)setLogId:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)autoTackEvent;
- (void)setAutoTackEvent:(BOOL)arg1;
- (void).cxx_destruct;
@end

