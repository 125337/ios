@interface JSEventInvokeContext : NSObject
{
    unsigned int _eventInvokeSource; // +0x8
    NSString * _eventInvokeSourceWebComptName; // +0x10
}
- (unsigned int)eventInvokeSource;
- (void)setEventInvokeSource:(unsigned int)arg1;
- (id)eventInvokeSourceWebComptName;
- (void)setEventInvokeSourceWebComptName:(id)arg1;
- (void).cxx_destruct;
@end

