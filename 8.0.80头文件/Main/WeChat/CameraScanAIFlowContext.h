@interface CameraScanAIFlowContext : NSObject
{
    BOOL _hasRedDot; // +0x8
    BOOL _isUsingFrontCamera; // +0x9
    BOOL _fromQBarIntercept; // +0xa
    BOOL _terminalReported; // +0xb
    BOOL _qbarInterceptCDNUploadCompleted; // +0xc
    unsigned long long _flowType; // +0x10
    NSString * _askRequestId; // +0x18
    unsigned long long _logicRequestId; // +0x20
    unsigned long long _startTimeMs; // +0x28
    unsigned long long _entrance; // +0x30
    double _qbarDetectProb; // +0x38
    NSMutableSet * _reportedActionTypes; // +0x40
    NSString * _qbarInterceptCDNFileId; // +0x48
    NSString * _qbarInterceptCDNAesKey; // +0x50
    NSMutableArray * _pendingQBarInterceptReportBlocks; // +0x58
}
- (unsigned long long)flowType;
- (void)setFlowType:(unsigned long long)arg1;
- (id)askRequestId;
- (void)setAskRequestId:(id)arg1;
- (unsigned long long)logicRequestId;
- (void)setLogicRequestId:(unsigned long long)arg1;
- (unsigned long long)startTimeMs;
- (void)setStartTimeMs:(unsigned long long)arg1;
- (BOOL)hasRedDot;
- (void)setHasRedDot:(BOOL)arg1;
- (BOOL)isUsingFrontCamera;
- (void)setIsUsingFrontCamera:(BOOL)arg1;
- (unsigned long long)entrance;
- (void)setEntrance:(unsigned long long)arg1;
- (double)qbarDetectProb;
- (void)setQbarDetectProb:(double)arg1;
- (BOOL)fromQBarIntercept;
- (void)setFromQBarIntercept:(BOOL)arg1;
- (BOOL)terminalReported;
- (void)setTerminalReported:(BOOL)arg1;
- (id)reportedActionTypes;
- (void)setReportedActionTypes:(id)arg1;
- (id)qbarInterceptCDNFileId;
- (void)setQbarInterceptCDNFileId:(id)arg1;
- (id)qbarInterceptCDNAesKey;
- (void)setQbarInterceptCDNAesKey:(id)arg1;
- (BOOL)qbarInterceptCDNUploadCompleted;
- (void)setQbarInterceptCDNUploadCompleted:(BOOL)arg1;
- (id)pendingQBarInterceptReportBlocks;
- (void)setPendingQBarInterceptReportBlocks:(id)arg1;
- (void).cxx_destruct;
@end
