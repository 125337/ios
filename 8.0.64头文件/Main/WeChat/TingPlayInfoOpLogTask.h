@interface TingPlayInfoOpLogTask : NSObject
{
    BOOL _isOn; // +0x8
    unsigned int _eventId; // +0xc
}
+ (id)oplogInfoWithEventID:(unsigned int)arg1 targetStatus:(BOOL)arg2;
- (void)handleOplogFail;
- (void)handleOplogSuccess;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (BOOL)isOn;
- (void)setIsOn:(BOOL)arg1;
@end
