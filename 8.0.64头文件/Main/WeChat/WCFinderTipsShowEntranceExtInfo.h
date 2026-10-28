@interface WCFinderTipsShowEntranceExtInfo : NSObject <PBCoding>
{
    unsigned int _displayTabType; // +0x8
    int _refreshStatus; // +0xc
    int _feedObjectType; // +0x10
    NSString * _tipsUuid; // +0x18
    unsigned long long _objectId; // +0x20
    NSString * _objectNonceId; // +0x28
    NSString * _userName; // +0x30
    NSMutableArray * _multiUsernames; // +0x38
    NSData * _tabTipsByPassInfo; // +0x40
    FinderSyncTipsShowInfo * _bubbleInfo; // +0x48
    long long _snsFriendLikeCount; // +0x50
    NSString * _localObjectId; // +0x58
    NSString * _reportExtInfo; // +0x60
}
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_displayTabType;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_multiUsernames;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_tabTipsByPassInfo;
+ (void)PBArrayAdd_bubbleInfo;
+ (void)PBArrayAdd_refreshStatus;
+ (void)PBArrayAdd_feedObjectType;
+ (void)PBArrayAdd_snsFriendLikeCount;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_localObjectId;
+ (void)initialize;
+ (id)extInfoWith:(id)arg1 tipsUuid:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)getPBPropertyTable;
- (BOOL)isVaildExtInfo;
- (id)checkToReturnExtReportDictionaryByCtrlExtInfo:(id)arg1;
- (id)redDotReportExtInfoByCtrlExtInfo:(id)arg1;
- (id)description;
- (BOOL)isSameTipsUuid:(id)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (unsigned int)displayTabType;
- (void)setDisplayTabType:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)multiUsernames;
- (void)setMultiUsernames:(id)arg1;
- (id)tabTipsByPassInfo;
- (void)setTabTipsByPassInfo:(id)arg1;
- (id)bubbleInfo;
- (void)setBubbleInfo:(id)arg1;
- (int)refreshStatus;
- (void)setRefreshStatus:(int)arg1;
- (int)feedObjectType;
- (void)setFeedObjectType:(int)arg1;
- (long long)snsFriendLikeCount;
- (void)setSnsFriendLikeCount:(long long)arg1;
- (id)localObjectId;
- (void)setLocalObjectId:(id)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
