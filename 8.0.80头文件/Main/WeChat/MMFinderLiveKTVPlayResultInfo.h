@interface MMFinderLiveKTVPlayResultInfo : NSObject
{
    BOOL _noteEmpty; // +0x8
    BOOL _qrcEmpty; // +0x9
    int _errorCode; // +0xc
    int _songPrepareCostTime; // +0x10
    int _sampleRate; // +0x14
    int _channelCnt; // +0x18
    int _scoreEngineFlag; // +0x1c
    int _reverbEngineFlag; // +0x20
    long long _result; // +0x28
    long long _customResult; // +0x30
    NSString * _errorMsg; // +0x38
    unsigned long long _networkType; // +0x40
    NSDictionary * _extraInfo; // +0x48
}
+ (id)generateResultForResPrepare:(id)arg1 prepareCostTime:(int)arg2;
+ (id)generateResultForSongStart:(long long)arg1 extraRet:(int)arg2 frameUnitParam:(id)arg3 scoreEngineFlag:(int)arg4 reverbEngineFlag:(int)arg5 prepareCostTime:(int)arg6;
+ (unsigned long long)transferMetricsNetworkTypeToKTVNetworkType:(unsigned int)arg1;
- (BOOL)isValid;
- (id)description;
- (long long)result;
- (void)setResult:(long long)arg1;
- (long long)customResult;
- (void)setCustomResult:(long long)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (unsigned long long)networkType;
- (void)setNetworkType:(unsigned long long)arg1;
- (int)songPrepareCostTime;
- (void)setSongPrepareCostTime:(int)arg1;
- (BOOL)noteEmpty;
- (void)setNoteEmpty:(BOOL)arg1;
- (BOOL)qrcEmpty;
- (void)setQrcEmpty:(BOOL)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)channelCnt;
- (void)setChannelCnt:(int)arg1;
- (int)scoreEngineFlag;
- (void)setScoreEngineFlag:(int)arg1;
- (int)reverbEngineFlag;
- (void)setReverbEngineFlag:(int)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
