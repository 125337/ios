@interface TingPlayerStateMachineRoute : NSObject
{
    int _source; // +0x8
    int _destination; // +0xc
    NSArray * _events; // +0x10
}
- (id)initWithSource:(int)arg1 destination:(int)arg2 event:(id)arg3;
- (int)source;
- (void)setSource:(int)arg1;
- (int)destination;
- (void)setDestination:(int)arg1;
- (id)events;
- (void)setEvents:(id)arg1;
- (void).cxx_destruct;
@end

