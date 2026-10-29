@interface WeDropBaseLocalCgi : MMObject <WeDropLocalNetworkExt>
{
    int _funcNumber; // +0x8
    id /* block */ _onRequestFailed; // +0x10
    id /* block */ _onWaitingResponse; // +0x18
    id /* block */ _onRequestOK; // +0x20
    NSString * _uuid; // +0x28
    unsigned long long _status; // +0x30
    WXPBGeneratedMessage * _request; // +0x38
    NSData * _encryptKey; // +0x40
    NSString * _sendTaskId; // +0x48
}
- (id)init;
- (void)start;
- (void)onGotResponseData:(id)arg1;
- (void)onFailedWithError:(id)arg1;
- (void)onOKWithResponse:(id)arg1;
- (id)description;
- (void)onDataSent:(id)arg1;
- (void)onDataSendFailed;
- (void)onDataReceived:(id)arg1;
- (void)onDataReceiveFailed;
- (id /* block */)onRequestFailed;
- (void)setOnRequestFailed:(id /* block */)arg1;
- (id /* block */)onWaitingResponse;
- (void)setOnWaitingResponse:(id /* block */)arg1;
- (id /* block */)onRequestOK;
- (void)setOnRequestOK:(id /* block */)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (int)funcNumber;
- (void)setFuncNumber:(int)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)sendTaskId;
- (void)setSendTaskId:(id)arg1;
- (void).cxx_destruct;
@end
