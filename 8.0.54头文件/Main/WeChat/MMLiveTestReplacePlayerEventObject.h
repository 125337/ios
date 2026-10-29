@interface MMLiveTestReplacePlayerEventObject : NSObject
{
    int _eventId; // +0x8
    int _disconnectedCode; // +0xc
}
- (int)eventId;
- (void)setEventId:(int)arg1;
- (int)disconnectedCode;
- (void)setDisconnectedCode:(int)arg1;
@end

