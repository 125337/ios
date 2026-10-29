@interface QBDNSRecord : NSObject
{
    BOOL _expired; // +0x8
    int _ttl; // +0xc
    long long _timeStamp; // +0x10
    NSString * _value; // +0x18
}
- (id)init:(id)arg1 ttl:(int)arg2;
- (BOOL)expired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)value;
@end

