@interface WeDropBaseServerHandler : MMObject <WeDropLocalNetworkExt>
{
    int _funcNumber; // +0x8
    id /* block */ _onRespondFailed; // +0x10
    id /* block */ _onRespondOK; // +0x18
    id /* block */ _onGotRequest; // +0x20
    NSString * _uuid; // +0x28
    unsigned long long _status; // +0x30
    NSData * _encryptKey; // +0x38
    NSString * _sendTaskId; // +0x40
}
- (id)init;
- (void)start;
- (void)respondsWith:(id)arg1;
- (void)onGotRequestData:(id)arg1;
- (void)onFailedWithError:(id)arg1;
- (void)onSuccessInRespond;
- (id)description;
- (void)onDataSent:(id)arg1;
- (void)onDataSendFailed;
- (void)onDataReceived:(id)arg1;
- (void)onDataReceiveFailed;
- (id /* block */)onRespondFailed;
- (void)setOnRespondFailed:(id /* block */)arg1;
- (id /* block */)onRespondOK;
- (void)setOnRespondOK:(id /* block */)arg1;
- (id /* block */)onGotRequest;
- (void)setOnGotRequest:(id /* block */)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (int)funcNumber;
- (void)setFuncNumber:(int)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)sendTaskId;
- (void)setSendTaskId:(id)arg1;
- (void).cxx_destruct;
@end
