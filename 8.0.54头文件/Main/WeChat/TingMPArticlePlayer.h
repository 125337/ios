@interface TingMPArticlePlayer : TingAudioPlayer <IWCAudioPlayerExt>
{
    WCAudioPlayer * _player; // +0x8
    MMListenTTSInfo * _ttsInfo; // +0x10
    long long _remainedErrorRetryCount; // +0x18
}
- (id)initWithTingItem:(id)arg1 configuartion:(id)arg2;
- (void)prepareToPlay;
- (BOOL)canRetry;
- (BOOL)isHLS;
- (id)audioInfo;
- (BOOL)isPlayRateSupported;
- (void)setPlayRate:(float)arg1;
- (double)duration;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)ttsInfo;
- (void)setTtsInfo:(id)arg1;
- (long long)remainedErrorRetryCount;
- (void)setRemainedErrorRetryCount:(long long)arg1;
- (void).cxx_destruct;
@end

