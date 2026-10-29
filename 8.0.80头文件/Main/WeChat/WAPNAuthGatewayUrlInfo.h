@interface WAPNAuthGatewayUrlInfo : NSObject
{
    long long _channel; // +0x8
    NSString * _gatewayUrl; // +0x10
}
- (long long)channel;
- (void)setChannel:(long long)arg1;
- (id)gatewayUrl;
- (void)setGatewayUrl:(id)arg1;
- (void).cxx_destruct;
@end
