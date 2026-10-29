@interface MMConfSDKMemberMgr : NSObject
{
    NSMutableArray * _currentInRoomMembers; // +0x8
    NSMutableArray * _memberChangeListeners; // +0x10
    NSMutableArray * _lastSpeakers; // +0x18
    MMTimer * _timer; // +0x20
    NSMutableArray * _allTalkedMembers; // +0x28
    NSMutableArray * _cachedMembersInfo; // +0x30
    BOOL _mMuteNotification; // +0x38
    int _mRoutId; // +0x3c
    long long _mroomid; // +0x40
    long long _mImRoomId; // +0x48
    NSString * _mMultiTalkGroupId; // +0x50
    NSString * _mWxGroupId; // +0x58
    NSString * _mMultiTalkClientGroupId; // +0x60
    NSArray * _mMutilTalkGroupMemberList; // +0x68
    NSString * _mCreatedUserName; // +0x70
    NSString * _mCustomMutilTalkGrpName; // +0x78
    long long _mMemberListSeq; // +0x80
    NSString * _mSdkGroupId; // +0x88
    NSString * _mSubcribeBigUsername; // +0x90
    NSString * _mHiresScreenUsername; // +0x98
}
- (id)init;
- (void)initData;
- (void)resetMembers;
- (void)updateMembers:(id)arg1 users:(id)arg2 selfname:(id)arg3 callee:(id)arg4 callback:(id /* block */)arg5;
- (void)updateMembers:(id)arg1 users:(id)arg2 selfname:(id)arg3 callee:(id)arg4 completion:(id /* block */)arg5;
- (void)updateMembersCache:(id)arg1 reliable:(int)arg2;
- (void)updateMembersCache:(id)arg1 openid:(id)arg2 reliable:(int)arg3;
- (id)getCurrentRoomMembers;
- (id)getAllTalkedMembers;
- (BOOL)getIfAlreadyInTalkedMembers:(id)arg1;
- (id)getOpenIdByMemberId:(unsigned int)arg1;
- (void)startListenToSpeakerChange;
- (void)stopListenToSpeakerChange;
- (void)onTimerExpired;
- (void)addSpeakerChangeCallback:(id /* block */)arg1;
- (BOOL)isSpeakersEqual:(id)arg1;
- (id)getMemberByOpenid:(id)arg1;
- (id)getMemberByUsername:(id)arg1;
- (id)getMemberByMemberid:(int)arg1;
- (id)getMemberCacheByOpenid:(id)arg1;
- (void)updateMemberScreenStatus:(int)arg1 ScreenStatus:(int)arg2;
- (void)updateAllMemberScreenStatus:(id)arg1;
- (void)updateMembersScreenStatusForVideoMemberChanged:(id)arg1;
- (long long)mroomid;
- (void)setMroomid:(long long)arg1;
- (long long)mImRoomId;
- (void)setMImRoomId:(long long)arg1;
- (id)mMultiTalkGroupId;
- (void)setMMultiTalkGroupId:(id)arg1;
- (id)mWxGroupId;
- (void)setMWxGroupId:(id)arg1;
- (id)mMultiTalkClientGroupId;
- (void)setMMultiTalkClientGroupId:(id)arg1;
- (id)mMutilTalkGroupMemberList;
- (void)setMMutilTalkGroupMemberList:(id)arg1;
- (id)mCreatedUserName;
- (void)setMCreatedUserName:(id)arg1;
- (id)mCustomMutilTalkGrpName;
- (void)setMCustomMutilTalkGrpName:(id)arg1;
- (long long)mMemberListSeq;
- (void)setMMemberListSeq:(long long)arg1;
- (id)mSdkGroupId;
- (void)setMSdkGroupId:(id)arg1;
- (int)mRoutId;
- (void)setMRoutId:(int)arg1;
- (id)mSubcribeBigUsername;
- (void)setMSubcribeBigUsername:(id)arg1;
- (id)mHiresScreenUsername;
- (void)setMHiresScreenUsername:(id)arg1;
- (BOOL)mMuteNotification;
- (void)setMMuteNotification:(BOOL)arg1;
- (void).cxx_destruct;
@end
