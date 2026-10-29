@interface MMLiveLikePostTask : NSObject
{
    BOOL _isClipMode; // +0x8
    MMLiveTaskId * _liveTaskId; // +0x10
    unsigned long long _likeCount; // +0x18
}
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (BOOL)isClipMode;
- (void)setIsClipMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

