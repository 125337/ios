@interface WCCommentItem : NSObject <NSCoding>
{
    NSString * toUserName; // +0x8
    NSString * itemID; // +0x10
    NSString * content; // +0x18
    int type; // +0x20
    int source; // +0x24
    unsigned int createTime; // +0x28
    WCUserComment * refComment; // +0x30
    unsigned int inQueueTime; // +0x38
    NSString * clientID; // +0x40
    unsigned long long startTime; // +0x48
    unsigned long long endTime; // +0x50
    unsigned int commentFlag; // +0x58
    unsigned int _scene; // +0x5c
    NSData * remindFriendsInfoData; // +0x60
    NSString * _commmentID; // +0x68
    WCTimelineExtBean * _extBean; // +0x70
    unsigned long long _failedType; // +0x78
    SnsEmojiInfoObj * _snsEmojiInfoObj; // +0x80
    NSString * _sessionId; // +0x88
    NSString * _wwFileID; // +0x90
    NSString * _wwMediaUrl; // +0x98
    NSString * _wwMediaMD5; // +0xa0
    long long _commentCGIType; // +0xa8
    NSString * _commentFailedBtnUrl; // +0xb0
    NSString * _commentFailedBtnTitle; // +0xb8
    WCMomentsDragonCommentInfo * _dragonCommentInfo; // +0xc0
}
+ (id)genCommentObject:(id)arg1 content:(id)arg2 ref:(id)arg3 source:(long long)arg4 SnsEmojiInfoObj:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toServerObject;
- (void)setAtFriendContact:(id)arg1;
- (id)extBean;
- (void)setDragonCommentInfo:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (id)itemID;
- (void)setItemID:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)refComment;
- (void)setRefComment:(id)arg1;
- (unsigned int)inQueueTime;
- (void)setInQueueTime:(unsigned int)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned int)commentFlag;
- (void)setCommentFlag:(unsigned int)arg1;
- (id)remindFriendsInfoData;
- (void)setRemindFriendsInfoData:(id)arg1;
- (id)commmentID;
- (void)setCommmentID:(id)arg1;
- (void)setExtBean:(id)arg1;
- (unsigned long long)failedType;
- (void)setFailedType:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)snsEmojiInfoObj;
- (void)setSnsEmojiInfoObj:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)wwFileID;
- (void)setWwFileID:(id)arg1;
- (id)wwMediaUrl;
- (void)setWwMediaUrl:(id)arg1;
- (id)wwMediaMD5;
- (void)setWwMediaMD5:(id)arg1;
- (long long)commentCGIType;
- (void)setCommentCGIType:(long long)arg1;
- (id)commentFailedBtnUrl;
- (void)setCommentFailedBtnUrl:(id)arg1;
- (id)commentFailedBtnTitle;
- (void)setCommentFailedBtnTitle:(id)arg1;
- (id)dragonCommentInfo;
- (void).cxx_destruct;
@end

