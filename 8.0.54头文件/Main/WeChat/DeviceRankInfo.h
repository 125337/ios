@interface DeviceRankInfo : NSObject
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
    NSString * _rankTitle; // +0x18
    NSString * _scoreTitle; // +0x20
    unsigned int _rank; // +0x28
    unsigned int _score; // +0x2c
    unsigned int _likeCount; // +0x30
    BOOL _hasLike; // +0x34
    BOOL _localLike; // +0x35
    NSString * _m_deviceId; // +0x38
    SportRecord * _record; // +0x40
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (unsigned int)rank;
- (void)setRank:(unsigned int)arg1;
- (unsigned int)score;
- (void)setScore:(unsigned int)arg1;
- (id)rankTitle;
- (void)setRankTitle:(id)arg1;
- (id)scoreTitle;
- (void)setScoreTitle:(id)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (BOOL)hasLike;
- (void)setHasLike:(BOOL)arg1;
- (BOOL)localLike;
- (void)setLocalLike:(BOOL)arg1;
- (id)m_deviceId;
- (void)setM_deviceId:(id)arg1;
- (id)record;
- (void)setRecord:(id)arg1;
- (void).cxx_destruct;
@end

