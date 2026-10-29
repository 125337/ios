@interface WAPNAuthFlutterHostInfo : NSObject
{
    FlutterMethodChannel * _channel; // +0x8
    NSString * _token; // +0x10
}
- (id)initWithChannel:(id)arg1 token:(id)arg2;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (void).cxx_destruct;
@end
