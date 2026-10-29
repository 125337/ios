@interface WAWeAppAutoTestContext : NSObject
{
    NSDictionary * _payload; // +0x8
    NSDictionary * _data; // +0x10
    WAWeAppAutoTestDriver * _driver; // +0x18
    double _settleInterval; // +0x20
}
- (id)initWithPayload:(id)arg1 data:(id)arg2 driver:(id)arg3;
- (id)payload;
- (id)data;
- (id)driver;
- (double)settleInterval;
- (void).cxx_destruct;
@end
