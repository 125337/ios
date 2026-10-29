@interface WCTimelineFeedExposureData : MMObject
{
    BOOL _isAd; // +0x8
    int _likeCount; // +0xc
    int _commentCount; // +0x10
    int _objectType; // +0x14
    NSString * _feedId; // +0x18
    double _feedheight; // +0x20
    double _stayTimeRelative; // +0x28
    double _realScreenHeight; // +0x30
    double _realShowTime; // +0x38
    NSString * _username; // +0x40
    unsigned long long _locationIndex; // +0x48
    NSString * _nickName; // +0x50
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

