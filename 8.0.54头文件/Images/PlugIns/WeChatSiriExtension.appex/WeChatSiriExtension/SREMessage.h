@interface SREMessage : NSObject
{
    unsigned int _msgType; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _clientMsgId; // +0x10
    unsigned int _sourceTypeValue; // +0x14
    unsigned int _statusValue; // +0x18
    NSString * _toUsername; // +0x20
    NSString * _fromUsername; // +0x28
    NSString * _content; // +0x30
    NSString * _serverId; // +0x38
}
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)clientMsgId;
- (void)setClientMsgId:(unsigned int)arg1;
- (unsigned int)sourceTypeValue;
- (void)setSourceTypeValue:(unsigned int)arg1;
- (unsigned int)statusValue;
- (void)setStatusValue:(unsigned int)arg1;
- (id)serverId;
- (void)setServerId:(id)arg1;
- (void).cxx_destruct;
@end

