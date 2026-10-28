@interface MMFinderLiveFansGroupInfo : NSObject <WCFinderContactExt, IContactMgrExt>
{
    BOOL _fansGroupCreated; // +0x8
    BOOL _enableFansGroup; // +0x9
    BOOL _selfFansGroupSuperfanEnabled; // +0xa
    BOOL _isSuperfanEnabled; // +0xb
    BOOL _selfFansGroupAnchorCardShown; // +0xc
    BOOL _selfJoinedSuperfan; // +0xd
    BOOL _enableFansGroupNotice; // +0xe
    BOOL _isSelfAnchor; // +0xf
    BOOL _localJoined; // +0x10
    BOOL _isSelfJoined; // +0x11
    BOOL _hasRegisterExtension; // +0x12
    unsigned int _memberCount; // +0x14
    unsigned int _selfFansGroupAnchorCardVisibility; // +0x18
    unsigned int _superfanCount; // +0x1c
    unsigned int _defaultIntimacy; // +0x20
    unsigned int _fansGroupNoticeMinLevel; // +0x24
    unsigned int _fansGroupNoticeVibility; // +0x28
    unsigned long long _currentState; // +0x30
    NSString * _superfanUpgradePageUrl; // +0x38
    NSString * _fansGroupName; // +0x40
    NSString * _fansGroupDetailUrl; // +0x48
    unsigned long long _currentFollowState; // +0x50
    NSString * _fansGroupNotice; // +0x58
    NSString * _fansGroupNoticeImageUrl; // +0x60
    FinderLiveFanClubContacts * _anchorCard; // +0x68
    NSString * _anchorUsrName; // +0x70
    WCFinderContact * _anchorContact; // +0x78
}
+ (id)createFansGroupInfoFromFansClubInfo:(id)arg1 isAnchor:(BOOL)arg2 anchorUsrName:(id)arg3 selfJoined:(BOOL)arg4;
+ (id)createFansGroupInfoByAnchorWithName:(id)arg1 anchorUsrName:(id)arg2;
- (void)createFansGroupWithName:(id)arg1;
- (id)init;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)localEnableSelfCreatedSuperfan;
- (id)liveTask;
- (id)anchorContact;
- (id)superfanUpgradePageUrl;
- (void)setSelfFansGroupSuperfanEnabled:(BOOL)arg1;
- (void)setSelfJoinedSuperfan:(BOOL)arg1;
- (BOOL)checkNewSelfJoinedValid:(BOOL)arg1;
- (BOOL)isBizFollowed;
- (void)updateSelfJoined:(BOOL)arg1;
- (void)updateCurrentFansGroupStateForJoinGroup;
- (void)updateCurrentFansGroupStateForFollowStateChanged;
- (void)updateCurrentFansGroupState;
- (void)updateFromFansClubInfo:(id)arg1;
- (void)updateForFinderDataItemChanged;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (unsigned int)memberCount;
- (void)setMemberCount:(unsigned int)arg1;
- (unsigned long long)currentState;
- (void)setCurrentState:(unsigned long long)arg1;
- (BOOL)fansGroupCreated;
- (void)setFansGroupCreated:(BOOL)arg1;
- (BOOL)enableFansGroup;
- (void)setEnableFansGroup:(BOOL)arg1;
- (BOOL)selfFansGroupSuperfanEnabled;
- (BOOL)isSuperfanEnabled;
- (void)setIsSuperfanEnabled:(BOOL)arg1;
- (BOOL)selfFansGroupAnchorCardShown;
- (void)setSelfFansGroupAnchorCardShown:(BOOL)arg1;
- (unsigned int)selfFansGroupAnchorCardVisibility;
- (void)setSelfFansGroupAnchorCardVisibility:(unsigned int)arg1;
- (unsigned int)superfanCount;
- (void)setSuperfanCount:(unsigned int)arg1;
- (void)setSuperfanUpgradePageUrl:(id)arg1;
- (BOOL)selfJoinedSuperfan;
- (id)fansGroupName;
- (void)setFansGroupName:(id)arg1;
- (id)fansGroupDetailUrl;
- (void)setFansGroupDetailUrl:(id)arg1;
- (unsigned int)defaultIntimacy;
- (void)setDefaultIntimacy:(unsigned int)arg1;
- (unsigned long long)currentFollowState;
- (void)setCurrentFollowState:(unsigned long long)arg1;
- (id)fansGroupNotice;
- (void)setFansGroupNotice:(id)arg1;
- (id)fansGroupNoticeImageUrl;
- (void)setFansGroupNoticeImageUrl:(id)arg1;
- (unsigned int)fansGroupNoticeMinLevel;
- (void)setFansGroupNoticeMinLevel:(unsigned int)arg1;
- (BOOL)enableFansGroupNotice;
- (void)setEnableFansGroupNotice:(BOOL)arg1;
- (unsigned int)fansGroupNoticeVibility;
- (void)setFansGroupNoticeVibility:(unsigned int)arg1;
- (id)anchorCard;
- (void)setAnchorCard:(id)arg1;
- (id)anchorUsrName;
- (void)setAnchorUsrName:(id)arg1;
- (BOOL)isSelfAnchor;
- (void)setIsSelfAnchor:(BOOL)arg1;
- (BOOL)localJoined;
- (void)setLocalJoined:(BOOL)arg1;
- (BOOL)isSelfJoined;
- (void)setIsSelfJoined:(BOOL)arg1;
- (void)setAnchorContact:(id)arg1;
- (BOOL)hasRegisterExtension;
- (void)setHasRegisterExtension:(BOOL)arg1;
- (void).cxx_destruct;
@end
