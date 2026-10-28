@interface MMConfSDKMember : NSObject <MultiTalkMemberProtocol>
{
    int _memberId; // +0x8
    int _mStatus; // +0xc
    int _mReason; // +0x10
    int _mHoldStatus; // +0x14
    int _mScreenStatus; // +0x18
    NSString * _openId; // +0x20
    NSString * _mUserName; // +0x28
    NSString * _mInviteUserName; // +0x30
    long long _mInviteTime; // +0x38
    NSString * _callerName; // +0x40
}
- (unsigned long long)screenSharingPresetationStatus;
- (id)description;
- (int)memberId;
- (void)setMemberId:(int)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (id)mUserName;
- (void)setMUserName:(id)arg1;
- (id)mInviteUserName;
- (void)setMInviteUserName:(id)arg1;
- (int)mStatus;
- (void)setMStatus:(int)arg1;
- (int)mReason;
- (void)setMReason:(int)arg1;
- (long long)mInviteTime;
- (void)setMInviteTime:(long long)arg1;
- (int)mHoldStatus;
- (void)setMHoldStatus:(int)arg1;
- (int)mScreenStatus;
- (void)setMScreenStatus:(int)arg1;
- (id)callerName;
- (void)setCallerName:(id)arg1;
- (void).cxx_destruct;
@end
