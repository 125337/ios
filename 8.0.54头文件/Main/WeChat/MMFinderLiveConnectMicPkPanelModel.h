@interface MMFinderLiveConnectMicPkPanelModel : NSObject
{
    BOOL _isAnchorPkChangeLayoutEnabled; // +0x8
    MMFinderLiveConnectMicPKInfo * _pkInfo; // +0x10
    NSArray * _connectAnchorUserList; // +0x18
    NSArray * _connectAudienceUserList; // +0x20
    NSArray * _applyAudienceUserList; // +0x28
    NSArray * _waitConnectAudienceList; // +0x30
    MMFinderLiveConnectMicUser * _selfMicUser; // +0x38
    NSDictionary * _invitedMicAudienceDict; // +0x40
    NSArray * _otherRoomConnectAudienceUserList; // +0x48
}
- (id)pkInfo;
- (void)setPkInfo:(id)arg1;
- (id)connectAnchorUserList;
- (void)setConnectAnchorUserList:(id)arg1;
- (id)connectAudienceUserList;
- (void)setConnectAudienceUserList:(id)arg1;
- (id)applyAudienceUserList;
- (void)setApplyAudienceUserList:(id)arg1;
- (id)waitConnectAudienceList;
- (void)setWaitConnectAudienceList:(id)arg1;
- (id)selfMicUser;
- (void)setSelfMicUser:(id)arg1;
- (id)invitedMicAudienceDict;
- (void)setInvitedMicAudienceDict:(id)arg1;
- (id)otherRoomConnectAudienceUserList;
- (void)setOtherRoomConnectAudienceUserList:(id)arg1;
- (BOOL)isAnchorPkChangeLayoutEnabled;
- (void)setIsAnchorPkChangeLayoutEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

