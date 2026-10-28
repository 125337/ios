@interface WCBusyThreadProfile : NSObject
{
    unsigned int _thread; // +0x8
    NSArray * _callTree; // +0x10
}
- (id)initWithThread:(unsigned int)arg1 callTree:(id)arg2;
- (unsigned int)thread;
- (void)setThread:(unsigned int)arg1;
- (id)callTree;
- (void)setCallTree:(id)arg1;
- (void).cxx_destruct;
@end
