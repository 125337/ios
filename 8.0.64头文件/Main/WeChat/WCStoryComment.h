@interface WCStoryComment : NSObject <PBCoding>
{
    BOOL _isUnRead; // +0x8
    BOOL _isDoubleClickBubble; // +0x9
    BOOL _isPosting; // +0xa
    unsigned int _createTime; // +0xc
    unsigned int _isNotRichText; // +0x10
    unsigned int _deleteFlag; // +0x14
    unsigned int _commentFlag; // +0x18
    unsigned int _inQueueTime; // +0x1c
    unsigned int _retryCount; // +0x20
    unsigned int _objCreateTime; // +0x24
    unsigned int _type; // +0x28
    unsigned int _previewEnterScene; // +0x2c
    unsigned int _profileSource; // +0x30
    NSString * _realNickName; // +0x38
    NSString * _replyNickName; // +0x40
    NSString * _uniqueID; // +0x48
    NSString * _tid; // +0x50
    NSString * _userName; // +0x58
    NSString * _nickName; // +0x60
    NSString * _content; // +0x68
    NSString * _commentId; // +0x70
    NSString * _replyCommentId; // +0x78
    NSString * _replyUserName; // +0x80
    NSString * _thumbUrl; // +0x88
    long long _errorType; // +0x90
    WCStoryComment * _replyComment; // +0x98
    NSString * _disPlayNickName; // +0xa0
    NSString * _disPlayReplyNickName; // +0xa8
    unsigned long long _commentHash; // +0xb0
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_commentId;
+ (void)PBArrayAdd_isNotRichText;
+ (void)PBArrayAdd_replyCommentId;
+ (void)PBArrayAdd_replyUserName;
+ (void)PBArrayAdd_deleteFlag;
+ (void)PBArrayAdd_commentFlag;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_inQueueTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_errorType;
+ (void)PBArrayAdd_isDoubleClickBubble;
+ (void)PBArrayAdd_objCreateTime;
+ (void)PBArrayAdd_replyComment;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_isPosting;
+ (void)initialize;
+ (id)storyCommentFromServerObj:(id)arg1;
+ (id)storyCommentFromSyncMsgDetail:(id)arg1;
+ (id)nickNameOfUserName:(id)arg1;
+ (id)displayNameOfNickName:(id)arg1 maxLength:(unsigned long long)arg2;
- (id)getPBPropertyTable;
- (id)toServerObject;
- (id)replyNickName;
- (id)realNickName;
- (id)uniqueID;
- (BOOL)isValid;
- (BOOL)isBubble;
- (BOOL)isVisitRecord;
- (unsigned long long)hash;
- (id)description;
- (unsigned int)getCommentType;
- (BOOL)isPostBySelf;
- (BOOL)isEqualToComment:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (BOOL)isUnRead;
- (void)setIsUnRead:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)commentId;
- (void)setCommentId:(id)arg1;
- (unsigned int)isNotRichText;
- (void)setIsNotRichText:(unsigned int)arg1;
- (id)replyCommentId;
- (void)setReplyCommentId:(id)arg1;
- (id)replyUserName;
- (void)setReplyUserName:(id)arg1;
- (unsigned int)deleteFlag;
- (void)setDeleteFlag:(unsigned int)arg1;
- (unsigned int)commentFlag;
- (void)setCommentFlag:(unsigned int)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (unsigned int)inQueueTime;
- (void)setInQueueTime:(unsigned int)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (BOOL)isDoubleClickBubble;
- (void)setIsDoubleClickBubble:(BOOL)arg1;
- (unsigned int)objCreateTime;
- (void)setObjCreateTime:(unsigned int)arg1;
- (id)replyComment;
- (void)setReplyComment:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)disPlayNickName;
- (id)disPlayReplyNickName;
- (unsigned int)previewEnterScene;
- (void)setPreviewEnterScene:(unsigned int)arg1;
- (unsigned int)profileSource;
- (void)setProfileSource:(unsigned int)arg1;
- (BOOL)isPosting;
- (void)setIsPosting:(BOOL)arg1;
- (unsigned long long)commentHash;
- (void)setCommentHash:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
