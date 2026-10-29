@interface MMFinderLiveConnectMicPkUser : NSObject <NSCopying>
{
    BOOL _isAccept; // +0x8
    BOOL _isApplicant; // +0x9
    unsigned int _winningStreakCount; // +0xc
    unsigned int _boardType; // +0x10
    unsigned int _seatId; // +0x14
    NSString * _sdkUserId; // +0x18
    NSString * _finderUsername; // +0x20
    WCFinderContact * _contact; // +0x28
    NSString * _boardKey; // +0x30
    unsigned long long _genericScore; // +0x38
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEmptyUser;
- (BOOL)isAccept;
- (void)setIsAccept:(BOOL)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned int)winningStreakCount;
- (void)setWinningStreakCount:(unsigned int)arg1;
- (id)boardKey;
- (void)setBoardKey:(id)arg1;
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (BOOL)isApplicant;
- (void)setIsApplicant:(BOOL)arg1;
- (unsigned long long)genericScore;
- (void)setGenericScore:(unsigned long long)arg1;
- (unsigned int)seatId;
- (void)setSeatId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

