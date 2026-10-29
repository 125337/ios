@interface MMFinderLiveLikeAudiencePostTask : NSObject
{
    unsigned int _likeCount; // +0x8
    unsigned int _doubleClickLikeCount; // +0xc
    MMFinderLiveTaskId * _taskId; // +0x10
    NSString * _micId; // +0x18
    NSString * _finderUserName; // +0x20
}
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)micId;
- (void)setMicId:(id)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (unsigned int)doubleClickLikeCount;
- (void)setDoubleClickLikeCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
