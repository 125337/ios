@interface WCFinderRedDotCtrlInfo : NSObject <PBCoding>
{
    BOOL _ignoreValid; // +0x8
    BOOL _isByClientMock; // +0x9
    int _subType; // +0xc
    unsigned int _expireTime; // +0x10
    unsigned int _ignoreDisplayTabType; // +0x14
    int _saveStrategy; // +0x18
    NSMutableDictionary * _dicShowInfo; // +0x20
    NSMutableDictionary * _dicShowRelation; // +0x28
    NSString * _selfFinderUsername; // +0x30
    NSString * _tipsID; // +0x38
    NSString * _tipsUuid; // +0x40
    unsigned long long _priority; // +0x48
    unsigned long long _type; // +0x50
    unsigned long long _businessType; // +0x58
    NSData * _extInfo; // +0x60
    NSArray * _showInfos; // +0x68
    long long _updateTimeSecond; // +0x70
    unsigned long long _localReceiveMsTimeStamp; // +0x78
    long long _beginShowTime; // +0x80
    NSString * _internalFeedbackUrl; // +0x88
    NSString * _groupId; // +0x90
    NSData * _sessionBypassInfo; // +0x98
    NSData * _reddotExposeBuff; // +0xa0
    FinderRedDotExtInfo * _mockRedDotExtInfo; // +0xa8
    NSString * _reportExtInfo; // +0xb0
    ClearPrevReddotFeedStrategy * _clearPrevReddotFeedStrategy; // +0xb8
}
+ (void)PBArrayAdd_tipsID;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_updateTimeSecond;
+ (void)PBArrayAdd_showInfos;
+ (void)PBArrayAdd_dicShowInfo;
+ (void)PBArrayAdd_dicShowRelation;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_localReceiveMsTimeStamp;
+ (void)PBArrayAdd_beginShowTime;
+ (void)PBArrayAdd_ignoreDisplayTabType;
+ (void)PBArrayAdd_ignoreValid;
+ (void)PBArrayAdd_internalFeedbackUrl;
+ (void)PBArrayAdd_selfFinderUsername;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_sessionBypassInfo;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_saveStrategy;
+ (void)PBArrayAdd_clearPrevReddotFeedStrategy;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_reddotExposeBuff;
+ (void)initialize;
+ (id)ctrlInfoWithAffPB:(id)arg1;
+ (id)_ctrlInfoBaseParse:(id)arg1;
+ (id)_ctrlInfoByAff:(id)arg1;
+ (id)ctrlInfo:(id)arg1;
- (void)reportSDKReceiveIfNeed;
- (id)toReddotInfo;
- (id)getPBPropertyTable;
- (unsigned long long)businessType;
- (BOOL)isFinderOrLiveRedDot;
- (void)addIndependentShowInfo:(id)arg1 childPath:(id)arg2;
- (BOOL)isVaildItem;
- (BOOL)updateRedDotShowInfoAtPath:(id)arg1 showInfo:(id)arg2;
- (id)showInfoAtPath:(id)arg1;
- (BOOL)isShowInfoEmpty;
- (id)removePathInfoWithKey:(id)arg1;
- (void)_handleDisposeReportLogicWithParentPath:(id)arg1 childPath:(id)arg2;
- (long long)discoveryTabRedDotBusinessType;
- (long long)_discoveryTabRedDotBusinessType:(id)arg1;
- (void)removeDependentReleation:(id)arg1 childPath:(id)arg2;
- (id)finderExtInfo;
- (BOOL)isPriorityHigherOrSameThan:(id)arg1;
- (BOOL)isPriorityHigherThan:(id)arg1;
- (id)generateRedDotSyncInfo;
- (id)genAffRedDotCtrlInfo;
- (id)genPBRedDotCtrlInfo;
- (BOOL)isExpireCtrlInfo;
- (id)description;
- (id)debugDescription;
- (BOOL)isIgnoreFreqLimitRedDot;
- (BOOL)openJumpInfoPage;
- (BOOL)hasRedDotPath:(id)arg1;
- (BOOL)isUltraHighPriorityRedDot;
- (BOOL)isSafeContactBanRedDot;
- (BOOL)isGeCommentDetailPrefetchDisable;
- (id)pinToTopObjectInfo;
- (unsigned long long)bubbleTopFeedId;
- (id)dicShowInfo;
- (void)setDicShowInfo:(id)arg1;
- (id)dicShowRelation;
- (void)setDicShowRelation:(id)arg1;
- (id)selfFinderUsername;
- (void)setSelfFinderUsername:(id)arg1;
- (id)tipsID;
- (void)setTipsID:(id)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setBusinessType:(unsigned long long)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)showInfos;
- (void)setShowInfos:(id)arg1;
- (long long)updateTimeSecond;
- (void)setUpdateTimeSecond:(long long)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (unsigned long long)localReceiveMsTimeStamp;
- (void)setLocalReceiveMsTimeStamp:(unsigned long long)arg1;
- (long long)beginShowTime;
- (void)setBeginShowTime:(long long)arg1;
- (unsigned int)ignoreDisplayTabType;
- (void)setIgnoreDisplayTabType:(unsigned int)arg1;
- (BOOL)ignoreValid;
- (void)setIgnoreValid:(BOOL)arg1;
- (id)internalFeedbackUrl;
- (void)setInternalFeedbackUrl:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)sessionBypassInfo;
- (void)setSessionBypassInfo:(id)arg1;
- (id)reddotExposeBuff;
- (void)setReddotExposeBuff:(id)arg1;
- (BOOL)isByClientMock;
- (void)setIsByClientMock:(BOOL)arg1;
- (id)mockRedDotExtInfo;
- (void)setMockRedDotExtInfo:(id)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (int)saveStrategy;
- (void)setSaveStrategy:(int)arg1;
- (id)clearPrevReddotFeedStrategy;
- (void)setClearPrevReddotFeedStrategy:(id)arg1;
- (void).cxx_destruct;
@end

