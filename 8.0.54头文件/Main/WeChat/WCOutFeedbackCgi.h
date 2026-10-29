@interface WCOutFeedbackCgi : NSObject <PBMessageObserverDelegate>
{
    unsigned int _eventID; // +0x8
}
- (void)dealloc;
- (void)sendrequest:(int)arg1 star:(int)arg2 FbCount:(int)arg3 Fblist:(id)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
@end

