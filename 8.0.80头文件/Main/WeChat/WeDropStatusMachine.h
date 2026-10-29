@interface WeDropStatusMachine : MMObject
{
    WeDropEvent * _event; // +0x8
}
- (id)initWithDefaultEvent:(id)arg1;
- (BOOL)tryEnterEvent:(id)arg1;
- (void)stopMachine;
- (id)event;
- (void)setEvent:(id)arg1;
- (void).cxx_destruct;
@end
