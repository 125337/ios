@interface WxpaySelectedBaseLib : NSObject
{
    NSString * _path; // +0x8
    NSString * _version; // +0x10
    NSString * _source; // +0x18
    unsigned long long _lease; // +0x20
}
- (id)initWithPath:(id)arg1 version:(id)arg2 source:(id)arg3 lease:(unsigned long long)arg4;
- (id)path;
- (id)version;
- (id)source;
- (unsigned long long)lease;
- (void).cxx_destruct;
@end
