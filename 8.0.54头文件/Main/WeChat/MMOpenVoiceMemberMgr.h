@interface MMOpenVoiceMemberMgr : NSObject
{
    NSMutableArray * _lastSpeakers; // +0x8
    NSMutableArray * _currentInRoomMembers; // +0x10
    NSMutableArray * _currVideoMembers; // +0x18
    NSMutableArray * _memberChangeListeners; // +0x20
    MMTimer * _timer; // +0x28
}
- (id)init;
- (void)resetMembers;
- (void)addSpeakerChangeCallback:(id /* block */)arg1;
- (id)getCurrentRoomMembers;
- (id)getCurrentVideoMembers;
- (id)getMemberByOpenId:(id)arg1;
- (id)getOpenIdByMemberId:(unsigned int)arg1;
- (void)startListenToSpeakerChange;
- (void)stopListenToSpeakerChange;
- (void)updateMembers:(id)arg1;
- (void)updateAvMembers:(id)arg1;
- (void)onTimerExpired;
- (BOOL)isSpeakersEqual:(id)arg1;
- (void).cxx_destruct;
@end

