@interface WCCommentObject : NSObject <MusicInteractionStatistics>
{
    BOOL _isSelfLiked; // +0x8
    unsigned long long _obejctType; // +0x10
    unsigned long long _commentCount; // +0x18
    unsigned long long _likeCount; // +0x20
    unsigned long long _forwardCount; // +0x28
    WCCommentUniCommentInfo * _uniCommentInfo; // +0x30
    WCCommentObjectFinderInfo * _finderInfo; // +0x38
}
- (id)musicInteractionidentifier;
- (BOOL)isValidMusicInteractionStatistics;
- (id)commentObjectId;
- (unsigned long long)obejctType;
- (void)setObejctType:(unsigned long long)arg1;
- (unsigned long long)commentCount;
- (void)setCommentCount:(unsigned long long)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (unsigned long long)forwardCount;
- (void)setForwardCount:(unsigned long long)arg1;
- (BOOL)isSelfLiked;
- (void)setIsSelfLiked:(BOOL)arg1;
- (id)uniCommentInfo;
- (void)setUniCommentInfo:(id)arg1;
- (id)finderInfo;
- (void)setFinderInfo:(id)arg1;
- (void).cxx_destruct;
@end

