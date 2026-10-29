@interface FWFWKSecurityOriginData : NSObject
{
    NSString * _host; // +0x8
    long long _port; // +0x10
    NSString * _protocol; // +0x18
}
+ (id)makeWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)host;
- (void)setHost:(id)arg1;
- (long long)port;
- (void)setPort:(long long)arg1;
- (id)protocol;
- (void)setProtocol:(id)arg1;
- (void).cxx_destruct;
@end
