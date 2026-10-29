@interface ZZControlTarget : NSObject
{
    id /* block */ _senderBlock; // +0x8
    unsigned long long _controlEvents; // +0x10
}
- (id)initWithSenderBlock:(id /* block */)arg1 controlEvents:(unsigned long long)arg2;
- (void)senderMethod:(id)arg1;
- (id /* block */)senderBlock;
- (void)setSenderBlock:(id /* block */)arg1;
- (unsigned long long)controlEvents;
- (void)setControlEvents:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

