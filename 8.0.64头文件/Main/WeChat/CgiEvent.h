@interface CgiEvent : NSObject
{
    unsigned int _eventId; // +0x8
    id /* block */ _completion; // +0x10
    ProtobufCGIWrap * _pbWrap; // +0x18
}
+ (id)eventWithId:(unsigned int)arg1 pbWrap:(id)arg2 completion:(id /* block */)arg3;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)pbWrap;
- (void)setPbWrap:(id)arg1;
- (void).cxx_destruct;
@end
