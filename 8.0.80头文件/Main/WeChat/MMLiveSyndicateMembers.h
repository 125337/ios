@interface MMLiveSyndicateMembers : NSObject
{
    WCFinderContact * _initiator; // +0x8
    NSArray * _participants; // +0x10
    NSString * _avatarUri; // +0x18
    NSArray * _members; // +0x20
    NSArray * _memberDisplayNames; // +0x28
    NSString * _identifier; // +0x30
}
- (id)initWithInitiator:(id)arg1 participants:(id)arg2 avatarUri:(id)arg3;
- (void)setInitiator:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setAvatarUri:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)removeUpdateListener:(id)arg1;
- (BOOL)containsParticipantWithFinderUsername:(id)arg1;
- (void)updateMembers;
- (id)initiator;
- (id)participants;
- (id)avatarUri;
- (id)members;
- (void)setMembers:(id)arg1;
- (id)memberDisplayNames;
- (void)setMemberDisplayNames:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
