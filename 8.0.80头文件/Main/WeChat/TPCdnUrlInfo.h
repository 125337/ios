@interface TPCdnUrlInfo : NSObject
{
    NSString * _url; // +0x8
    NSString * _uIp; // +0x10
    NSString * _cdnIp; // +0x18
    NSString * _errorStr; // +0x20
}
- (id)initWithUrl:(id)arg1 uIp:(id)arg2 cdnIp:(id)arg3 errorStr:(id)arg4;
- (id)url;
- (id)uIp;
- (id)cdnIp;
- (id)errorStr;
- (void).cxx_destruct;
@end
