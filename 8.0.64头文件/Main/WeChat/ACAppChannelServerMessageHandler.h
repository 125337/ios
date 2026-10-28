@interface ACAppChannelServerMessageHandler : NSObject
{
    NSString * _name; // +0x8
    id /* block */ _syncHandlingBlock; // +0x10
    id /* block */ _asyncHandlingBlock; // +0x18
}
- (id)initWithName:(id)arg1;
- (id)name;
- (id /* block */)syncHandlingBlock;
- (void)setSyncHandlingBlock:(id /* block */)arg1;
- (id /* block */)asyncHandlingBlock;
- (void)setAsyncHandlingBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
