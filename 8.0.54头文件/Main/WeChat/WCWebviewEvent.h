@interface WCWebviewEvent : MMObject <WCWebviewEvent>
{
    BOOL _bCanceled; // +0x8
    NSObject * _eventContext; // +0x10
}
- (unsigned long long)eventHashValue;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)bCanceled;
- (void)setBCanceled:(BOOL)arg1;
- (id)eventContext;
- (void)setEventContext:(id)arg1;
- (void).cxx_destruct;
@end

