@interface WCFinderLikeCGIParam : NSObject
{
    BOOL _isCommentLike; // +0x8
    BOOL _isPrivateLike; // +0x9
    int _reportScene; // +0xc
    int _likeFlag; // +0x10
    int _likeSourceType; // +0x14
    NSString * _tid; // +0x18
    NSString * _nonceID; // +0x20
    NSString * _exportID; // +0x28
    NSString * _dupIdentifier; // +0x30
    unsigned long long _scene; // +0x38
    unsigned long long _commentID; // +0x40
    NSString * _sessionBuffer; // +0x48
    unsigned long long _bypassBufferType; // +0x50
    NSData * _bypassBuffer; // +0x58
    NSString * _finderUsername; // +0x60
    NSString * _likeUsername; // +0x68
    NSDictionary * _additionalClientUdfKv; // +0x70
    unsigned long long _opType; // +0x78
    FinderLikeNewLifeReportInfo * _newlifeReportInfo; // +0x80
    unsigned long long _comboLikeCount; // +0x88
    FinderInteractionMileStoneInfo * _showMilestoneInfo; // +0x90
    WCFinderFeedLikeMilestoneInfo * _inProgressMilestone; // +0x98
}
- (void)setIsCommentLike:(BOOL)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)exportID;
- (void)setExportID:(id)arg1;
- (id)dupIdentifier;
- (void)setDupIdentifier:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)commentID;
- (void)setCommentID:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)bypassBufferType;
- (void)setBypassBufferType:(unsigned long long)arg1;
- (id)bypassBuffer;
- (void)setBypassBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)likeUsername;
- (void)setLikeUsername:(id)arg1;
- (BOOL)isCommentLike;
- (id)additionalClientUdfKv;
- (void)setAdditionalClientUdfKv:(id)arg1;
- (int)likeFlag;
- (void)setLikeFlag:(int)arg1;
- (unsigned long long)opType;
- (void)setOpType:(unsigned long long)arg1;
- (int)likeSourceType;
- (void)setLikeSourceType:(int)arg1;
- (BOOL)isPrivateLike;
- (void)setIsPrivateLike:(BOOL)arg1;
- (id)newlifeReportInfo;
- (void)setNewlifeReportInfo:(id)arg1;
- (unsigned long long)comboLikeCount;
- (void)setComboLikeCount:(unsigned long long)arg1;
- (id)showMilestoneInfo;
- (void)setShowMilestoneInfo:(id)arg1;
- (id)inProgressMilestone;
- (void)setInProgressMilestone:(id)arg1;
- (void).cxx_destruct;
@end
