@interface WaitingInvoke : NSObject
{
    NSString * _name; // +0x8
    id _arguments; // +0x10
    id /* block */ _result; // +0x18
}
- (id)name;
- (void)setName:(id)arg1;
- (id)arguments;
- (void)setArguments:(id)arg1;
- (id /* block */)result;
- (void)setResult:(id /* block */)arg1;
- (void).cxx_destruct;
@end
