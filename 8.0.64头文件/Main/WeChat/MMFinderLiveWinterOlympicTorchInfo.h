@interface MMFinderLiveWinterOlympicTorchInfo : NSObject
{
    BOOL _isTorcher; // +0x8
    BOOL _isLightTorch; // +0x9
    BOOL _isStarted; // +0xa
    BOOL _isJoinRunWith; // +0xb
    BOOL _isAutoAdd; // +0xc
    unsigned int _remainingTime; // +0x10
    unsigned int _startRemainingDay; // +0x14
    unsigned long long _torcherTotal; // +0x18
    unsigned long long _certId; // +0x20
    unsigned long long _joinRunWithTotal; // +0x28
    NSMutableArray * _bgmUrls; // +0x30
    NSString * _fromWxUsername; // +0x38
    NSString * _fromFinderUsername; // +0x40
}
- (unsigned long long)nextCertificateOperation;
- (void)updateWithInitTorchLiveResponse:(id)arg1;
- (unsigned int)remainingTime;
- (void)setRemainingTime:(unsigned int)arg1;
- (BOOL)isTorcher;
- (void)setIsTorcher:(BOOL)arg1;
- (unsigned long long)torcherTotal;
- (void)setTorcherTotal:(unsigned long long)arg1;
- (unsigned long long)certId;
- (void)setCertId:(unsigned long long)arg1;
- (BOOL)isLightTorch;
- (void)setIsLightTorch:(BOOL)arg1;
- (BOOL)isStarted;
- (void)setIsStarted:(BOOL)arg1;
- (BOOL)isJoinRunWith;
- (void)setIsJoinRunWith:(BOOL)arg1;
- (unsigned long long)joinRunWithTotal;
- (void)setJoinRunWithTotal:(unsigned long long)arg1;
- (unsigned int)startRemainingDay;
- (void)setStartRemainingDay:(unsigned int)arg1;
- (id)bgmUrls;
- (void)setBgmUrls:(id)arg1;
- (id)fromWxUsername;
- (void)setFromWxUsername:(id)arg1;
- (id)fromFinderUsername;
- (void)setFromFinderUsername:(id)arg1;
- (BOOL)isAutoAdd;
- (void)setIsAutoAdd:(BOOL)arg1;
- (void).cxx_destruct;
@end
