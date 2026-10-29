@interface CgiRouterInfo : NSObject <YYModel>
{
    unsigned int _businessId; // +0x8
    unsigned int _cmdId; // +0xc
    unsigned int _tryCount; // +0x10
    NSString * _cgiPath; // +0x18
    NSString * _cgiName; // +0x20
    NSString * _cgiUri; // +0x28
}
- (id)init:(unsigned int)arg1 cmdId:(unsigned int)arg2 tryCount:(unsigned int)arg3 cgiPath:(id)arg4;
- (void)setCgiPath:(id)arg1;
- (id)description;
- (id)toString;
- (unsigned int)businessId;
- (void)setBusinessId:(unsigned int)arg1;
- (unsigned int)cmdId;
- (void)setCmdId:(unsigned int)arg1;
- (id)cgiPath;
- (unsigned int)tryCount;
- (void)setTryCount:(unsigned int)arg1;
- (id)cgiName;
- (void)setCgiName:(id)arg1;
- (id)cgiUri;
- (void)setCgiUri:(id)arg1;
- (void).cxx_destruct;
@end
