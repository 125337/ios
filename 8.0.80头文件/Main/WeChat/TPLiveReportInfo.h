@interface TPLiveReportInfo : TPDefaultReportInfo
{
    BOOL _isUserPay; // +0xd0
    BOOL _isLookBack; // +0xd1
    long long _adPlayLength; // +0xd8
    long long _programId; // +0xe0
    long long _streamId; // +0xe8
    long long _contentId; // +0xf0
    long long _playTime; // +0xf8
    long long _liveType; // +0x100
    NSString * _cdnServer; // +0x108
    long long _liveDelay; // +0x110
}
- (long long)playType;
- (long long)adPlayLength;
- (void)setAdPlayLength:(long long)arg1;
- (long long)programId;
- (void)setProgramId:(long long)arg1;
- (long long)streamId;
- (void)setStreamId:(long long)arg1;
- (long long)contentId;
- (void)setContentId:(long long)arg1;
- (long long)playTime;
- (void)setPlayTime:(long long)arg1;
- (BOOL)isUserPay;
- (void)setIsUserPay:(BOOL)arg1;
- (long long)liveType;
- (void)setLiveType:(long long)arg1;
- (id)cdnServer;
- (void)setCdnServer:(id)arg1;
- (BOOL)isLookBack;
- (void)setIsLookBack:(BOOL)arg1;
- (long long)liveDelay;
- (void)setLiveDelay:(long long)arg1;
- (void).cxx_destruct;
@end
