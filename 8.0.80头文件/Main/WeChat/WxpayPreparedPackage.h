@interface WxpayPreparedPackage : NSObject
{
    NSString * _appId; // +0x8
    NSString * _version; // +0x10
    NSString * _digest; // +0x18
    NSString * _path; // +0x20
    NSString * _page; // +0x28
    NSString * _source; // +0x30
    NSString * _type; // +0x38
    unsigned long long _lease; // +0x40
}
- (id)initWithResponse:(id)arg1;
- (id)appId;
- (id)version;
- (id)digest;
- (id)path;
- (id)page;
- (id)source;
- (id)type;
- (unsigned long long)lease;
- (void).cxx_destruct;
@end
