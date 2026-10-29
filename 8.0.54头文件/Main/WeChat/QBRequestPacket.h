@interface QBRequestPacket : QBJceObject
{
    NSNumber * _iVersion; // +0x8
    NSNumber * _cPacketType; // +0x10
    NSNumber * _iMessageType; // +0x18
    NSNumber * _iRequestId; // +0x20
    NSString * _sServantName; // +0x28
    NSString * _sFuncName; // +0x30
    NSData * _sBuffer; // +0x38
    NSNumber * _iTimeout; // +0x40
    NSDictionary * _context; // +0x48
    NSDictionary * _status; // +0x50
}
+ (id)generateRequestID;
- (id)init;
- (void)__pack:(id)arg1;
- (void)__unpack:(id)arg1;
- (void).cxx_destruct;
- (id)iVersion;
- (void)setIVersion:(id)arg1;
- (id)cPacketType;
- (void)setCPacketType:(id)arg1;
- (id)iMessageType;
- (void)setIMessageType:(id)arg1;
- (id)iRequestId;
- (void)setIRequestId:(id)arg1;
- (id)sServantName;
- (void)setSServantName:(id)arg1;
- (id)sFuncName;
- (void)setSFuncName:(id)arg1;
- (id)sBuffer;
- (void)setSBuffer:(id)arg1;
- (id)iTimeout;
- (void)setITimeout:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
@end

