@interface ElderModeLogicOplogInfo : NSObject
{
    BOOL _targetStatus; // +0x8
    unsigned int _eventID; // +0xc
}
+ (id)oplogInfoWithEventID:(unsigned int)arg1 targetStatus:(BOOL)arg2;
- (void)handleOplogFail;
- (void)handleOplogSuccess;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (BOOL)targetStatus;
- (void)setTargetStatus:(BOOL)arg1;
@end

