@interface MSECGIClient : NSObject
{
    unsigned short _headDeviceType; // +0x8
    unsigned int _appVersion; // +0xc
    long long _cryptUin; // +0x10
    NSData * _cryptKey; // +0x18
    NSData * _serverId; // +0x20
    NSData * _deviceId; // +0x28
    NSData * _deviceType; // +0x30
    unsigned long long _timeout; // +0x38
    NSURLSessionConfiguration * _sessionConfig; // +0x40
    NSURLSession * _session; // +0x48
}
- (id)init;
- (id)session;
- (void)postWithCGIWrap:(id)arg1 toURL:(id)arg2 completion:(id /* block */)arg3;
- (id)baseRequest;
- (BOOL)checkValid;
- (long long)cryptUin;
- (void)setCryptUin:(long long)arg1;
- (id)cryptKey;
- (void)setCryptKey:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)serverId;
- (void)setServerId:(id)arg1;
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (id)deviceType;
- (void)setDeviceType:(id)arg1;
- (unsigned short)headDeviceType;
- (void)setHeadDeviceType:(unsigned short)arg1;
- (unsigned long long)timeout;
- (void)setTimeout:(unsigned long long)arg1;
- (id)sessionConfig;
- (void)setSessionConfig:(id)arg1;
- (void)setSession:(id)arg1;
- (void).cxx_destruct;
@end

