@interface TPProtocolInfo : NSObject
{
    NSString * _protocolName; // +0x8
    NSString * _protocolVersion; // +0x10
}
- (id)initWithProtocolName:(id)arg1 protocolVersion:(id)arg2;
- (id)protocolName;
- (id)protocolVersion;
- (void).cxx_destruct;
@end
