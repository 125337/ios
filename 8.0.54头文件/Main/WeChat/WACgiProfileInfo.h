@interface WACgiProfileInfo : NSObject
{
    unsigned long long _startTime; // +0x8
    unsigned long long _startConnectTime; // +0x10
    unsigned long long _connectSuccessfulTime; // +0x18
    unsigned long long _startTlsHandshakeTime; // +0x20
    unsigned long long _tlsHandshakeSuccessfulTime; // +0x28
    unsigned long long _startSendPacketTime; // +0x30
    unsigned long long _startReadPacketTime; // +0x38
    unsigned long long _readPacketFinishedTime; // +0x40
    unsigned long long _rtt; // +0x48
    unsigned long long _channelType; // +0x50
    unsigned long long _protocolType; // +0x58
    NSString * _netLabel; // +0x60
}
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
- (id)netLabel;
- (void)setNetLabel:(id)arg1;
- (void).cxx_destruct;
@end

