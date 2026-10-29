@interface WCWebviewNavigationEvent : WCWebviewEvent
{
    unsigned int _eventValue; // +0x18
}
- (id)initWithEventValue:(unsigned int)arg1;
- (unsigned long long)eventHashValue;
- (id)eventDescription;
- (unsigned int)eventValue;
- (void)setEventValue:(unsigned int)arg1;
@end

