@interface WASilentOpenCheckInfo : MMObject
{
    unsigned int _beginTimeStamp; // +0x8
    unsigned int _cacheSeconds; // +0xc
    NSString * _appid; // +0x10
    NSString * _username; // +0x18
    unsigned long long _ret; // +0x20
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)ret;
- (void)setRet:(unsigned long long)arg1;
- (unsigned int)beginTimeStamp;
- (void)setBeginTimeStamp:(unsigned int)arg1;
- (unsigned int)cacheSeconds;
- (void)setCacheSeconds:(unsigned int)arg1;
- (void).cxx_destruct;
@end
