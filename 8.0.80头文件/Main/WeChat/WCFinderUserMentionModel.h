@interface WCFinderUserMentionModel : NSObject <PBCoding>
{
    unsigned long long _unreadLikeCount; // +0x8
    unsigned long long _unreadCommentCount; // +0x10
    unsigned long long _unreadNotifyCount; // +0x18
    unsigned long long _unreadFriendLikeFeedCount; // +0x20
    unsigned long long _unreadFriendAgreeLikeCount; // +0x28
    unsigned long long _unreadFollowAcceptMsgCount; // +0x30
    unsigned long long _unreadFollowCount; // +0x38
    unsigned long long _memberUnreadLikeCount; // +0x40
    unsigned long long _memberUnreadCommentCount; // +0x48
    unsigned long long _memberUnreadJoinCount; // +0x50
    unsigned long long _memberUnreadQACount; // +0x58
    unsigned long long _unreadOriginalEntrance; // +0x60
    unsigned long long _lastReadLikeMaxId; // +0x68
    unsigned long long _lastReadCommentMaxId; // +0x70
    unsigned long long _lastReadFansMaxId; // +0x78
    unsigned long long _lastWechatReadMaxId; // +0x80
    unsigned long long _lastReadMergeNormalMSGId; // +0x88
    unsigned long long _lastReadMergeSystemMSGId; // +0x90
    NSString * _lastHeadImageURL; // +0x98
    unsigned long long _unreadNormalMSGCount; // +0xa0
    unsigned long long _unreadSystemMSGCount; // +0xa8
    NSString * _latestNotificationBriefing; // +0xb0
    unsigned long long _latestNotificationTime; // +0xb8
    NSArray * _privateMsgEntranceList; // +0xc0
    NSString * _helperNotificationRedDotTips; // +0xc8
    FinderExposeNotificationInfo * _exposeNotificationInfo; // +0xd0
    unsigned long long _exposeNotificationInfoLastSequence; // +0xd8
    unsigned long long _serviceNotificationExposureFlags; // +0xe0
    unsigned long long _officialActivityExposureFlags; // +0xe8
}
+ (void)PBArrayAdd_unreadNotifyCount;
+ (void)PBArrayAdd_lastHeadImageURL;
+ (void)PBArrayAdd_lastWechatReadMaxId;
+ (void)PBArrayAdd_unreadOriginalEntrance;
+ (void)PBArrayAdd_lastReadMergeNormalMSGId;
+ (void)PBArrayAdd_lastReadMergeSystemMSGId;
+ (void)PBArrayAdd_unreadNormalMSGCount;
+ (void)PBArrayAdd_unreadSystemMSGCount;
+ (void)PBArrayAdd_unreadFriendLikeFeedCount;
+ (void)PBArrayAdd_unreadFriendAgreeLikeCount;
+ (void)PBArrayAdd_unreadFollowAcceptMsgCount;
+ (void)PBArrayAdd_lastReadLikeMaxId;
+ (void)PBArrayAdd_lastReadCommentMaxId;
+ (void)PBArrayAdd_lastReadFansMaxId;
+ (void)PBArrayAdd_unreadFollowCount;
+ (void)PBArrayAdd_unreadLikeCount;
+ (void)PBArrayAdd_unreadCommentCount;
+ (void)PBArrayAdd_latestNotificationBriefing;
+ (void)PBArrayAdd_latestNotificationTime;
+ (void)PBArrayAdd_memberUnreadLikeCount;
+ (void)PBArrayAdd_memberUnreadCommentCount;
+ (void)PBArrayAdd_memberUnreadJoinCount;
+ (void)PBArrayAdd_memberUnreadQACount;
+ (void)PBArrayAdd_exposeNotificationInfo;
+ (void)PBArrayAdd_exposeNotificationInfoLastSequence;
+ (void)PBArrayAdd_helperNotificationRedDotTips;
+ (void)PBArrayAdd_privateMsgEntranceList;
+ (void)PBArrayAdd_serviceNotificationExposureFlags;
+ (void)PBArrayAdd_officialActivityExposureFlags;
+ (void)initialize;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)getAuthorLastReadMaxIdWithType:(long long)arg1;
- (void)updateLastReadMaxMentionID:(unsigned long long)arg1 type:(long long)arg2;
- (void)updateUnreadCount:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)updateAuthorUnreadCount:(unsigned long long)arg1 type:(long long)arg2;
- (void)cleanMentionReadIds;
- (unsigned long long)getNormalUnreadMentionCountByUsername:(id)arg1;
- (unsigned long long)getNormalUnreadMentionCountInnerNotifyScene;
- (void)mergePrivateMsgEntranceList:(id)arg1;
- (unsigned long long)getSysPrivateMsgTotalUnreadCount;
- (unsigned long long)getMemberUnreadMentionCountByUsername:(id)arg1;
- (unsigned long long)getMemberUnreadMentionCountInnerNotifyScene;
- (unsigned long long)getAuthorUnreadNormalCount;
- (void)cleanNormalUnreadMentionCount;
- (void)cleanServiceNotificationUnreadCount;
- (void)cleanSystemMSGInfo;
- (void)cleanMemberUnreadMentionCount;
- (unsigned long long)wechatMentionBubbleCount;
- (id)wechatMentionBubbleTitle;
- (id)sysPrivateMsgEntranceWithType:(int)arg1;
- (id)sysPrivateMsgBriefingWithType:(int)arg1;
- (unsigned long long)sysPrivateMsgTimeWithType:(int)arg1;
- (unsigned long long)sysPrivateMsgUnreadCountWithType:(int)arg1;
- (unsigned long long)unreadLikeCount;
- (void)setUnreadLikeCount:(unsigned long long)arg1;
- (unsigned long long)unreadCommentCount;
- (void)setUnreadCommentCount:(unsigned long long)arg1;
- (unsigned long long)unreadNotifyCount;
- (void)setUnreadNotifyCount:(unsigned long long)arg1;
- (unsigned long long)unreadFriendLikeFeedCount;
- (void)setUnreadFriendLikeFeedCount:(unsigned long long)arg1;
- (unsigned long long)unreadFriendAgreeLikeCount;
- (void)setUnreadFriendAgreeLikeCount:(unsigned long long)arg1;
- (unsigned long long)unreadFollowAcceptMsgCount;
- (void)setUnreadFollowAcceptMsgCount:(unsigned long long)arg1;
- (unsigned long long)unreadFollowCount;
- (void)setUnreadFollowCount:(unsigned long long)arg1;
- (unsigned long long)memberUnreadLikeCount;
- (void)setMemberUnreadLikeCount:(unsigned long long)arg1;
- (unsigned long long)memberUnreadCommentCount;
- (void)setMemberUnreadCommentCount:(unsigned long long)arg1;
- (unsigned long long)memberUnreadJoinCount;
- (void)setMemberUnreadJoinCount:(unsigned long long)arg1;
- (unsigned long long)memberUnreadQACount;
- (void)setMemberUnreadQACount:(unsigned long long)arg1;
- (unsigned long long)unreadOriginalEntrance;
- (void)setUnreadOriginalEntrance:(unsigned long long)arg1;
- (unsigned long long)lastReadLikeMaxId;
- (void)setLastReadLikeMaxId:(unsigned long long)arg1;
- (unsigned long long)lastReadCommentMaxId;
- (void)setLastReadCommentMaxId:(unsigned long long)arg1;
- (unsigned long long)lastReadFansMaxId;
- (void)setLastReadFansMaxId:(unsigned long long)arg1;
- (unsigned long long)lastWechatReadMaxId;
- (void)setLastWechatReadMaxId:(unsigned long long)arg1;
- (unsigned long long)lastReadMergeNormalMSGId;
- (void)setLastReadMergeNormalMSGId:(unsigned long long)arg1;
- (unsigned long long)lastReadMergeSystemMSGId;
- (void)setLastReadMergeSystemMSGId:(unsigned long long)arg1;
- (id)lastHeadImageURL;
- (void)setLastHeadImageURL:(id)arg1;
- (unsigned long long)unreadNormalMSGCount;
- (void)setUnreadNormalMSGCount:(unsigned long long)arg1;
- (unsigned long long)unreadSystemMSGCount;
- (void)setUnreadSystemMSGCount:(unsigned long long)arg1;
- (id)latestNotificationBriefing;
- (void)setLatestNotificationBriefing:(id)arg1;
- (unsigned long long)latestNotificationTime;
- (void)setLatestNotificationTime:(unsigned long long)arg1;
- (id)privateMsgEntranceList;
- (void)setPrivateMsgEntranceList:(id)arg1;
- (id)helperNotificationRedDotTips;
- (void)setHelperNotificationRedDotTips:(id)arg1;
- (id)exposeNotificationInfo;
- (void)setExposeNotificationInfo:(id)arg1;
- (unsigned long long)exposeNotificationInfoLastSequence;
- (void)setExposeNotificationInfoLastSequence:(unsigned long long)arg1;
- (unsigned long long)serviceNotificationExposureFlags;
- (void)setServiceNotificationExposureFlags:(unsigned long long)arg1;
- (unsigned long long)officialActivityExposureFlags;
- (void)setOfficialActivityExposureFlags:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
