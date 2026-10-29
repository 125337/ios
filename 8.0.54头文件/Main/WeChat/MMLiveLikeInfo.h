@interface MMLiveLikeInfo : NSObject
{
    MMLiveTaskId * _liveTaskId; // +0x8
    unsigned long long _likeCount; // +0x10
    unsigned long long _displayLikeCount; // +0x18
    unsigned long long _selfLikeCount; // +0x20
}
- (void)setLikeCount:(unsigned long long)arg1;
- (void)addDisplayLikeCount;
- (void)setDisplayLikeCount:(unsigned long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned long long)likeCount;
- (unsigned long long)displayLikeCount;
- (unsigned long long)selfLikeCount;
- (void)setSelfLikeCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

