@interface MMServiceLaunchTask : NSObject
{
    NSString * _name; // +0x8
    id /* block */ _execution; // +0x10
}
- (id)name;
- (void)setName:(id)arg1;
- (id /* block */)execution;
- (void)setExecution:(id /* block */)arg1;
- (void).cxx_destruct;
@end
