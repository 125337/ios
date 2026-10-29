@interface CGISendHandler : NSObject <PBMessageObserverDelegate>
{
    unsigned int _eventId; // +0x8
    id /* block */ _completionBlock; // +0x10
    NSString * _handleKey; // +0x18
}
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (id)handleKey;
- (void)setHandleKey:(id)arg1;
- (void).cxx_destruct;
@end
