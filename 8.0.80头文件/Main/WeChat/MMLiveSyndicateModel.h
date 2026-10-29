@interface MMLiveSyndicateModel : NSObject
{
    BOOL _enablePlatformSettlement; // +0x8
    unsigned long long _identifier; // +0x10
    NSString * _invitationLinkUri; // +0x18
    unsigned long long _status; // +0x20
    unsigned long long _settlementMode; // +0x28
    unsigned long long _currentRole; // +0x30
    WCFinderContact * _initiator; // +0x38
    unsigned long long _maximumParticipantsCount; // +0x40
    unsigned long long _expirationUnixEpochTimeInMillisecond; // +0x48
    unsigned long long _anchorPermissionFlags; // +0x50
    NSMutableArray * _participantsImpl; // +0x58
}
+ (id)modelWithBackendEntity:(id)arg1 previousInvitationLinkUri:(id)arg2 maximumParticipantsCount:(unsigned long long)arg3 enablePlatformSettlement:(BOOL)arg4;
+ (id)modelWithCreationResponse:(id)arg1 settlementMode:(unsigned long long)arg2 initiatorContact:(id)arg3 maximumParticipantsCount:(unsigned long long)arg4;
+ (id)modelForParticipantWaitingWithSyndicateId:(unsigned long long)arg1 settlementMode:(unsigned long long)arg2 initiatorContact:(id)arg3;
+ (id)membersDiffBetweenNewModel:(id)arg1 andOldModel:(id)arg2;
- (id)participants;
- (void)addParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)updateInvitationLinkUri:(id)arg1;
- (void)updateAnchorPermissionFlags:(unsigned long long)arg1;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (id)invitationLinkUri;
- (void)setInvitationLinkUri:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)settlementMode;
- (void)setSettlementMode:(unsigned long long)arg1;
- (unsigned long long)currentRole;
- (void)setCurrentRole:(unsigned long long)arg1;
- (id)initiator;
- (void)setInitiator:(id)arg1;
- (unsigned long long)maximumParticipantsCount;
- (void)setMaximumParticipantsCount:(unsigned long long)arg1;
- (BOOL)enablePlatformSettlement;
- (void)setEnablePlatformSettlement:(BOOL)arg1;
- (unsigned long long)expirationUnixEpochTimeInMillisecond;
- (void)setExpirationUnixEpochTimeInMillisecond:(unsigned long long)arg1;
- (unsigned long long)anchorPermissionFlags;
- (void)setAnchorPermissionFlags:(unsigned long long)arg1;
- (id)participantsImpl;
- (void)setParticipantsImpl:(id)arg1;
- (void).cxx_destruct;
@end
