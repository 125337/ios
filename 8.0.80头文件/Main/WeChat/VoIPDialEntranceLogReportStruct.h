@interface VoIPDialEntranceLogReportStruct : NSObject
{
    unsigned long long _inviteId; // +0x8
}
+ (void)appendPagePathsAndReportWithParams:(id)arg1;
- (id)initWithInviteId:(unsigned long long)arg1;
- (void)reportWithEntranceType:(unsigned long long)arg1 RoomType:(unsigned int)arg2 IsIlink:(BOOL)arg3 CustomInfo:(id)arg4 FailReason:(long long)arg5 chatUsername:(id)arg6;
- (unsigned long long)inviteId;
- (void)setInviteId:(unsigned long long)arg1;
@end
