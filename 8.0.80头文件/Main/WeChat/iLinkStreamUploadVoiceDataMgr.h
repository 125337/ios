@interface iLinkStreamUploadVoiceDataMgr : MMObject <UploadStreamVoiceDataMgrProtocol>
{
    BOOL _useBackendEVAD; // +0x8
    unsigned int _fileEncodeType; // +0xc
    float _transTimeoutInsec; // +0x10
    unsigned int _currentInputId; // +0x14
    unsigned int _svrEndFlag; // +0x18
    unsigned int _cliEndFlag; // +0x1c
    int _errorCode; // +0x20
    int _instanceId; // +0x24
    id <UploadStreamVoiceDataMgrDelegate> _delegate; // +0x28
    long long _scene; // +0x30
    NSData * _extraData; // +0x38
    NSData * _respExtraData; // +0x40
    NSString * _voiceId; // +0x48
    iLinkStreamVoiceTranslater * _translater; // +0x50
    NSDate * _recordStopTime; // +0x58
    AbortInfo * _info; // +0x60
}
- (id)initWithScene:(long long)arg1 voiceID:(id)arg2;
- (void)dealloc;
- (void)setExtraData:(id)arg1;
- (void)initTranslater;
- (void)onResultChange:(id)arg1 seq:(unsigned int)arg2 endFlag:(unsigned int)arg3;
- (void)onReceiveErrorEvent:(int)arg1 info:(id)arg2;
- (void)sendPingPacket;
- (void)Start:(unsigned int)arg1;
- (void)Stop;
- (void)AddNewPart:(id)arg1;
- (void)SendPollingPacket;
- (void)ClearLastUploadData;
- (void)notifyRecordStop;
- (BOOL)useBackendEVAD;
- (void)setUseBackendEVAD:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)extraData;
- (id)respExtraData;
- (void)setRespExtraData:(id)arg1;
- (unsigned int)fileEncodeType;
- (void)setFileEncodeType:(unsigned int)arg1;
- (float)transTimeoutInsec;
- (void)setTransTimeoutInsec:(float)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)translater;
- (void)setTranslater:(id)arg1;
- (unsigned int)currentInputId;
- (void)setCurrentInputId:(unsigned int)arg1;
- (id)recordStopTime;
- (void)setRecordStopTime:(id)arg1;
- (unsigned int)svrEndFlag;
- (void)setSvrEndFlag:(unsigned int)arg1;
- (unsigned int)cliEndFlag;
- (void)setCliEndFlag:(unsigned int)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (int)instanceId;
- (void)setInstanceId:(int)arg1;
- (void).cxx_destruct;
@end
