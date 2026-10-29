@interface WCFinderEnhanceTriggerRecord : NSObject
{
    int _eventType; // +0x8
    NSString * _feedID; // +0x10
    double _timestamp; // +0x18
}
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (int)eventType;
- (void)setEventType:(int)arg1;
- (void).cxx_destruct;
@end
