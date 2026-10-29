@interface WeDropDevReportObj : MMObject <WeDropLocalNetworkExt>
{
    int _remotePlatform; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _qrCodeId; // +0x18
    unsigned long long _peerType; // +0x20
    unsigned long long _sendStatus; // +0x28
    unsigned long long _receiveStatus; // +0x30
    unsigned long long _sessionStartTime; // +0x38
    unsigned long long _fileSelectType; // +0x40
}
- (id)init;
- (void)reportSendStatusUpdate:(unsigned long long)arg1;
- (void)reportReceiveStatusUpdate:(unsigned long long)arg1;
- (void)onStartSelectFile:(unsigned long long)arg1;
- (void)reportSelectFile:(id)arg1 missingInfos:(id)arg2;
- (void)onWeDropSendSessionStatusChanged:(unsigned long long)arg1;
- (void)onInitNetworkFailed:(id)arg1 result:(id)arg2;
- (void)onInitNetworkOK:(id)arg1 deviceInfo:(id)arg2;
- (id)getSessionStatusStr;
- (void)appendEmptySDKInit:(id)arg1;
- (void)appendEmptySelectFile:(id)arg1;
- (id)generalReportString;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)qrCodeId;
- (void)setQrCodeId:(id)arg1;
- (unsigned long long)peerType;
- (void)setPeerType:(unsigned long long)arg1;
- (int)remotePlatform;
- (void)setRemotePlatform:(int)arg1;
- (unsigned long long)sendStatus;
- (void)setSendStatus:(unsigned long long)arg1;
- (unsigned long long)receiveStatus;
- (void)setReceiveStatus:(unsigned long long)arg1;
- (unsigned long long)sessionStartTime;
- (void)setSessionStartTime:(unsigned long long)arg1;
- (unsigned long long)fileSelectType;
- (void)setFileSelectType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
