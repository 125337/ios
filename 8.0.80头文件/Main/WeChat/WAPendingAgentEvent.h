@interface WAPendingAgentEvent : NSObject
{
    Agent2ClientEvent * _event; // +0x8
    double _enqueueTs; // +0x10
    id /* block */ _broadcastBlock; // +0x18
    NSString * _typeDesc; // +0x20
}
- (id)event;
- (void)setEvent:(id)arg1;
- (double)enqueueTs;
- (void)setEnqueueTs:(double)arg1;
- (id /* block */)broadcastBlock;
- (void)setBroadcastBlock:(id /* block */)arg1;
- (id)typeDesc;
- (void)setTypeDesc:(id)arg1;
- (void).cxx_destruct;
@end
