@interface AgentMagicBrushError : NSObject
{
    long long _containerId; // +0x8
    unsigned long long _code; // +0x10
    NSString * _message; // +0x18
}
+ (id)makeWithContainerId:(long long)arg1 code:(unsigned long long)arg2 message:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)containerId;
- (void)setContainerId:(long long)arg1;
- (unsigned long long)code;
- (void)setCode:(unsigned long long)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void).cxx_destruct;
@end
