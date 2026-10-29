@interface WeDropReceiveEventHelper : MMObject
{
    NSMutableDictionary * _eventDict; // +0x8
}
+ (id)getEventForStatus:(unsigned long long)arg1;
+ (id)shared;
- (void)registerEvents;
- (id)eventDict;
- (void)setEventDict:(id)arg1;
- (void).cxx_destruct;
@end
