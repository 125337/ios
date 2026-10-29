@interface MMFinderLiveLikeAudienceInfo : NSObject
{
    MMFinderLiveTaskId * _taskId; // +0x8
    NSString * _micId; // +0x10
    unsigned long long _displayLikeCount; // +0x18
    unsigned long long _selfLikeCount; // +0x20
}
- (void)addDisplayLikeCount;
- (void)updateDisplayLikeCount:(unsigned long long)arg1;
- (unsigned long long)othersDisplayLikeCount;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)micId;
- (void)setMicId:(id)arg1;
- (unsigned long long)displayLikeCount;
- (void)setDisplayLikeCount:(unsigned long long)arg1;
- (unsigned long long)selfLikeCount;
- (void)setSelfLikeCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
