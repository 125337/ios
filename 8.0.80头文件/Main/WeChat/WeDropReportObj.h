@interface WeDropReportObj : MMObject
{
    BOOL _didGetAvgSpeed; // +0x8
    BOOL _didGetMaxSpeed; // +0x9
    BOOL _didReportScanQROK; // +0xa
    BOOL _didReportSessionResult; // +0xb
    NSString * _sessionId; // +0x10
    NSString * _qrCodeId; // +0x18
    unsigned long long _peerType; // +0x20
    WeDropDevReportObj * _devReportObj; // +0x28
    unsigned long long _selectFileType; // +0x30
    unsigned long long _sessionStartTime; // +0x38
    unsigned long long _startSelectFileTime; // +0x40
    unsigned long long _startTransportTime; // +0x48
    unsigned long long _retryConnectCount; // +0x50
    unsigned long long _avgSpeed; // +0x58
    unsigned long long _maxSpeed; // +0x60
    unsigned long long _usingCount; // +0x68
}
- (id)init;
- (void)setQrCodeId:(id)arg1;
- (void)setPeerType:(unsigned long long)arg1;
- (void)reportUserAction:(unsigned long long)arg1;
- (void)reportAppEnterBackgroundStatus:(unsigned long long)arg1;
- (void)reportReceiverQRResult:(unsigned long long)arg1;
- (void)reportScanQRResult:(unsigned long long)arg1;
- (void)onRetryConnect;
- (void)reportConnectResult:(unsigned long long)arg1;
- (BOOL)shouldReportReceiverConnectUserCancel:(unsigned long long)arg1;
- (void)reportReceiverConnectUserCancel;
- (void)onStartSelectFile:(unsigned long long)arg1;
- (void)reportSenderSelectFiles:(id)arg1;
- (void)onStartTransport;
- (void)reportTransportWithResult:(unsigned long long)arg1;
- (void)reportSessionEndResult:(unsigned long long)arg1;
- (void)requestHoldSelf;
- (void)tryReleaseSelf;
- (id)generalReportParams;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)qrCodeId;
- (unsigned long long)peerType;
- (id)devReportObj;
- (void)setDevReportObj:(id)arg1;
- (unsigned long long)selectFileType;
- (void)setSelectFileType:(unsigned long long)arg1;
- (unsigned long long)sessionStartTime;
- (void)setSessionStartTime:(unsigned long long)arg1;
- (unsigned long long)startSelectFileTime;
- (void)setStartSelectFileTime:(unsigned long long)arg1;
- (unsigned long long)startTransportTime;
- (void)setStartTransportTime:(unsigned long long)arg1;
- (unsigned long long)retryConnectCount;
- (void)setRetryConnectCount:(unsigned long long)arg1;
- (BOOL)didGetAvgSpeed;
- (void)setDidGetAvgSpeed:(BOOL)arg1;
- (BOOL)didGetMaxSpeed;
- (void)setDidGetMaxSpeed:(BOOL)arg1;
- (unsigned long long)avgSpeed;
- (void)setAvgSpeed:(unsigned long long)arg1;
- (unsigned long long)maxSpeed;
- (void)setMaxSpeed:(unsigned long long)arg1;
- (unsigned long long)usingCount;
- (void)setUsingCount:(unsigned long long)arg1;
- (BOOL)didReportScanQROK;
- (void)setDidReportScanQROK:(BOOL)arg1;
- (BOOL)didReportSessionResult;
- (void)setDidReportSessionResult:(BOOL)arg1;
- (void).cxx_destruct;
@end
