@interface VoIPInviteMemberReportStruct : NSObject
{
    int _roomType; // +0x8
    int _memberRole; // +0xc
    int _callType; // +0x10
    int _inviteScene; // +0x14
    long long _roomId; // +0x18
    unsigned long long _inviteSessionId; // +0x20
    NSNumber * _recentInviteeDisplayCnt; // +0x28
    NSNumber * _recentInviteeTotalCnt; // +0x30
    long long _recentInviteeCheckedCnt; // +0x38
    long long _recentInviteeActiveCheckedCnt; // +0x40
    long long _listActiveCheckedCnt; // +0x48
    long long _searchActiveCheckedCnt; // +0x50
    unsigned long long _invitePageExitReason; // +0x58
    NSString * _inviteeUsernameList; // +0x60
    NSString * _roomMemberCountList; // +0x68
}
- (void)genInviteSessionId;
- (void)setInvitedUsers:(id)arg1;
- (void)setMemberCountWithFriend:(int)arg1 stranger:(int)arg2;
- (id)fetchCustomReportParams;
- (void)reportInviteBtnClick;
- (void)reportInviteFailWithType:(int)arg1;
- (void)reportInvitePageIn;
- (void)reportInvitePageOut;
- (void)reportInviteNextBtnClickWithInvitedUsers:(id)arg1;
- (void)reportInviteConfirmBtnClickWithInvitedUsers:(id)arg1;
- (int)roomType;
- (void)setRoomType:(int)arg1;
- (long long)roomId;
- (void)setRoomId:(long long)arg1;
- (int)memberRole;
- (void)setMemberRole:(int)arg1;
- (int)callType;
- (void)setCallType:(int)arg1;
- (int)inviteScene;
- (void)setInviteScene:(int)arg1;
- (unsigned long long)inviteSessionId;
- (void)setInviteSessionId:(unsigned long long)arg1;
- (id)recentInviteeDisplayCnt;
- (void)setRecentInviteeDisplayCnt:(id)arg1;
- (id)recentInviteeTotalCnt;
- (void)setRecentInviteeTotalCnt:(id)arg1;
- (long long)recentInviteeCheckedCnt;
- (void)setRecentInviteeCheckedCnt:(long long)arg1;
- (long long)recentInviteeActiveCheckedCnt;
- (void)setRecentInviteeActiveCheckedCnt:(long long)arg1;
- (long long)listActiveCheckedCnt;
- (void)setListActiveCheckedCnt:(long long)arg1;
- (long long)searchActiveCheckedCnt;
- (void)setSearchActiveCheckedCnt:(long long)arg1;
- (unsigned long long)invitePageExitReason;
- (void)setInvitePageExitReason:(unsigned long long)arg1;
- (id)inviteeUsernameList;
- (void)setInviteeUsernameList:(id)arg1;
- (id)roomMemberCountList;
- (void)setRoomMemberCountList:(id)arg1;
- (void).cxx_destruct;
@end
