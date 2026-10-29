@interface ProtobufCGIProfile : NSObject
{
    unsigned long long _startTime; // +0x8
    unsigned long long _startConnectTime; // +0x10
    unsigned long long _connectSuccessfulTime; // +0x18
    unsigned long long _startTlsHandshakeTime; // +0x20
    unsigned long long _tlsHandshakeSuccessfulTime; // +0x28
    unsigned long long _startSendPacketTime; // +0x30
    unsigned long long _sendPacketFinishedTime; // +0x38
    unsigned long long _startReadPacketTime; // +0x40
    unsigned long long _readPacketFinishedTime; // +0x48
    unsigned long long _startEncodePacketTime; // +0x50
    unsigned long long _encodePacketFinishedTime; // +0x58
    unsigned long long _startDecodePacketTime; // +0x60
    unsigned long long _decodePacketFinishedTime; // +0x68
    unsigned long long _rtt; // +0x70
    unsigned long long _channelType; // +0x78
    unsigned long long _protocolType; // +0x80
    NSString * _netLabel; // +0x88
    unsigned long long _startTaskTick; // +0x90
    unsigned long long _startTaskTimeStamp; // +0x98
    unsigned long long _endTaskTick; // +0xa0
}
- (id)initWithCGIProfile:(const void *)arg1;
- (id)initWithPayCGIProfile:(const void *)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)startConnectTime;
- (void)setStartConnectTime:(unsigned long long)arg1;
- (unsigned long long)connectSuccessfulTime;
- (void)setConnectSuccessfulTime:(unsigned long long)arg1;
- (unsigned long long)startTlsHandshakeTime;
- (void)setStartTlsHandshakeTime:(unsigned long long)arg1;
- (unsigned long long)tlsHandshakeSuccessfulTime;
- (void)setTlsHandshakeSuccessfulTime:(unsigned long long)arg1;
- (unsigned long long)startSendPacketTime;
- (void)setStartSendPacketTime:(unsigned long long)arg1;
- (unsigned long long)sendPacketFinishedTime;
- (void)setSendPacketFinishedTime:(unsigned long long)arg1;
- (unsigned long long)startReadPacketTime;
- (void)setStartReadPacketTime:(unsigned long long)arg1;
- (unsigned long long)readPacketFinishedTime;
- (void)setReadPacketFinishedTime:(unsigned long long)arg1;
- (unsigned long long)startEncodePacketTime;
- (void)setStartEncodePacketTime:(unsigned long long)arg1;
- (unsigned long long)encodePacketFinishedTime;
- (void)setEncodePacketFinishedTime:(unsigned long long)arg1;
- (unsigned long long)startDecodePacketTime;
- (void)setStartDecodePacketTime:(unsigned long long)arg1;
- (unsigned long long)decodePacketFinishedTime;
- (void)setDecodePacketFinishedTime:(unsigned long long)arg1;
- (unsigned long long)rtt;
- (void)setRtt:(unsigned long long)arg1;
- (unsigned long long)channelType;
- (void)setChannelType:(unsigned long long)arg1;
- (unsigned long long)protocolType;
- (void)setProtocolType:(unsigned long long)arg1;
- (id)netLabel;
- (void)setNetLabel:(id)arg1;
- (unsigned long long)startTaskTick;
- (void)setStartTaskTick:(unsigned long long)arg1;
- (unsigned long long)startTaskTimeStamp;
- (void)setStartTaskTimeStamp:(unsigned long long)arg1;
- (unsigned long long)endTaskTick;
- (void)setEndTaskTick:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
