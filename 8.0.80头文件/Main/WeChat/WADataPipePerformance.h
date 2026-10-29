@interface WADataPipePerformance : NSObject
{
    BOOL _isConcurrent; // +0x8
    BOOL _needConfirm; // +0x9
    unsigned int _concurrentTimeout; // +0xc
    unsigned int _dataLengthInBytes; // +0x10
    unsigned int _currentQueueNum; // +0x14
    unsigned long long _datapipeType; // +0x18
    unsigned long long _concurrentPriority; // +0x20
    unsigned long long _enqueueTimeInMs; // +0x28
    unsigned long long _dequeueTimeInMs; // +0x30
    unsigned long long _beginCgiTimeInMs; // +0x38
    unsigned long long _cgiCallbackTimeInMs; // +0x40
    unsigned long long _beginCgiAfterConfirmTimeInMs; // +0x48
    unsigned long long _cgiCallbackAfterConfirmTimeInMs; // +0x50
    unsigned long long _confirmTimeInMs; // +0x58
    unsigned long long _confirmResponseTimeInMs; // +0x60
    unsigned long long _dataResponseTimeInMs; // +0x68
    unsigned long long _taskStartTime; // +0x70
    unsigned long long _startConnectTime; // +0x78
    unsigned long long _connectSuccessfulTime; // +0x80
    unsigned long long _startHandshakeTime; // +0x88
    unsigned long long _handshakeSuccessfulTime; // +0x90
    unsigned long long _startSendPacketTime; // +0x98
    unsigned long long _startReadPacketTime; // +0xa0
    unsigned long long _readPacketFinishedTime; // +0xa8
    unsigned long long _rtt; // +0xb0
    unsigned long long _channelType; // +0xb8
    unsigned long long _protocolType; // +0xc0
    NSString * _netType; // +0xc8
}
- (unsigned long long)datapipeType;
- (void)setDatapipeType:(unsigned long long)arg1;
- (BOOL)isConcurrent;
- (void)setIsConcurrent:(BOOL)arg1;
- (unsigned long long)concurrentPriority;
- (void)setConcurrentPriority:(unsigned long long)arg1;
- (unsigned int)concurrentTimeout;
- (void)setConcurrentTimeout:(unsigned int)arg1;
- (unsigned int)dataLengthInBytes;
- (void)setDataLengthInBytes:(unsigned int)arg1;
- (unsigned int)currentQueueNum;
- (void)setCurrentQueueNum:(unsigned int)arg1;
- (unsigned long long)enqueueTimeInMs;
- (void)setEnqueueTimeInMs:(unsigned long long)arg1;
- (unsigned long long)dequeueTimeInMs;
- (void)setDequeueTimeInMs:(unsigned long long)arg1;
- (unsigned long long)beginCgiTimeInMs;
- (void)setBeginCgiTimeInMs:(unsigned long long)arg1;
- (unsigned long long)cgiCallbackTimeInMs;
- (void)setCgiCallbackTimeInMs:(unsigned long long)arg1;
- (unsigned long long)beginCgiAfterConfirmTimeInMs;
- (void)setBeginCgiAfterConfirmTimeInMs:(unsigned long long)arg1;
- (unsigned long long)cgiCallbackAfterConfirmTimeInMs;
- (void)setCgiCallbackAfterConfirmTimeInMs:(unsigned long long)arg1;
- (BOOL)needConfirm;
- (void)setNeedConfirm:(BOOL)arg1;
- (unsigned long long)confirmTimeInMs;
- (void)setConfirmTimeInMs:(unsigned long long)arg1;
- (unsigned long long)confirmResponseTimeInMs;
- (void)setConfirmResponseTimeInMs:(unsigned long long)arg1;
- (unsigned long long)dataResponseTimeInMs;
- (void)setDataResponseTimeInMs:(unsigned long long)arg1;
- (unsigned long long)taskStartTime;
- (void)setTaskStartTime:(unsigned long long)arg1;
- (unsigned long long)startConnectTime;
- (void)setStartConnectTime:(unsigned long long)arg1;
- (unsigned long long)connectSuccessfulTime;
- (void)setConnectSuccessfulTime:(unsigned long long)arg1;
- (unsigned long long)startHandshakeTime;
- (void)setStartHandshakeTime:(unsigned long long)arg1;
- (unsigned long long)handshakeSuccessfulTime;
- (void)setHandshakeSuccessfulTime:(unsigned long long)arg1;
- (unsigned long long)startSendPacketTime;
- (void)setStartSendPacketTime:(unsigned long long)arg1;
- (unsigned long long)startReadPacketTime;
- (void)setStartReadPacketTime:(unsigned long long)arg1;
- (unsigned long long)readPacketFinishedTime;
- (void)setReadPacketFinishedTime:(unsigned long long)arg1;
- (unsigned long long)rtt;
- (void)setRtt:(unsigned long long)arg1;
- (unsigned long long)channelType;
- (void)setChannelType:(unsigned long long)arg1;
- (unsigned long long)protocolType;
- (void)setProtocolType:(unsigned long long)arg1;
- (id)netType;
- (void)setNetType:(id)arg1;
- (void).cxx_destruct;
@end
