@interface FlutterError : NSObject
{
    NSString * _code; // +0x8
    NSString * _message; // +0x10
    id _details; // +0x18
}
+ (id)errorWithCode:(id)arg1 message:(id)arg2 details:(id)arg3;
- (id)initWithCode:(id)arg1 message:(id)arg2 details:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)code;
- (id)message;
- (id)details;
- (void).cxx_destruct;
@end
