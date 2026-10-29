@interface MultiTalkGroupMemberItem : MMObject <PBCoding>
{
    int _status; // +0x8
    int _reason; // +0xc
    int _holdStatus; // +0x10
    NSString * _userName; // +0x18
    NSString * _inviteUserName; // +0x20
    long long _inviteTime; // +0x28
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_inviteUserName;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_reason;
+ (void)PBArrayAdd_inviteTime;
+ (void)PBArrayAdd_holdStatus;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)inviteUserName;
- (void)setInviteUserName:(id)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (int)reason;
- (void)setReason:(int)arg1;
- (long long)inviteTime;
- (void)setInviteTime:(long long)arg1;
- (int)holdStatus;
- (void)setHoldStatus:(int)arg1;
- (void).cxx_destruct;
@end

