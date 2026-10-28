@interface MMLiveLikePostTask : NSObject
{
    BOOL _isClipMode; // +0x8
    MMLiveTaskId * _liveTaskId; // +0x10
    unsigned long long _likeCount; // +0x18
    unsigned long long _previousLikeCount; // +0x20
    unsigned long long _doubleClickLikeCount; // +0x28
}
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (BOOL)isClipMode;
- (void)setIsClipMode:(BOOL)arg1;
- (unsigned long long)previousLikeCount;
- (void)setPreviousLikeCount:(unsigned long long)arg1;
- (unsigned long long)doubleClickLikeCount;
- (void)setDoubleClickLikeCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
