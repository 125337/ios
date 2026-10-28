@interface WCFinderUserMentionModel : NSObject <PBCoding>
{
    NSData * _lastLikeBuffer; // +0x8
    NSData * _lastCommentBuffer; // +0x10
    NSData * _lastFansBuffer; // +0x18
    NSData * _lastMergeMentionBuffer; // +0x20
    NSData * _lastWeChatLikeBuffer; // +0x28
    NSData * _lastWeChatCommentBuffer; // +0x30
    NSData * _lastMergeSystemMSGBuffer; // +0x38
    NSData * _lastMemberLikeBuffer; // +0x40
    NSData * _lastMemberCommentBuffer; // +0x48
    NSData * _lastMemberJoinBuffer; // +0x50
    unsigned long long _unreadLikeCount; // +0x58
    unsigned long long _unreadCommentCount; // +0x60
    unsigned long long _unreadNotifyCount; // +0x68
    unsigned long long _unreadFriendLikeFeedCount; // +0x70
    unsigned long long _unreadFriendAgreeLikeCount; // +0x78
    unsigned long long _unreadFollowAcceptMsgCount; // +0x80
    unsigned long long _unreadFollowCount; // +0x88
    unsigned long long _memberUnreadLikeCount; // +0x90
    unsigned long long _memberUnreadCommentCount; // +0x98
    unsigned long long _memberUnreadJoinCount; // +0xa0
    unsigned long long _memberUnreadQACount; // +0xa8
    unsigned long long _unreadOriginalEntrance; // +0xb0
    unsigned long long _lastReadLikeMaxId; // +0xb8
    unsigned long long _lastReadCommentMaxId; // +0xc0
    unsigned long long _lastReadFansMaxId; // +0xc8
    unsigned long long _lastWechatReadMaxId; // +0xd0
    unsigned long long _lastReadMergeNormalMSGId; // +0xd8
    unsigned long long _lastReadMergeSystemMSGId; // +0xe0
    NSString * _lastHeadImageURL; // +0xe8
    unsigned long long _unreadNormalMSGCount; // +0xf0
    unsigned long long _unreadSystemMSGCount; // +0xf8
    NSString * _latestNotificationBriefing; // +0x100
    unsigned long long _latestNotificationTime; // +0x108
    NSString * _helperNotificationRedDotTips; // +0x110
    FinderExposeNotificationInfo * _exposeNotificationInfo; // +0x118
    unsigned long long _exposeNotificationInfoLastSequence; // +0x120
}
+ (void)PBArrayAdd_lastMergeSystemMSGBuffer;
+ (void)PBArrayAdd_unreadNotifyCount;
+ (void)PBArrayAdd_lastHeadImageURL;
+ (void)PBArrayAdd_lastWechatReadMaxId;
+ (void)PBArrayAdd_unreadOriginalEntrance;
+ (void)PBArrayAdd_lastMergeMentionBuffer;
+ (void)PBArrayAdd_lastReadMergeNormalMSGId;
+ (void)PBArrayAdd_lastReadMergeSystemMSGId;
+ (void)PBArrayAdd_unreadNormalMSGCount;
+ (void)PBArrayAdd_unreadSystemMSGCount;
+ (void)PBArrayAdd_unreadFriendLikeFeedCount;
+ (void)PBArrayAdd_unreadFriendAgreeLikeCount;
+ (void)PBArrayAdd_unreadFollowAcceptMsgCount;
+ (void)PBArrayAdd_lastLikeBuffer;
+ (void)PBArrayAdd_lastCommentBuffer;
+ (void)PBArrayAdd_lastFansBuffer;
+ (void)PBArrayAdd_lastReadLikeMaxId;
+ (void)PBArrayAdd_lastReadCommentMaxId;
+ (void)PBArrayAdd_lastReadFansMaxId;
+ (void)PBArrayAdd_unreadFollowCount;
+ (void)PBArrayAdd_unreadLikeCount;
+ (void)PBArrayAdd_unreadCommentCount;
+ (void)PBArrayAdd_latestNotificationBriefing;
+ (void)PBArrayAdd_latestNotificationTime;
+ (void)PBArrayAdd_lastWeChatLikeBuffer;
+ (void)PBArrayAdd_lastWeChatCommentBuffer;
+ (void)PBArrayAdd_lastMemberLikeBuffer;
+ (void)PBArrayAdd_lastMemberCommentBuffer;
+ (void)PBArrayAdd_lastMemberJoinBuffer;
+ (void)PBArrayAdd_memberUnreadLikeCount;
+ (void)PBArrayAdd_memberUnreadCommentCount;
+ (void)PBArrayAdd_memberUnreadJoinCount;
+ (void)PBArrayAdd_memberUnreadQACount;
+ (void)PBArrayAdd_exposeNotificationInfo;
+ (void)PBArrayAdd_exposeNotificationInfoLastSequence;
+ (void)PBArrayAdd_helperNotificationRedDotTips;
+ (void)initialize;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)getPBPropertyTable;
- (id)description;
- (id)getLastMergeBufferWithType:(long long)arg1;
- (unsigned long long)getAuthorLastReadMaxIdWithType:(long long)arg1;
- (void)updateLastMergeBufferWithType:(long long)arg1 lastBuffer:(id)arg2;
- (void)updateLastReadMaxMentionID:(unsigned long long)arg1 type:(long long)arg2;
- (void)updateUnreadCount:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)updateAuthorUnreadCount:(unsigned long long)arg1 type:(long long)arg2;
- (void)updateWechatReadMaxId:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)cleanMentionBuffer;
- (unsigned long long)getNormalUnreadMentionCountByUsername:(id)arg1;
- (unsigned long long)getNormalUnreadMentionCountInnerNotifyScene;
- (unsigned long long)getSystemUnreadMentionCount;
- (unsigned long long)getMemberUnreadMentionCountByUsername:(id)arg1;
- (unsigned long long)getMemberUnreadMentionCountInnerNotifyScene;
- (unsigned long long)getAuthorUnreadNormalCount;
- (void)cleanNormalUnreadMentionCount;
- (void)cleanSystemUnreadMentionCount;
- (void)cleanSystemMSGInfo;
- (void)cleanMemberUnreadMentionCount;
- (unsigned long long)wechatMentionBubbleCount;
- (id)wechatMentionBubbleTitle;
- (id)lastLikeBuffer;
- (void)setLastLikeBuffer:(id)arg1;
- (id)lastCommentBuffer;
- (void)setLastCommentBuffer:(id)arg1;
- (id)lastFansBuffer;
- (void)setLastFansBuffer:(id)arg1;
- (id)lastMergeMentionBuffer;
- (void)setLastMergeMentionBuffer:(id)arg1;
- (id)lastWeChatLikeBuffer;
- (void)setLastWeChatLikeBuffer:(id)arg1;
- (id)lastWeChatCommentBuffer;
- (void)setLastWeChatCommentBuffer:(id)arg1;
- (id)lastMergeSystemMSGBuffer;
- (void)setLastMergeSystemMSGBuffer:(id)arg1;
- (id)lastMemberLikeBuffer;
- (void)setLastMemberLikeBuffer:(id)arg1;
- (id)lastMemberCommentBuffer;
- (void)setLastMemberCommentBuffer:(id)arg1;
- (id)lastMemberJoinBuffer;
- (void)setLastMemberJoinBuffer:(id)arg1;
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
- (id)helperNotificationRedDotTips;
- (void)setHelperNotificationRedDotTips:(id)arg1;
- (id)exposeNotificationInfo;
- (void)setExposeNotificationInfo:(id)arg1;
- (unsigned long long)exposeNotificationInfoLastSequence;
- (void)setExposeNotificationInfoLastSequence:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
