@interface SayHelloUpToCloudHello : NSObject
{
    BOOL _bUpToCloud; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _direction; // +0x10
    unsigned int _status; // +0x14
    unsigned long long _version; // +0x18
    long long _msgServerId; // +0x20
    NSString * _message; // +0x28
    NSString * _userName; // +0x30
}
- (void)copyFromUpToCloudHello:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (long long)msgServerId;
- (void)setMsgServerId:(long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)direction;
- (void)setDirection:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (BOOL)bUpToCloud;
- (void)setBUpToCloud:(BOOL)arg1;
- (void).cxx_destruct;
@end
