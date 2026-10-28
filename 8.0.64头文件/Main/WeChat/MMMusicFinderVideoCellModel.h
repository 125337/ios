@interface MMMusicFinderVideoCellModel : NSObject
{
    BOOL _bAuth; // +0x8
    unsigned int _likeCount; // +0xc
    int _videoDuration; // +0x10
    int _pos; // +0x14
    unsigned long long _source; // +0x18
    NSString * _tid; // +0x20
    NSString * _coverUrl; // +0x28
    double _coverWidth; // +0x30
    double _coverHeight; // +0x38
    NSString * _avatarUrl; // +0x40
    NSString * _nickName; // +0x48
    NSString * _username; // +0x50
    NSString * _desc; // +0x58
    NSString * _videoUrl; // +0x60
    NSString * _comment; // +0x68
    WCFinderMediaInfo * _finderMediaInfo; // +0x70
    NSString * _reqId; // +0x78
    NSString * _recommendReason; // +0x80
    NSString * _debugMsg; // +0x88
}
+ (id)combineTid:(id)arg1 nonceId:(id)arg2;
+ (void)retriveTidAndNonceId:(id)arg1 tid:(id *)arg2 nonceId:(id *)arg3;
+ (id)modelFromFinderDataItem:(id)arg1 source:(unsigned long long)arg2;
- (CGSize)estimateCellSizeWithMaxWidth:(double)arg1;
- (CGSize)estimateCoverSizeWithMaxWidth:(double)arg1;
- (BOOL)canSelectVideoWithMinDuration:(double)arg1;
- (unsigned long long)getFeedFrom;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMMMusicFinderVideoCellModel:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (double)coverWidth;
- (void)setCoverWidth:(double)arg1;
- (double)coverHeight;
- (void)setCoverHeight:(double)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (BOOL)bAuth;
- (void)setBAuth:(BOOL)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (int)videoDuration;
- (void)setVideoDuration:(int)arg1;
- (id)finderMediaInfo;
- (void)setFinderMediaInfo:(id)arg1;
- (int)pos;
- (void)setPos:(int)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)debugMsg;
- (void)setDebugMsg:(id)arg1;
- (void).cxx_destruct;
@end
