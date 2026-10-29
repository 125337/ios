@interface WCTimelineFeedExposureData : MMObject
{
    BOOL _isWs; // +0x8
    BOOL _isWsBlock; // +0x9
    BOOL _isAd; // +0xa
    int _likeCount; // +0xc
    int _commentCount; // +0x10
    int _likeCnt; // +0x14
    int _commCnt; // +0x18
    int _expoCnt; // +0x1c
    int _objectType; // +0x20
    NSString * _feedId; // +0x28
    double _feedheight; // +0x30
    double _stayTimeRelative; // +0x38
    double _realScreenHeight; // +0x40
    double _realShowTime; // +0x48
    NSString * _username; // +0x50
    NSString * _clickList; // +0x58
    NSString * _livePhotoList; // +0x60
    double _mediaTime; // +0x68
    long long _snsFeedTailType; // +0x70
    long long _picCmtCnt; // +0x78
    long long _emoCmtCnt; // +0x80
    NSString * _ybRetouch; // +0x88
    unsigned long long _locationIndex; // +0x90
    NSString * _nickName; // +0x98
}
- (id)toString;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (double)feedheight;
- (void)setFeedheight:(double)arg1;
- (double)stayTimeRelative;
- (void)setStayTimeRelative:(double)arg1;
- (double)realScreenHeight;
- (void)setRealScreenHeight:(double)arg1;
- (double)realShowTime;
- (void)setRealShowTime:(double)arg1;
- (int)likeCount;
- (void)setLikeCount:(int)arg1;
- (int)commentCount;
- (void)setCommentCount:(int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (int)likeCnt;
- (void)setLikeCnt:(int)arg1;
- (int)commCnt;
- (void)setCommCnt:(int)arg1;
- (id)clickList;
- (void)setClickList:(id)arg1;
- (id)livePhotoList;
- (void)setLivePhotoList:(id)arg1;
- (int)expoCnt;
- (void)setExpoCnt:(int)arg1;
- (double)mediaTime;
- (void)setMediaTime:(double)arg1;
- (BOOL)isWs;
- (void)setIsWs:(BOOL)arg1;
- (BOOL)isWsBlock;
- (void)setIsWsBlock:(BOOL)arg1;
- (long long)snsFeedTailType;
- (void)setSnsFeedTailType:(long long)arg1;
- (long long)picCmtCnt;
- (void)setPicCmtCnt:(long long)arg1;
- (long long)emoCmtCnt;
- (void)setEmoCmtCnt:(long long)arg1;
- (id)ybRetouch;
- (void)setYbRetouch:(id)arg1;
- (unsigned long long)locationIndex;
- (void)setLocationIndex:(unsigned long long)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (BOOL)isAd;
- (void)setIsAd:(BOOL)arg1;
- (int)objectType;
- (void)setObjectType:(int)arg1;
- (void).cxx_destruct;
@end
