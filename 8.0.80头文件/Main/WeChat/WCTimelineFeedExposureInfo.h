@interface WCTimelineFeedExposureInfo : MMObject
{
    BOOL _isWs; // +0x8
    BOOL _isWsBlock; // +0x9
    BOOL _isAd; // +0xa
    int _likeCount; // +0xc
    int _commentCount; // +0x10
    int _expoCnt; // +0x14
    int _objectType; // +0x18
    NSString * _feedId; // +0x20
    double _exposurePosiY; // +0x28
    double _exposureHeight; // +0x30
    double _originPosiY; // +0x38
    double _originHeight; // +0x40
    double _realScreenHeight; // +0x48
    NSString * _username; // +0x50
    long long _snsFeedTailType; // +0x58
    long long _picCmtCnt; // +0x60
    long long _emoCmtCnt; // +0x68
    NSString * _ybRetouch; // +0x70
    unsigned long long _locationIndex; // +0x78
    NSString * _nickName; // +0x80
}
- (id)toString;
- (double)getSelfExposurePercent;
- (double)getScreenExposurePercent;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (double)exposurePosiY;
- (void)setExposurePosiY:(double)arg1;
- (double)exposureHeight;
- (void)setExposureHeight:(double)arg1;
- (double)originPosiY;
- (void)setOriginPosiY:(double)arg1;
- (double)originHeight;
- (void)setOriginHeight:(double)arg1;
- (double)realScreenHeight;
- (void)setRealScreenHeight:(double)arg1;
- (int)likeCount;
- (void)setLikeCount:(int)arg1;
- (int)commentCount;
- (void)setCommentCount:(int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (int)expoCnt;
- (void)setExpoCnt:(int)arg1;
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
