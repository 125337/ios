@interface MMWebJSContextException : NSObject
{
    NSString * _contextName; // +0x8
    NSString * _exceptionName; // +0x10
    NSString * _message; // +0x18
    NSString * _stack; // +0x20
}
- (id)contextName;
- (void)setContextName:(id)arg1;
- (id)exceptionName;
- (void)setExceptionName:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (void).cxx_destruct;
@end

